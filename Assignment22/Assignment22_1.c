#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[],int iSize)
{  
    int iCnt = 0;
    int iCountEven = 0;
    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven = iCountEven + 1;
        }
        
    }
    return iCountEven;

}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *p = NULL;


    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    p = (int*)malloc(iLength * sizeof(int));
    
    if (NULL == p)
    {
        printf("Unable to allocate the memory due insufficent.");
        return -1;
    }

    printf("Emter the elements : ");
    for (iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iLength);
    printf("The number of even numbers is: %d",iRet);

    free(p);

    return 0;
}