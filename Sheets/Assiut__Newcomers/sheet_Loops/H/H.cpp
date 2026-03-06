#include<iostream>
using namespace std ;
int main ()
{
    int x ;
    int z=0 ;
    cin>> x ;
    for (int i =1 ; i<=x ; i++){
        if (x%i==0){
            z+=1 ;
        }
    }
    if (z==2){
        cout<<"YES" ;
    }
    else {
        cout<<"NO" ;
    }



}