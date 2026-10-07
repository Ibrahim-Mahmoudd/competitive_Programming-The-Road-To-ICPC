#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin>> s ;
    stringstream ss(s);
    string temp;
    vector<int> v;
    while(getline(ss,temp,'+'))
    {
        v.push_back(stoi(temp));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        if(i != v.size()-1)
        {
            cout<<"+";
        }
        
    }
}