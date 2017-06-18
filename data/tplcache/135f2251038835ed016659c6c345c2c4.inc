
<field:name itemname="姓名" autofield="1" type="text" isnull="true" default=""  maxlength="250" page="">
</field:name>

<field:tel itemname="电话" autofield="1" type="text" isnull="true" default=""  maxlength="250" page="">
</field:tel>

<field:email itemname="邮箱" autofield="1" type="text" isnull="true" default=""  maxlength="250" page="">
</field:email>

<field:nr itemname="内容" autofield="1" type="text" isnull="true" default=""  maxlength="250" page="">
</field:nr>

<field:tijiaoshijian itemname="提交时间" autofield="1" type="text" isnull="true" default=""  maxlength="250" page="">
<input name="tijiaoshijian" value="" type="hidden"  id="tijiaoshijian"  />

      <script type="text/javascript">

                    window.onload = function(){

                    var nowDate = new Date();

                    var str = nowDate.getFullYear()+"-"+(nowDate.getMonth() + 1)

+"-"+nowDate.getDate()+" "+nowDate.getHours()+":"+nowDate.getMinutes()

+":"+nowDate.getSeconds();

                    document.getElementById("tijiaoshijian").value=str;

                    }

                    </script></field:tijiaoshijian>
