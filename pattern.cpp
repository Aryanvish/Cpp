#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int row , col , n ;
    cout<<"Enter the value of n : ";
    cin>>n; 

    //  print  1 
            // 2 2 
            // 3 3 3  
            // 4 4 4 4  
            // 5 5 5 5 5     till n 
    

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }cout<<endl;

    }

  
     



    
}
