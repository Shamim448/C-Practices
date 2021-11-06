/*
Program name:Some of digits
rem=tem%10
tem=num/10
result=rseult*10+rem
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num, temp,rem, result=0;
cout<<"Enter your number: ";
cin>> num;
temp=num;
while(temp!=0){
rem=temp%10;
temp=temp/10;
result=result*10+rem;

}

cout<<"your reverse number is :"<<result;
getch();
}

