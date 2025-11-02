class Logic
{
    void CheckPrime(int iNo)
    {
        int iCnt = 0;
        int iCounter  = 0;
        for (iCnt = 1; iCnt <= iNo/2; iCnt ++)
        {
            if (iNo % iCnt == 0)
            {
                iCounter = iCounter + 1;
        }   }

        if (iCounter == 1)
        {
            System.out.println("The number is a prime number ...");
        }
        else
        {
            System.out.println("The number is not a prime number...");
        }
    }
}

class Assignment18_1
{
    public static void main(String A[])
    {   
        Logic lobj = new Logic();

        lobj.CheckPrime(11);
    }
}