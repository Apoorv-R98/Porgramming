using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	    }
	    int total = (n*(n+1))/2;
	    int temp=0;
	    for(i=0;i<n-1;i++)
	    {
	        temp = temp + a[i];
	    }
	    cout<<total-temp<<endl;
	    t--;
	}
	return 0;
}