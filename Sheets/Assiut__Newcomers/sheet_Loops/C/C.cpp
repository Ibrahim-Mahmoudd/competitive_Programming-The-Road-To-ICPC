#include <iostream>
using namespace std ;
int main ()
{
    int N , P ;
    int even=0,odd=0,pos=0,neg = 0 ;
    cin>> N ;
    for (int i = 0; i < N ; i++)
    {
        cin>>P ;
        if (P%2==0)
        {
            even++ ;
        }
        if (P%2!=0)
        {
            odd++ ;
        }
        if (P>0)
        {
            pos++ ;
        }
        if (P<0)
        {
            neg++ ;
        }
        

    }
    
    cout<<"Even: "<<even << endl ;
    cout<<"Odd: "<<odd << endl ;
    cout<<"Positive: "<<pos<<endl ;
    cout<<"Negative: "<<neg<<endl ;
}
