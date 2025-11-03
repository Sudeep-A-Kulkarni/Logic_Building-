
class Logic
{
    void countFactors(int iNo)
    {
        int iCnt = 0;
        int iFactorcount = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFactorcount++;
            }
        }
        
        System.out.println(iFactorcount);
    }
}

class Assignment21_4
{
    public static void main(String[] args) 
    {
        Logic obj =  new Logic();
        obj.countFactors(20);
    }
}