#include <iostream>
#include <windows.h> //clear console // sleep //
using namespace std;

int loginScreen()
{
    int num = 2; //private
    int *pNum = &num; //pointer
    int inpt;
    int tally = 0;
    int maxTally = 3;
    bool exceeded = false;
    while(num != inpt && !exceeded)
    {
        for(int i = 3; i >= 0;i--)
        {
            if(i != 0)
            {
                cout<<"Attempts Left: ";
                cout<<i<<endl;
            }
            if (tally < maxTally)
            {
                cout<<"Please enter a single number: ";
                cin>> inpt;
                tally++;
                if(inpt == num)
                {
                    cout<<"Correct\n"<<endl;
                    Sleep(1000); //requires "windows.h"
                    cout<<"Accessing... \n"<<endl;
                    Sleep(2000); //requires "windows.h"
                    cout<<"Pointer: ";
                    cout<<pNum<<endl;
                    i=0;
                }
                else
                {
                    cout<<"Incorrect value entered \n";
                    Sleep(500); //requires "windows.h"
                    string attempts =(tally != maxTally)? "Try again.. \n": "No attempts left \n";
                    cout<<attempts<<endl;
                    Sleep(1000); //requires "windows.h"
                    system("cls"); //requires "windows.h"
                }
            }
            else
            {
                exceeded = true;
                cout<<"Attempt limit exceeded"<<endl;
                Sleep(2000); //requires "windows.h"
                cout<<"Please contact your administrator \n"<<endl;
            }
        }
    }
    Sleep(2000); //requires "windows.h"
    cout<<"___________________________________________\n";
}
int main()
{
    return loginScreen();
    return 0;
}
