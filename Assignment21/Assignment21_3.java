
class Logic
{
    void displayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment21_3
{
    public static void main(String[] args) 
    {
        Logic obj =  new Logic();
        obj.displayFactors(12);
    }
}