/*
contest-136 / problem A  (Presents)
-------------------------------------
Petya ===> likes gifts 
his mother gave him a laptop as a new year gift .
he decided to give his frinds gifts too.
he organized a party and invited his (n) friends to the party. 
the only thing Petya likes more than recieving gifts , watching others giving gifts to someone else.

he numbered his friends from 1 to n 

i-th friend gave a gift to  pi-th friend

output :
i-th num == > the number of the friend who gave a gift to the i-th friend

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int arr[n];
    vector<int> ans(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        ans[arr[i]] = i+1;
    }
    
    for(int i=1; i<=n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
