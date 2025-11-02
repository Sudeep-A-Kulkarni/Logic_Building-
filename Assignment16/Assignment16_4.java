
class Logic
{
    void reverseNumber(int n)
    {
        int iDigit = 0;

        while (n != 0)
        {
            iDigit = n % 10;
            System.out.println(iDigit);
            n = n / 10;
        }

    }
}

class Assignment16_4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}