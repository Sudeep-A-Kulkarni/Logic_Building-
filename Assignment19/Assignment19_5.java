class Logic
{
    public void CalculatePower(int iBase, int iPower)
    {
        int iCnt = 0 ;
        int iAns = 0;
        iAns = 1;
        for (iCnt = 1; iCnt <= iPower;iCnt ++)
        {
            iAns = iAns * iBase;
        }
        System.out.println("Answer is :: "+ iAns);
    }
}

class Assignment19_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CalculatePower(2,3);
    }
}