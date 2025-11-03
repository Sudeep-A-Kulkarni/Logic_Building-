
class Logic
{
    void checkPerfect(int num)
    {
        if(num > 0)
        {
            System.out.println(num + " is a perfect number");
        }
        else
        {
            System.out.println(num + " is not a perfect number");
        }
    }
}

class Assignment20_3
{
    public static void main(String[] args) 
    {
        Logic obj =  new Logic();
        obj.checkPerfect(6);
    }
}