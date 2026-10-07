#include<bits/stdc++.h>
using namespace std;
int main ()
{
    
    long long t , n;
    cin>>t>>n;
    long long num_distressed = 0;
    long long current = n ; 
    for (long long i = 0; i < t; i++)
    {
        char c;
        long long x;
        cin>>c>>x;
        if (c == '+')
        {
            current += x;
        }
        else
        {
            if (current >= x)
            {
                current -= x;
            }
            else
            {
                num_distressed++;
            }
        }
        
    }
    cout<<current<<" "<<num_distressed<<endl;
     

}