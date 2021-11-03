/*
Program Name: Multiplication Table
ex:5*1=5
5*2=10
........
5*10=50
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num, result;
    cout<<"Enter a Multiplication number: ";
    cin>>num;
    for(int i=1; i<=10; i++){
      result= num*i;
      cout<<num<<" x "<<i<<" = "<<result<<endl;
    }

getch();
}
