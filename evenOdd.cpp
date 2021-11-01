/*
This code is calculate odd-even number
If a number can be divisible by and reminder should be 0 then that's number in even
ex: 10%2==0
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Integer Number: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The Number "<<num<<" is a Even Number"<<endl;
    }
    else
    {
        cout<<"The Number "<<num<<" is a Odd Number.";
    }


    getch();
}
