/*
Prime Number Calculation
যদি কোন নাম্বার কে ১ & ওই নাম্বার বাদে অন্য কোন নাম্বার দ্বারা ভাগ করলে ভাগশেষ ০ হয় না তাকে প্রাইম নাম্বার বলে ।
1,3,5,7,11,13,17,27

*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int num, counts=0;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            ++counts;
            break;
        }
    }
    if(counts==0)
    {
        cout<<"This is a prime number"<<endl;
    }
    else
    {
        cout<<"This is not a prime number"<<endl;
    }

    getch();
}
