// Display "Jay Ganesh" n times on screen

#include<iostream>
using namespace std;

class Name
{
    private:
    int iNo;

    public:
        Name(int X)
        {
            iNo = X;
        }

        void Display()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<"Jay Ganesh..."<<"\n";
            }

        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the frequency of Jay Ganesh:"<<"\n";
    cin>>iValue;

    Name nobj(iValue);
    nobj.Display();

    return 0;
}