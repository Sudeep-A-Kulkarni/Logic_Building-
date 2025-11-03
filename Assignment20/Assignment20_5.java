class Logic
{
    void findSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iMin = 9;

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Smallest digit is: " + iMin);
    }
}

class Assignment20_5
{
    public static void main(String[] args) 
    {
        Logic obj =  new Logic();
        obj.findSmallestDigit(45872);
    }

}
