public class Test {
    public static void main(String[] args)
    {
      MusicBand mb1=new MusicBand();
      MusicBand mb2=new MusicBand("Metallica",1986,570);
      System.out.println(mb1);
      System.out.println(mb2);
        mb1.setName("a");
        mb1.setName("The Beatles");
        mb1.setYear(2040);
        mb1.setYear(1975);
        mb1.setConcerts(300);
        System.out.println(mb1);
        System.out.println(mb2.groupYears()+"г.");
        System.out.printf("%.2f \n",mb2.averageConcerts());
        if(mb1.moreProductive(mb2))
        {
            System.out.println(mb1.getName()+" е по-продуктивна от "+mb2.getName());
        }
        else
        {
            System.out.println(mb2.getName()+" е по-продуктивна от "+mb1.getName());
        }
        RecordingMusicBand rmb1=new RecordingMusicBand();
        RecordingMusicBand rmb2=new RecordingMusicBand("Metallica",1986,555,35,600000);
        System.out.println(rmb1);
        System.out.println(rmb2);
        rmb1.setRecordsCount(-5);
        rmb1.setRecordsCount(60);
        rmb1.setSalesCount(-44);
        rmb1.setSalesCount(50000);
        System.out.println(rmb1);
        System.out.printf("%.2f \n",rmb2.averageSales());
    }
}