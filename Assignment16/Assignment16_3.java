
class Logic
{
    void findFactorial(int n)
    {
        int iCnt = 0;
        int iFactorial = 0;
        iFactorial = 1;
        for (iCnt = 1; iCnt <= n; iCnt ++)
        {
            iFactorial = iFactorial  * iCnt;
        }

        System.out.println("The factorial of the number is : "+ iFactorial);
    }
}

class Assignment16_3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}