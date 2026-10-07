#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    vector<int> m ,p , s;
    for (int i = 1; i <= n; i++)
    {
        int t ;
        cin>> t ;
        if(t==1) m.push_back(i);
        else if(t==2) p.push_back(i);
        else s.push_back(i);

                
    }
    int w = min ({m.size(), p.size(), s.size()});
    
    if(w==0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<w<<endl;
    for (int i = 0; i < w; i++)
    {
        cout<<m[i]<<" "<<p[i]<<" "<<s[i]<<endl;
    }


    


}