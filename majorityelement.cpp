#include <iostream>
using namespace std;
int majority(int a[],int n)
{
    int majindex=0,cnt=1,i;
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
	    cnt=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==a[majindex])
	        {
	            cnt++;
	        }
	    }
	    if(cnt>(n/2))
	    {
	        return a[majindex];
	    }
	    else
	    {
	        return -1;
	    }
}
int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int i,n;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<majority(a,n)<<"\n";
	}
	return 0;
}