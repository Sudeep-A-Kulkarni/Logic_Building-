class Logic
{
    void CalculateSum(int n)
    {
        int iSum = 0;
        int iCnt = 0;
        for (iCnt = 0; iCnt <= n; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        System.out.println("The sum of first 10 numbers is : " + iSum);
    }
}

class Assignment16_1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CalculateSum(10);
    }
}