/*
                         /\                                 
                        /  \     _ __ ___     __ _   _ __   
                       / /\ \   | '_ ` _ \   / _` | | '_ \  
                      / ____ \  | | | | | | | (_| | | | | | 
                     /_/    \_\ |_| |_| |_|  \__,_| |_| |_| 
                                                            
*/
#include<bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;

#define N  100005

ll int n,k;

ll int c[3*N];

bool check(ll int mid)
{
	if(!mid) return true;
	ll int num=0;
	ll int arr[n+1];
	for(ll int i=1;i<=n;i++)
	{
		arr[i]=c[i]%mid;
		num+=c[i]/mid;
	}
	// cout<<num<<endl;
	// for(ll int i=1;i<=n;i++) cout<<arr[i]<<" ";cout<<endl;
	for(ll int i=2;i<=n;i++)
	{
		ll int sm=arr[i-1]+arr[i];
		if(sm>=mid)
		{
			num++;
			arr[i]=sm%mid;
		}
	}
	// cout<<num<<endl;
	return num>=k;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
	cin>>TESTS;
	while(TESTS--)
	{
		cin>>n>>k;
		ll int sm=0;
		for(ll int i=1;i<=n;i++) {cin>>c[i];sm+=c[i];}
		// cout<<check(3);return 0;
		ll int low=0,high=sm/k;
		ll int ans=-1;
		while(low<=high)
		{
			ll int mid=(low+high)/2;
			if(check(mid))
			{
				low=mid+1;
				ans=mid;
			}
			else
			{
				high=mid-1;
			}
		}
		cout<<k*ans<<endl;
	}
	return 0;
}
