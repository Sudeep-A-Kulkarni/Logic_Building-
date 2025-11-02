class Logic
{
    public void CheckDivisibility(int iNo)
    {
        if ((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println("The number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("The number is not divisible ");
        }
    }
}

class Assignment19_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckDivisibility(55);

    }
}