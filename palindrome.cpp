/*
Program Name: Palindrome Number
যদি কোন নাম্বার কে রিভার্স করলে যদি অরিজিনাল নাম্বার এর সেম হই তাকে পালিন্দ্রম নাম্বার বলে।
ex: 121=121
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num, rem, temp, result=0;
cout<<"Enter Your Number: ";
cin>>num;
temp=num;
while(temp != 0){
    rem     = temp%10;
    temp    = temp/10;
    result   = result*10+rem;
}
if(num==result){
    cout<<result<<" is a Palimdrome Number"<<endl;
}else{
    cout<<result<<" isn't a Palimdrome Number"<<endl;
}

getch();
}
