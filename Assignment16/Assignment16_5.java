class Logic
{
    void CountDigits(int iNo)
    {
        int iCount = 0;
        while (iNo != 0)
        {
            iCount = iCount + 1;
            iNo = iNo / 10;
        }

        System.out.println("The number of digits is : " + iCount );
    }
}

class Assignment16_5
{
    public static void main(String Arr[])
    {
        Logic lobj = new Logic();
        lobj.CountDigits(1234);
    }
}