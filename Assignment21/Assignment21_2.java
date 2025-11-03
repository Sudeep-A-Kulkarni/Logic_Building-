
class Logic
{
    void countEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iCounteven = 0;
        int iCountodd = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iCounteven++;
            }
            else
            {
                iCountodd++;
            }

        }

        System.out.println("Count of Even numbers is: " + iCounteven);
        System.out.println("Count of Odd numbers is: " + iCountodd);
    }
}

class Assignment21_2
{
    public static void main(String[] args) 
    {
        Logic obj =  new Logic();
        obj.countEvenOddRange(50);
    }
}