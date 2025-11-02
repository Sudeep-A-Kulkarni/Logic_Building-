class Logic
{
    void SumOfNumberOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0 ;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        System.out.println("The sum of the digits is : "+iSum);
    }
}
class Assignment17_1
{
    public static void main(String a[])
    {
        Logic lobj = new Logic();
        lobj.SumOfNumberOfDigits(1234);
    }
}