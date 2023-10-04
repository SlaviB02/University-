public class Slavi_Bozhilov_si659_hw3_5 {
    public static void main(String[] args)
    {
        StringBuilder list=new StringBuilder("Слави\n");
        System.out.print(list);
        list.append("Ана\n");
        list.append("Никола\n");
        System.out.println();
        System.out.print(list);
        int firstSpaceIndex= list.indexOf("\n");
        int index=list.indexOf("А",firstSpaceIndex);
        list.setCharAt(index,'Я');
        System.out.println();
        System.out.print(list);
        int secondSpaceIndex=list.indexOf("\n",firstSpaceIndex+1);
        list.insert(secondSpaceIndex+1,"Димитър\n");
        System.out.println();
        System.out.print(list);
        list.delete(0,firstSpaceIndex+1);
        System.out.println();
        System.out.print(list);
    }
}