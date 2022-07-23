#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector <int> v (n, 0);
	    for(int i = n-1; i>=0; i--)
	    {
	        cin>>a;
	        v[i]=a;
	    }
	    
	    for(int i = 0; i<n; i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<'\n';
	}
	return 0;
}
