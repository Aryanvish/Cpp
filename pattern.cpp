#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    char name = 'a';
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  1 2 3 4 5 
            // 1 2 3 4 
            // 1 2 3 
            // 1 2  
            // 1        till n 
    

    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            
            cout<<col<<" ";
            
        }cout<<endl;

    }

  
     



    
}
