/*
k1o0n got a router >>> placed it at (X0,Y0)
apartment layout ==> coordinate plane 
floor is tiled 
furniture  ==> integer coordinates 

internet  spread > R meters around the router
k1o0n > put his computer as far as possible from the router but still within the internet range

example:
R=5  >> can place computer at (X0+R,Y0) or (X0-R,Y0) or (X0,Y0+R) or (X0,Y0-R)

find any point (X,Y) such that:
    distance between (X,Y) and (X0,Y0) <= R

input :
FL : t 
each test case contains 3 integers X0,Y0,R

output :
for each test case print 2 integers X,Y such that:
    distance between (X,Y) and (X0,Y0) <= R



*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t ;
    cin>> t;
    for(int i =0 ;i<t ;i++)
    {
        
        int x0,y0,r;
        cin>>x0>>y0>>r;
        cout<<x0+r<<" "<<y0<<endl;
    }



}
