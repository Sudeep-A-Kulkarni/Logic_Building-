class Logic
{
    public void Grade(int iMarks)
    {
        if (iMarks < 50)
        {
            System.out.println("Fail");
        }
        else if (iMarks >= 50 && iMarks < 70)
        {
            System.out.println("B");
        }
        else if (iMarks >= 70 && iMarks <=100)
        {
            System.out.println("A");
        }
        else
        {
            System.out.println("Invalid input");
        }
    }
}

class Assignment19_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.Grade(85);
    }   
}