#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t ;
    cin >> t ;
    string s ;
    cin >> s ;

    int ans = 0 ;
    for (int i = 0 ; i < t-1 ; i++)
    {
        ans += abs(s[i+1] - s[i]) ;
        cout << ans << endl ;
    }
    
}