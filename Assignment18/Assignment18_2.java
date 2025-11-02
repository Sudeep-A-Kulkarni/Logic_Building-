class Logic
{
    void PrintEvenTillN(int iNo)
    {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt ++)
        {
            if (iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment18_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintEvenTillN(15);
    }
}