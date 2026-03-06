#include <iostream>
using namespace std ;
int main ()
{
    int num ,T ;
    long long factorial   ;
    cin >> num ;
    for (int i = 0; i < num ; i++)
    {
        cin>>T ;
        factorial=1;
        for (int j =1 ; j<=T ;j++)
        {
            
            factorial*=j;
            
        }
        
        cout<<factorial<<endl ;
      
       
        
    }
    


}