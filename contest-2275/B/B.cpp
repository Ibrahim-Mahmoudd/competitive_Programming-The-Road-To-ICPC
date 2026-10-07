/*
k1o0n ==> bought  a new printer 
printer ==> distinguished by its memory
his friends used the printer 

n > documents are printed by his friends
i==> command 
i =1 : scanning a document
    put the doc in the top of memory
i =2 : printing a document
    if memory is not empty, print the top document and remove it from memory
    
i=3 : quick print 
    the device print doc i 

there is a problem : we need to know the indicies of all docs that were not printed 

Input :
t ==> testcases 
each testcase 
1L:   >> num of docs
2L:   >> string s >of length n (1,2,3) (commands )

output : 
    for each testcase > two lines 
    1: K (num of docs not printed )
    2: their indicies in increasing order 


*/
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin>> t ;
    for (int i = 0; i < t; i++)
    {
        vector <int> ans ;
        int n ;
        string s ;
        cin>> n >> s ;
        stack<int> st ;
        for (int j = 0; j < n; j++)
        {
            if (s[j]=='3')
            {
                continue;
            }
            else if (s[j]=='1')
            {
                st.push(j+1);
            }
            else if (s[j] == '2')
            {
                if (st.empty())
                {
                    continue;
                }
                else
                {
                    st.pop();
                    ans.push_back(j + 1);
                }
            }
        } 
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        cout << ans.size() << "\n";
        
        sort(ans.begin(),ans.end());
        for (int c : ans)
        {
            cout<< c << " " ;
        }
        cout << "\n"; 
    }
    
}