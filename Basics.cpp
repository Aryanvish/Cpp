#include<iostream>
#include<cmath>
using namespace std ; 
int countdigit(int n){
        int count = 0 ;
        while(n){
        count++ ; 
        n/=10 ;

        } 
        return count ; 
    }

int main(){

    //  to check whether the number is armstrong or not 

    int n , r , a  , arm = 0 , sum ,  m ;

    cout<<"Enter the value of n : ";
    cin>>n;
    sum = n;

    m = countdigit(n);

    while(n!=0){
        r=n%10;
        n/=10;
        // for(a=1;a>0;a--){
        //      for(int i = 0 ; i<=m;i++){
           
        //          a = r*a ;

        //     }
        //  }

        // arm+=a ; Dont use this insted use the power function 

        arm=arm+(int)pow(r,m);
        

    }
    if(arm==sum){
        cout<<"is a armstrong number";

    }
    else{
        cout<<"is not a armstrong number";
    }
    

     



    
}
