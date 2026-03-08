#include<iostream>
using namespace std ;
int main()
{
    int x ;
    cin >> x ;
    for (int i=2 ; i<=x ; i++ )
    {
        bool prime =true ;
        for (int j =2 ; j < i ; j++)
        {
            if (i%j==0)
            {
                prime=false;
                break;
            }
            
        }
        if (prime)
        {
            cout<<i << " " ;
        }
        
        
    }
        
            
}

