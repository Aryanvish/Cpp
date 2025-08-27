#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    char name = 'a';
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  5 4 3 2 1
            // 4 3 2 1  
            // 3 2 1 
            // 2 1 
            // 1        till n 
    

    for(row=n;row>=1;row--){
        for(col=row;col>=1;col--){
            
            cout<<col<<" ";
            
        }cout<<endl;

    }

  
     



    
}
