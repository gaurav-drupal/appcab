<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?><style>
/* CSS FOR EDIT RIDE POP UP*/
 .views-field p span,.views-field p{display:none;}
	.select_label ul{display: flex;}
	.select_label li{flex:1 1 30%;}
	.select_label li select{width:80%;}	
	#user_dat{cursor: pointer;float: right;margin-left: 40px;}
	.select_label .close-reveal-modal{
    color: #FFFFFF;
    cursor: pointer;
    font-size: 1em;
    font-weight: bold;
   
    right: 11px;
    text-shadow: 0 -1px 1px rgba(0, 0, 0, 0.6);
    top: 8px;
}

.views-field {float: right;}
.views-field > a{padding:0 23px;}
/*@media only screen and (max-width: 1280px) {
	.reveal-modal{position:fixed !important}
}*/

@media only screen and (max-width: 480px) {
	.select_label ul{-webkit-flex-flow: column;
    flex-flow: column;
    flex-direction: column;}
    .select_label{width:70%;}
    .select_label li select{width:100%;}
    .select_label input[type="submit"] {
    width: 100%;}
    
    }
    .row{overflow:visible;}

    #edit_start_time{top:0px;}
   /*#edit_start_time{top:0px !important;}
    .reveal-modal{position:fixed;}
    .select_label li{
    margin-top:-13px;}
}*/
}
.user_data_class{
    left: 240px;
    position: relative;
    top: -24px;
}

.columns dl{float:left;}
@media screen and (max-width: 767px) {
.views-field{float:none; display:inline-block;}
.views-field > a {
    padding: 0 55px;
}
}
@media screen and (max-width: 639px) {
.panel,.columns dl{width:100%;float:none;}}

@media screen and (max-width: 450px){
.views-field > a {
    padding: 0 48px;
}}

@media screen and (max-width: 340px){
#user_dat {
    margin-left: 0;
}}
</style>


<form action="/edit_schedule" method="post" enctype="multipart/form-data">
<div id="edit_start_time" class="reveal-modal [expand, xlarge, large, medium, small] select_label">
	<ul>
	<li>
		<label for="edit-field-start-time-und-0-value-day"><span>Month</span> </label>
	<select id="month" name="field_start_time[und][0][value][month]">
		<option value="1">Jan</option>
		<option value="2">Feb</option>
		<option value="3">Mar</option>
		<option value="4">Apr</option>
		<option value="5">May</option>
		<option value="6">Jun</option>
		<option value="7">Jul</option>
		<option value="8">Aug</option>
		<option value="9">Sep</option>
		<option value="10">Oct</option>
		<option value="11">Nov</option>
		<option value="12">Dec</option>
	</select>
	</li>
	<li>
		<label for="edit-field-start-time-und-0-value-day">
		<span class="secondary label">Day</span> </label>
	<select class="date-clear form-select" id="day" name="field_start_time[und][0][value][day]">
		<?php for($i=1;$i<=31;$i++){ ?>
			<option value="<?php echo $i; ?>"><?php echo $i; ?></option>
		<?php } ?>
		</select>
	</li>
	
	<li>
	 <label for="edit-field-start-time-und-0-value-year"><span class="secondary label">Year</span> </label>
	         <select class="date-clear form-select" id="year" name="field_start_time[und][0][value][year]">
	         <option value="2014">2014</option><option value="2015">2015</option><option value="2016">2016</option><option value="2017">2017</option>		
	         </select>
	</li>
	<li>
	<label for="edit-field-start-time-und-0-value-hour"><span class="secondary label">Hour</span> </label>
		<select name="field_start_time[und][0][value][hour]" id="hr">
		<?php for($i=1;$i<=12;$i++){ ?>
			<option value="<?php echo $i; ?>"><?php echo $i; ?></option>
		<?php } ?>
		</select>
            </li>
	<li>
	
	<label for="edit-field-start-time-und-0-value-minute"><span class="secondary label">Minute</span> </label>
	<select id="min" name="field_start_time[und][0][value][minute]">
	<?php for($i=00;$i<=59;$i++){ ?>
			<option value="<?php echo $i; ?>"><?php echo $i; ?></option>
		<?php } ?>
	</select>
        </li>
        
<li>
	<label for="edit-field-start-time-und-0-value-ampm"><span class="secondary label">&nbsp;</span> </label>
	<select id="ampm" name="field_start_time[und][0][value][ampm]">
	<option value="am">am</option><option value="pm">pm</option></select>
</li>

<div class="clr"></div>

	</ul>
	<input type="text" name="field_start_time[und][0][value][nid]"  class="ride_date_edit" style="display:none">
	<div class="close-reveal-modal button tiny alert">Cancel</div>
	<input type="submit"  class="small button" id="save-later-ride" value="Save">
	</div>
	</div>

</form>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
<script>
jQuery('.user_data_class').click(function(){ 
  var date_field = jQuery(this).parent().find('span').find('p').find('span').html();
  var ide =  jQuery(this).parent().find('p').find('.uid').html();
  var dte = date_field.split(",");
  var res = dte[1];
  var res2 = res.split("-");
  var splitdate = res2[0].split("/");
  var month = parseInt(splitdate[0]);
  var temp = splitdate[1];
  var date1 = parseInt(temp.trim());
  var year = parseInt(splitdate[2]);
  var time1 = res2[1].split(":");
  var temphr = time1[0];
  var hr = parseInt(temphr.trim());
  var tempmin =  time1[1];
  var minute = parseInt(tempmin.trim());
  var tm =res2[1];
  var h = hr % 12;
  if (h === 0) h = 12;
  var t = (h < 10 ? "0" + h : h) ;
  var ampm = (hr < 12 ? 'am' : 'pm');
  jQuery('#day').val(date1);
  jQuery('#month').val(month);
  jQuery('#year').val(year);
  jQuery('#ampm').val(ampm);
  jQuery('#hr').val(parseInt(t));
  jQuery('#min').val(minute);
  jQuery('.ride_date_edit').val(ide);
});
 jQuery(function(){
 var i= 0;
  
for(i=1;i<=(jQuery(".views-row").size());i++){

jQuery(".views-row-"+i+" div:nth-child(3)").appendTo(".views-row-"+i+" .panel");
jQuery(".views-row-"+i+" #user_dat").appendTo(".views-row-"+i+" .panel");
jQuery(".views-row-"+i+" div:nth-child(2)").appendTo(".views-row-"+i+" .panel");
}


});

</script>