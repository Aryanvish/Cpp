#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    char name = 'a';
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  a
            // b b
            // c c c  
            // d d d d  
            // e e e e e      till n 
    

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            name = 'a'+row-1;
            cout<<name<<" ";
        }cout<<endl;

    }

  
     



    
}
