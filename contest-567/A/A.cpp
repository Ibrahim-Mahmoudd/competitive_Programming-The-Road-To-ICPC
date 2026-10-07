/*
all cities are  located on Ox coordinate axis .
no two cities are located at single point.
residents love to send letters to each other 
person can send only letterss to person in other cities , (not same city)

the cost of sending = the distance between cities 

for each city calculate min , max cost of sending letters to other cities

Input 
------
n (2 ≤ n ≤ 105) 
the location of cities on Ox coordinate axis (−10^9 ≤ xi ≤ 10^9)

Output :
--------
for each city print two integers : the minimum and maximum cost of sending letters to other cities


*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>> n ;
    vector<long long> v(n);
    pair<long long,long long> ans[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans[i].first = v[1] - v[0];
        }
        else if(i==n-1)
        {
            ans[i].first = v[n-1] - v[n-2];
        }
        else
            ans[i].first =min( v[i] -v[i-1] , v[i+1] - v[i]);
        
            
        ans[i].second = max( v[i] -v[0] , v[n-1] - v[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}