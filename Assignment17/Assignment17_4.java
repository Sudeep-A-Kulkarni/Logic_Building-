class Logic
{
    int SmallestNumber(int iNo1, int iNo2, int iNo3)
    {
        if ((iNo1 < iNo2)&&(iNo1 < iNo3))
        {
            return iNo1;
        }
        else if((iNo2 < iNo3)&&(iNo2 < iNo1))
        {
            return iNo2;
        }
        else if((iNo3 < iNo2)&&(iNo3 < iNo1))
        {
            return iNo3;
        }
        else
        {
            return -1;
        }
    }
}

class Assignment17_4
{
    public static void main(String a[])
    {
        int iRet = 0;

        Logic lobj = new Logic();
        iRet = lobj.SmallestNumber(10,11,12);
        if (iRet == -1)
        {
            System.out.println("invalid input ...");
        }
        else
        {
            System.out.println("The smallest number is  :  "+ iRet);
        }
    }
}