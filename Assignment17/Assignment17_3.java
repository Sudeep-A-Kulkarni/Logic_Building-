class Logic
{
    int GreaterNumber(int iNo1, int iNo2)
    {
        if (iNo1 > iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }        
    }
}

class Assignment17_3
{
    public static void main(String A[])
    {
        int iRet = 0;

        Logic lobj = new Logic();
        iRet = lobj.GreaterNumber(20,15);
        System.out.println("The highest number is : "+iRet);
    }
}