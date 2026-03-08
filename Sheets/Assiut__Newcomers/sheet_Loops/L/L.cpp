#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
    int a,b ;
    cin>>a>>b ;
    if (a>b)
    {
        for (int i = min(a,b); i !=0 ; i--)
        {
            if (a%i==0 && b%i==0)
            {
                cout<< i ;
                break;
            }
            
        }
        
    }
    else
    {
        for (int j = min(a,b); j !=0 ; j--)
        {
            if (a%j==0 && b%j==0)
            {
                cout<< j ;
                break;
            }
            
        }
    }
    


}