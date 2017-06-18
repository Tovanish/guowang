<?php
$z[0]=Array("global","",264,290);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",331,360);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",400,458);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",666,701);
$z[3][4]['filename']="head.htm";
$z[4]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\"  rel='dropmenu'>[field:typename/]</a></li>\r\n       ",816,1037);
$z[4][4]['type']="top";
$z[4][4]['row']="7";
$z[4][4]['currentstyle']="<li class='home'><a href='~typelink~' ~rel~>~typename~</a></li>";
$z[5]=Array("global","",1234,1289);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n        <li> <a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" border=\"0\" width=\"170\" height=\"120\"></a>\r\n          <h5><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h5>\r\n          <p>[field:description function=\"cn_substr(@me,300)\"/]...<a href=\"[field:arcurl/]\" title=\"[field:title/]\">[详细]</a></p>\r\n        </li>\r\n        ",1372,1808);
$z[6][4]['pagesize']="6";
$z[7]=Array("pagelist","",1881,1952);
$z[7][4]['listitem']="info,index,end,pre,next,pageno";
$z[7][4]['listsize']="5";
$z[8]=Array("channel","\r\n          <li><a href='[field:typeurl/]'><span>[field:typename/]</span></a></li>\r\n          ",2146,2404);
$z[8][4]['type']="top";
$z[8][4]['row']="10";
$z[8][4]['currentstyle']="<li class='cur'><a href='~typelink~' ~rel~><span>~typename~</span></a></li>";
$z[9]=Array("include","",2451,2486);
$z[9][4]['filename']="left.htm";
$z[10]=Array("include","",2531,2568);
$z[10][4]['filename']="footer.htm";

?>