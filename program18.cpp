// Display the numbers 1 to X

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }     
}
int main()
{
    int iValue = 0;
    printf("Enter the Frequency: \n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}