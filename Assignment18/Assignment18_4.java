class Logic
{
    void SumEvenOddDigits(int no)
    {
        int iDigit = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        while (no != 0)
        {
            iDigit = no % 10;
            if (iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            no = no / 10;
        }

        System.out.println("The sum of even digits is : "+ iSumEven);
        System.out.println("The sum of odd digits is : "+ iSumOdd);
    }
}

class Assignment18_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenOddDigits(123456);
    }
}