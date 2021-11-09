/*
Program Name: Strong Number
কোন নাম্বারের প্রতিটা ডিজিটের ফ্যাক্টরিয়াল এর যোগফল যদি ওই নাম্বারের সমান হয় তাকে স্ট্রং নাম্বার বলে
145= 1+24+120=145
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num, temp, rem, fact,sum=0;
cout<<"Enter a number: ";
cin>>num;
temp=num;
while(temp!=0){
    rem = temp%10;
    temp = temp/10;
    fact=1;
    for(int i=rem; i>=1; i--){
        fact=fact*i;
    }
    sum=sum+fact;
}
if(num==sum){
  cout<<num<<" is a strong Number"<<endl;
}else{
    cout<<num<<" is not a strong Number"<<endl;
}


}
