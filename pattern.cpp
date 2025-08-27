#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  1 
            // 2 1
            // 3 2 1  
            // 4 3 2 1  
            // 5 4 3 2 1     till n 
    

    for(row=1;row<=n;row++){
        for(col=row;col>=1;col--){
            cout<<col<<" ";
        }cout<<endl;

    }

  
     



    
}
