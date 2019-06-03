#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int majindex=0,cnt=1,n,i,a[n];
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=1;i<n;i++)
	    {
	        if(a[majindex]==a[i])
	            cnt++;
	        else
	            cnt--;
	        if(cnt==0)
	        {
	            majindex=i;
	            cnt=1;
	        }
	    }
	    int cand = a[majindex];
	    cnt=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==cand)
	        {
	            cnt++;
	        }
	    }
	    if(cnt>(n/2))
	    {
	        cout<<cand<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}