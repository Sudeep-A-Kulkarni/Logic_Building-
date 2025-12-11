# include <stdio.h>

int Fact(int iNo)
{
    static int iFactorial  = 1;
 
    
    if (iNo != 0)
    {
        iFactorial = iFactorial * iNo;
        iNo -- ;
        Fact(iNo);
    }

    return iFactorial ;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    
    printf("The factorial is : %d\n",iRet);

    return 0;
}