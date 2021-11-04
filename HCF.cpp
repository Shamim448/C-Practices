/*
HCF/GCD= Highest common factor and gcd same
8=1,2,4
12=1,2,3, 4 ,6
gcd=4

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num1, num2, gcd, lcm;
cout<<"Enter your two integer number: ";
cin>> num1>>num2;
for(int i=1; i<=num1 && i<=num2; i++){
    if(num1%i==0 && num2%i==0){
        gcd=i;
    }
}

cout<<"GCD = "<<gcd<<endl;

getch();
}

