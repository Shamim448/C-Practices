/*
Factorial value
কোন নাম্বার এর ফাক্তরিয়াল হচ্ছে ঐ নাম্বার এর সাথে আগের সব নাম্বার এর গুনফুল
5= 5*4*3*2*1=120
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num, fact=1;
cout<<"Enter a factorial number:";
cin>>num;
for(int i=num; i>1; i--){
fact=fact*i;
}
cout<<"Factorial value of "<<num<<" is: "<<fact;
getch();
}

