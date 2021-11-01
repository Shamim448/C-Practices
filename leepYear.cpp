/*
This code is calculated Leep year
যদি ইয়ার কে ৪ দারা ভাগ করলে ভাগসেস ০ হই এবং ১০০ দারা ভাগ করলে ভাগসেস ০ না হই  তাহলে লীপ ইয়ার
আবার ইয়ার কে যদি ৪০০ দ্বারা াগ করলে ভাগসেস ০ হই  াহলে লীপ ইয়ার

ex:
1. year%4==0 && year%100 != 0
2. year%400==0
if((year%4==0 && year%!=0) || year%400==0){
    leep
    }

*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if((year%4==0 && year%100 !=0) || year%400==0)
    {
        cout<<year<<" is a leep year"<<endl;
    }else{
        cout<<year<<" is not a leep year"<<endl;
    }

    getch();
}
