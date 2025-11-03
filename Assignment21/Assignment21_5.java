
class Logic
{
    void printDivisibleBy2and3(int n)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(((iCnt % 2) == 0) && ((iCnt % 3) == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment21_5
{
    public static void main(String[] args) 
    {
        Logic obj =  new Logic();
        obj.printDivisibleBy2and3(30);
    }
}