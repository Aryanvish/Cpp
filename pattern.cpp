#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    char name = 'a';
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  5 
            // 5 4  
            // 5 4 3  
            // 5 4 3 2 
            // 5 4 3 2 1  till n 
    

    for(row=1;row<=n;row++){
        for(col=n;col>=n -(row -1) ;col--){
            
            cout<<col<<" ";
            
        }cout<<endl;

    }

  
     



    
}
