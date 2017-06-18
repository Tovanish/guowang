<?php
$z[0]=Array("field","",254,283);
$z[0][4]['name']="typename";
$z[1]=Array("global","",284,310);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",351,380);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",420,478);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",686,721);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\"  rel='dropmenu'>[field:typename/]</a></li>\r\n       ",834,1055);
$z[5][4]['type']="top";
$z[5][4]['row']="7";
$z[5][4]['currentstyle']="<li class='home'><a href='~typelink~' ~rel~>~typename~</a></li>";
$z[6]=Array("field","",1219,1248);
$z[6][4]['name']="typename";
$z[7]=Array("field","",1280,1309);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n        <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n        ",1375,1569);
$z[8][4]['pagesize']="14";
$z[9]=Array("pagelist","",1679,1750);
$z[9][4]['listitem']="info,index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("field","",1856,1915);
$z[10][4]['name']="typeid";
$z[10][4]['function']="GetTopTypename(@me)";
$z[11]=Array("channel","\r\n          <li><a href='[field:typeurl/]'><span>[field:typename/]</span></a></li>\r\n          ",1991,2249);
$z[11][4]['type']="son";
$z[11][4]['row']="10";
$z[11][4]['currentstyle']="<li class='cur'><a href='~typelink~' ~rel~><span>~typename~</span></a></li>";
$z[12]=Array("include","",2296,2331);
$z[12][4]['filename']="left.htm";
$z[13]=Array("include","",2376,2413);
$z[13][4]['filename']="footer.htm";

?>