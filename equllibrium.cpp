#include <iostream>
using namespace std;

int equllibrium(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
	    {
	        sum += a[i];
	    }
    int lefts=0;
	    bool flag = false;
	    if(n==1)
	    {
	        return 1;
	    }
	    if(n==2)
	    {
	        return -1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum = sum - a[i];
	        if(lefts==sum)
	        {
	            return i+1;
	        }
	        lefts = lefts + a[i];
	    }
	    return -1; 
}
int main() {
	int ts,t;
	cin>>ts;
	while(ts--)
	{
	     int n;
	    cin>>n;
	     int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<equllibrium(a,n)<<endl;
	}
	return 0;
}