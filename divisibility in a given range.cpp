// to find count of numbers divisible by n in a given range
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,n;
	    cin>>a>>b>>n;               //a..b is the range
	    long long lower=(a+n-1)/n;  //lowest divisor
	    long long upper=b/n;        //highest divisor
	    long long count=upper-lower+1;
	    
	    cout<<count<<endl;
	}
}
