public class RecordingMusicBand extends MusicBand
{
    private  int recordsCount;
    private int salesCount;
    public RecordingMusicBand()
    {
        super();
        recordsCount=20;
        salesCount=400000;
    }
    public  RecordingMusicBand(String name,int year,int concerts,int recordsCount,int salesCount)
    {
        super(name,year,concerts);
this.recordsCount=recordsCount;
this.salesCount=salesCount;
    }

    public int getRecordsCount() {
        return recordsCount;
    }

    public void setRecordsCount(int recordsCount) {
        try {
            if(recordsCount<1) {

                throw new IllegalArgumentException("Невалиден брой албуми");
            }
            this.recordsCount = recordsCount;
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }

    public int getSalesCount() {
        return salesCount;
    }

    public void setSalesCount(int salesCount) {
        try {
            if(salesCount<1) {

                throw new IllegalArgumentException("Невалиден брой продадени албуми");
            }
            this.salesCount=salesCount;
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
@Override
    public  String toString()
{
    return  super.toString()+" брой албуми: "+recordsCount+" брой продажби: "+salesCount;
}
public  double averageSales()
{
    return  (double)salesCount/recordsCount;
}
}
