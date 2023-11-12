public class Slavi_Bozhilov_si659_hw6_1 {
    public  static  String getTotalString(String ... s)
    {
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<s.length;i++)
        {
            if(i==s.length-1)
            {
                sb.append(s[i]);
            }
            else
            {
                sb.append(s[i]).append(", ");
            }
        }
        return sb.toString();
    }
    public static void main(String[] args) {
String firstSemester=getTotalString("ООП2","КМ");
String bothSemesters=getTotalString(firstSemester,"БД","САА","ИИ");
System.out.println("Взети изпити за 1 семестър: "+firstSemester);
System.out.println("Взети изпити за двата семестъра: "+bothSemesters);
    }
}