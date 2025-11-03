class Logic
{
    void PrintReverse(int no)
    {
        int iCnt = 0;
        
        while (no >= 0)
        {
            System.out.println(no);
            no --;
        }
    }
}

class Assignment20_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintReverse(10);
    }
}