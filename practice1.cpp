#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ull unsigned long long
const int M=1e9+7;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif

    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	cin>>s;
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	string ans;
    	
    	if(s[0]!='m')
    		cout<<"NO"<<endl;
    	else
    	{
    		ans.push_back('m');
    		for(int i=1;i<n;i++)
	    	{
	    		
	    		if(s[i]!=s[i-1])
	    			ans.push_back(s[i]);
	    		
	    	}
    	}
    	if(ans.size()!=4)
    		cout<<"NO"<<endl;
    	else
    	{
    		if(ans[0]=='m' && ans[1]=='e' && ans[2]=='o' && ans[3]=='w' )
	    	cout<<"YES"<<endl;
	    	else
	    	cout<<"NO"<<endl;
    	}
    	
	    
	    // cout<<ans<<endl;

	    	

    	
    }

    




    
            
	return 0;
    
}