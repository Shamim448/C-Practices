/*
Program Name: Armstrong Number
যদি কোন নাম্বার এর
 করলে যদি অরিজিনাল নাম্বার এর প্রতিটা ডিজিট এর কিউবে এর যোগফল  অরিজিনাল  নাম্বার সেম হই তাকে পআরমস্ত্রং  নাম্বার বলে।
ex: ১৫৩=১+১২৫+২৭
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
    result   = result+rem*rem*rem;
}
if(num==result){
    cout<<num<<" is a Armstrong Number"<<endl;
}else{
    cout<<num<<" isn't a Armstrong Number"<<endl;
}

getch();
}
