/*
Program name:Some of digits
rem=tem%10
sum=sum+rem
tem=num/10
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num, temp,rem, sum=0;
cout<<"Enter your number: ";
cin>> num;
temp=num;
while(temp!=0){
    rem=temp%10;
    temp=temp/10;
    sum=sum+rem;
}
cout<<"Your Sum of digits is  = "<<sum<<endl;

getch();
}

