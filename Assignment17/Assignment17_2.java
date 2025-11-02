import java.lang.Math;

class Logic
{
    int CheckPallindrome(int iNo)
    {
        int iDigit = 0;

        int iPallindrome_Digit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            iPallindrome_Digit = ( iPallindrome_Digit * 10 ) + iDigit;
            iNo = iNo / 10;
        }
        return iPallindrome_Digit;
    }
}

class Assignment17_2
{
    public static void main(String A[])
    {
        int No;
        Logic lobj = new Logic();
        int iNo = 0;
        iNo = 121;
        No = lobj.CheckPallindrome(iNo);
        if (No == iNo)
        {
            System.out.println("The number is a pallindrome ...");
        }
        else
        {
            System.out.println("The number is not a pallindrome...");
        }
    }
}