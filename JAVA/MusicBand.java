import java.time.LocalDate;

public class MusicBand
{
    private String name;
    private int year;
    private int concerts;
    public MusicBand()
    {
        name="AC/DC";
        year=1973;
        concerts=550;
    }
    public MusicBand(String name,int year,int concerts)
    {
        this.name=name;
        this.year=year;
        this.concerts=concerts;
    }

    public String getName() {
        return name;
    }

    public void setName(String name)
    {
        try {
            if(name.length()<4) {

                throw new IllegalArgumentException("Невалидно име");
            }
            this.name = name;
    }
     catch (Exception e)
     {
         System.out.println(e.getMessage());
     }

    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        try {
            if(year>LocalDate.now().getYear()) {

                throw new IllegalArgumentException("Невалидна година");
            }
            this.year=year;
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }

    public int getConcerts() {
        return concerts;
    }

    public void setConcerts(int concerts) {
        this.concerts = concerts;
    }

    @Override
    public String toString()
    {
        return name+" създадена "+year+" г. брой концерти: "+concerts;
    }

    public int groupYears()
    {
        return LocalDate.now().getYear()-year;
    }
    public double averageConcerts()
    {
        return (double)concerts/groupYears();
    }
    public boolean moreProductive(MusicBand mb)
    {
        return  concerts>mb.concerts;
    }



}
