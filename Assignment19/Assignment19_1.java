class Logic 
{
    public void CheckLeapYear(int no)
    {
        if ( (no % 4 == 0) && (no % 100 != 0))
        {
                System.out.println("The year is leap year.");
        }
        else if(no % 100 == 0 && no % 400 == 0)
        {
            System.out.println("the year is a leap year ...");
        }
        else
        {
            System.out.println("The year us not a leap year ");
        }
        }
}



class Assignment19_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(4000);
    }
}