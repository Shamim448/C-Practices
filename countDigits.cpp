/*
Program Name: Counts digits in a number

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num, rem, temp,counts=0;
cout<<"Enter Your Number: ";
cin>>num;
temp=num;
while(temp != 0){
    rem     = temp%10;
    temp    = temp/10;
    counts++;
}
cout<<counts;

getch();
}
