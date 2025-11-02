class Logic
{
    public void DisplayIndividual(int no)
    {
        int iDigit = 0;
        while (no != 0)
        {
            iDigit = no % 10;
            System.out.println(iDigit);
            no = no / 10;
        }
    }
}

class Assignment19_4
{
    public static void main(String args[])
    {
        Logic lobj = new Logic();
    }
}