#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
     
      cin>>n;
      
      vector <int> a;
      if(n%2==1){
       cout<<-1<<endl;
      }
      else{
          for(int i=1; i<=(n/2); i++)
{
              if(i%2==1){
                  a.push_back(i);
              }
              else{
                  a.push_back(-1*i);
              }
          }
          
          for(int i=0; i<a.size(); i++){
          cout<<a[i]<<' ';
          }
          reverse(a.begin(),a.end());
           for(int i=0; i<a.size(); i++){
               
           
          cout<<-1*a[i]<<' ';
           }
          cout<<endl;
          
      }
  }

        
    
    return 0;
}



