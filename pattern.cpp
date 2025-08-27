#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    char name = 'a';
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  a
            // b c
            // d e f  
            // g h i j  
            // k l m n o       till n 
    

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            
            cout<<name<<" ";
            name = name+1;
        }cout<<endl;

    }

  
     



    
}
