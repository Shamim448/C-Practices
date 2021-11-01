/*
This code is calculated Large Number from 3 integer Number

ex: num1>num2 && num1>num3
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1, num2, num3, result;
    cout<<"Enter 3 Integer Number: ";
    cin>>num1 >>num2 >>num3;
    if(num1>num2 && num1>num3)
    {
        result = num1;
    }
    else if(num2>num1 && num2>num3)
    {
        result = num2;
    }else{
        result = num3;
    }
    cout<<"The Number "<<result<<" is a Learge Number.";
    getch();
}
