
class Logic
{
    void CheckEvenOdd(int n)
    {
        if (n % 2 == 0)
        {
            System.out.println("The number is even...");
        }
        else
        {
            System.out.println("The number is odd...");
        }
    }
}

class Assignment16_2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(10);
    }
}