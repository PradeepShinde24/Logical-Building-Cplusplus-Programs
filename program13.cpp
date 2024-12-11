// Display "Jay Ganesh" n times on screen

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo<0)                  // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        cout<<"Jay Ganesh..."<<"\n";
    }

}

int main()
{
    int iValue = 0;

    cout<<"Enter the frequency of jay Ganesh: "<<"\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}