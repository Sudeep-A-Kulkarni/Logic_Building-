class Logic
{
    void SumEvenOddDigits(int no)
    {
        int iSumEven = 0;
        int iCnt = 0;

        for (iCnt = 1; iCnt <= no; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
        }


        System.out.println("The sum of even digits is : "+ iSumEven);
    }
}

class Assignment20_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenOddDigits(10);
    }
}