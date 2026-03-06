#include <iostream> 
using namespace std ;
int main () 
{
    int N , P ,max=0;
    cin>>N;
    for (int i = 0; i < N ; i++)
    {
        cin>> P ;
        if (P>max)
        {
            max=P;
        }
        else{
            continue;
        }
        
    }
    
    cout<<max<<endl;


}