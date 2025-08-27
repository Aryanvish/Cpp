#include<iostream>
using namespace std ; 

int main(){
//   code for telling whether the input n is a power of a number x asked by user Eg: the user asks n=100 to check whether its power of 2  

int i , n , x ; 

//  Take the user input of number and the x in whose power u want to check

cout<<"Enter the number whose power u want to check :";
cin>>n;
cout<<"Enter the number in whose power u want to check : ";
cin>>x;

if(n<=0){
    cout<<"Enter a number greater than 0 as there is no such number which gives -ve and 0 as the ans when raised to a power";
}
if(n==1){
    cout<<"1";
}

while(n!=1){
    for(i=1;i<=x-1;i++){
        if(n%x==i){
            cout<<"0";
        }
    }
    n/=x;
}
cout<<"1" ;



}
