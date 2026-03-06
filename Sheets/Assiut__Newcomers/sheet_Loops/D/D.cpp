#include<iostream>
using namespace std ;
int main () 
{
    int pass= 1999 ;
    int x ;
    while (cin>>x)
    {
        if (x!=pass)
        {
            cout<<"Wrong\n" ;
            
        }
        else {
            cout<<"Correct"<<endl;
            break;
        }
        
    }
    



}