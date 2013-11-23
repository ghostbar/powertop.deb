#ifndef __INCLUDE_GUARD_CCS_H
#define __INCLUDE_GUARD_CCS_H

const char css[] = 
	"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n"
	"<html>\n"
	"<head>\n"
	"<title>PowerTOP report</title>\n"
	"<meta http-equiv=\"content-type\" content=\"text/html;charset=utf-8\">\n"
	"<script type='text/javascript'>\n"
	"\n"
	"var powertop = {\n"
	" blocks: {\n"
	"  system: 'System Info',\n"
	"  summary: 'Summary',\n"
	"  cpuidle: 'CPU Idle',\n"
	"  cpufreq: 'CPU Frequency',\n"
	"  software: 'Software Info',\n"
	"  device: 'Device Info',\n"
	"  tuning: 'Tuning'\n"
	" },\n"
	" cadd: function(idx, c){\n"
	"   var el = document.getElementById(idx);\n"
	"   if (el) {\n"
	"      var cn = el.className;\n"
	"      if (cn.indexOf(c) != -1)\n"
	"         return;\n"
	"      cn += ' ' + c;\n"
	"      el.className = cn;\n"
	"   }\n"
	" },\n"
	" crm: function(id, c){\n"
	"   var el = document.getElementById(id);\n"
	"   if (el) {\n"
	"      var cn = el.className\n"
	"      while (cn.indexOf(' ' + c) != -1)\n"
	"         cn = cn.replace(' ' + c,'');\n"
	"      el.className = cn;\n"
	"   }\n"
	" },\n"
	" newbutton: function(id, txt) {\n"
	"  var x = document.createElement('div');\n"
	"  x.id = id + '_button';\n"
	"  x.className = 'nav_button';\n"
	"  x.textContent = txt;\n"
	"  x.innerText = txt;\n"
	"  x.onclick = function() { powertop.toggle(id); };\n"
	"  return x;\n"
	" },\n"
	" setupbuttons: function() {\n"
	"   var t = document.getElementById('top');\n"
	"   if (t) {\n"
	"     for (var b in powertop.blocks) {\n"
	"       t.appendChild(powertop.newbutton(b, powertop.blocks[b]));\n"
	"     }\n"
	"    t.appendChild(powertop.newbutton('all', 'All'));\n"
	"   }\n"
	" },\n"
	" toggle: function(b) {\n"
	"   powertop.baseall();\n"
	"   if (b == 'all') {\n"
	"      for (var c in powertop.blocks) {\n"
	"        powertop.crm(c, 'hide');\n"
	"      }\n"
	"   } else {\n"
	"      powertop.crm(b, 'hide');\n"
	"   }\n"
	"   powertop.cadd(b + '_button', 'pressed');\n"
	" },\n"
	" baseall: function() {\n"
	"   for (var b in powertop.blocks) {\n"
	"     powertop.cadd(b, 'hide');\n"
	"     powertop.crm(b + '_button', 'pressed');\n"
	"   }\n"
	"   powertop.cadd('all', 'hide');\n"
	"   powertop.crm('all_button', 'pressed');\n"
	" },\n"
	" onload: function() {\n"
	"   powertop.setupbuttons();\n"
	"   powertop.toggle('summary');\n"
	" }\n"
	"}\n"
	"\n"
	"</script>\n"
	"<style type='text/css'>\n"
	"table\n"
	"{\n"
	"	background-color: #F8F8F8;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"th\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"th.device\n"
	"{\n"
	"	text-align: left;\n"
	"}\n"
	"th.process\n"
	"{\n"
	"	text-align: left;\n"
	"}\n"
	"\n"
	"th.tunable\n"
	"{\n"
	"	text-align: left;\n"
	"}\n"
	"\n"
	"td.package_odd\n"
	"{\n"
	"	background-color: #E0ffE0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"td.package_even\n"
	"{\n"
	"	background-color: #F0ffF0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.core_even\n"
	"{\n"
	"	background-color: #F0ffF0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.core_odd\n"
	"{\n"
	"	background-color: #E0E0ff;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.cpu_even_freq\n"
	"{\n"
	"	background-color: #E2E2E2;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"td.cpu_odd_freq\n"
	"{\n"
	"	background-color: #F4f4F4;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"td.cpu_even_even\n"
	"{\n"
	"	background-color: #E0E0f0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.cpu_even_odd\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"td.cpu_odd_even\n"
	"{\n"
	"	background-color: #E0E0ff;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.cpu_odd_odd\n"
	"{\n"
	"	background-color: #F0ffF0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"tr.device_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.device_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.process_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.process_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"td.device_power\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.process_power\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.device_util\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"tr.tunable_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.tunable_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.tunable_odd_bad\n"
	"{\n"
	"	background-color: #FFE0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.tunable_even_bad\n"
	"{\n"
	"	background-color: #FFf0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.system_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.system_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.device_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.device_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"body {\n"
	"	background-color: #eee; /* Background color */\n"
	"	color: #222;            /* Foreground color used for text */\n"
	"	font-family: Helvetica;\n"
	"	font-size: 14px;\n"
	"	margin: 0;              /* Amount of negative space around the\n"
	"                                   outside of the body */\n"
	"	padding: 0;             /* Amount of negative space around the\n"
	"                                   inside of the body */\n"
	"}\n"
	"#top {\n"
	"	background-color: #ccc;\n"
	"	border-bottom: 1px solid #666;\n"
	"	color: #222;\n"
	"	display: block;\n"
	"	font-size: 20px;\n"
	"	font-weight: bold;\n"
	"	padding: 10px 0;\n"
	"	text-align: center;\n"
	"	text-decoration: none;\n"
	"	text-shadow: 0px 1px 1px #fff;\n"
	"	background-image: -webkit-gradient(linear, left top, left bottom,\n"
	"						from(#ccc), to(#999));\n"
	"}\n"
	"\n"
	"\n"
	"#top div {\n"
	"	height: 30px;\n"
	"	font-weight: bold;\n"
	"	text-align: center;\n"
	"	color: white;\n"
	"	text-shadow: rgba(0,0,0,0.6) 0px -1px 1px;\n"
	"	line-height: 28px;\n"
	"	border-width:0px 8px 0px 8px;\n"
	"}\n"
	"#top div.nav_button {\n"
	" display: inline;\n"
	" cursor: pointer;\n"
	" padding: 0.3em 0.5em;\n"
	" margin: 0 0.2em;\n"
	"}\n"
	"\n"
	"div.pressed {\n"
	"	background-color: #000000;\n"
	"	border: 1px solid #000000;\n"
	"	color: #000000;\n"
	"	border-radius: 8px;\n"
	"}\n"
	"div.hide {\n"
	" display: none;\n"
	"}\n"
	"</style>\n"
	"</head>\n"
	"\n"
	"<body onload='powertop.onload();'>\n"
	"<div id='top'>\n"
	"</div>\n"
	"\n"
;
#endif
