class Logic
{
    void PrintOddTillN(int iNo)
    {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt ++)
        {
            if (iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment18_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintOddTillN(15);
    }
}