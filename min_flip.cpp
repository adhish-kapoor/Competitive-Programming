#include <bits/stdc++.h>
using namespace std;
char flip(char a)
{
    if(a=='-')
    return '+';
    else
    return '-';
}
int minop(string a,char c)
{
    int count=0;
	   for(int i=0;i<a.size();i++)
	   {
	       if(a[i]!=c)  //count if character not matches
	       count++;
	       
	       c=flip(c);  //flip each time
	   }
	   return count;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   string a;
	   cin>>a;
	   int ans=min(minop(a,'-'),minop(a,'+'));  //minimum no. of flips to make string alternating
	   cout<<ans<<endl;
	   
	   
	}
}
