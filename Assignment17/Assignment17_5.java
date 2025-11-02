class Logic
{
    void PrintTable(int no)
    {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= 10; iCnt ++)
        {
            System.out.println(no*iCnt);
        }
    }
}

class Assignment17_5
{
    public static void main(String a[])
    {
        Logic lobj = new Logic();
        lobj.PrintTable(10); 
    }
}