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
$z[5]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\"  rel='dropmenu'>[field:typename/]</a></li>\r\n       ",833,1054);
$z[5][4]['type']="top";
$z[5][4]['row']="7";
$z[5][4]['currentstyle']="<li class='home'><a href='~typelink~' ~rel~>~typename~</a></li>";
$z[6]=Array("field","",1219,1248);
$z[6][4]['name']="typename";
$z[7]=Array("field","",1280,1309);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n        <li> <a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" border=\"0\" width=\"170\" height=\"120\"></a>\r\n          <h5><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h5>\r\n          <p>[field:description function=\"cn_substr(@me,300)\"/]...<a href=\"[field:arcurl/]\" title=\"[field:title/]\">[详细]</a></p>\r\n        </li>\r\n        ",1374,1810);
$z[8][4]['pagesize']="6";
$z[9]=Array("pagelist","",1910,1981);
$z[9][4]['listitem']="info,index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("field","",2087,2146);
$z[10][4]['name']="typeid";
$z[10][4]['function']="GetTopTypename(@me)";
$z[11]=Array("channel","\r\n          <li><a href='[field:typeurl/]'><span>[field:typename/]</span></a></li>\r\n          ",2222,2480);
$z[11][4]['type']="son";
$z[11][4]['row']="10";
$z[11][4]['currentstyle']="<li class='cur'><a href='~typelink~' ~rel~><span>~typename~</span></a></li>";
$z[12]=Array("include","",2527,2562);
$z[12][4]['filename']="left.htm";
$z[13]=Array("include","",2607,2644);
$z[13][4]['filename']="footer.htm";

?>