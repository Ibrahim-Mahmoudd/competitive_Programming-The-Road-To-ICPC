/*
k1o0n ==> for complete hapiness , he lacked a musical instrument 
instrument  ==> n keys giving a1,a2,a3,...an units of audience love .

playing on note ==> boring 
k1o0n learned (triad) : 3 keys with one key between each pair 

triad starting at x , x+2 ,x+4 
which brings ax + ax+2  +  ax+4 (u.of audience love )

k1o0n wants to choose exactly two different triads that do not share any keys 
he wants both triads to bring the same amount of audience love 

count the num of ways to choose two triads 
\
Input:
1: t >> testcases
for each testcase :
1: n  ==> num of keys 
2: n integers of a 

Output:
for each testcase 
    the num of unordered pairs of disjoint triads with equal audience love values 
*/

#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin>> t ;
    for (int i = 0; i < t; i++)
    {
        int n ;
        cin >> n; 
        vector<int> a(n) ;
        for(int &x :a) 
        {
            cin>> x ;
        }
        
        int m = n - 4;
        vector<int> V(m);
        
        vector<long long> freq(60005, 0);
        
        for (int j = 0; j < m; j++) {
            V[j] = a[j] + a[j + 2] - a[j + 4];
            freq[V[j] + 30000]++;
        }
        
        long long ans = 0;
        
        for (int j = 0; j <= 60000; j++) {
            if (freq[j] >= 2) {
                ans += freq[j] * (freq[j] - 1) / 2;
            }
        }
        
        
        for (int j = 0; j < m - 2; j++) {
            if (V[j] == V[j + 2]) {
                ans--;
            }
        }
        
        
        for (int j = 0; j < m - 4; j++) {
            if (V[j] == V[j + 4]) {
                ans--;
            }
        }
        
        cout << ans << "\n";
    }
    




}