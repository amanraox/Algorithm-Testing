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
#define    endl        '\n'
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

ll int rand(ll int a,ll int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[])
{
    srand(atoi(argv[1]));
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
    cout<<TESTS<<endl;
    // cin>>TESTS;
    while(TESTS--)
    {
        ll int n=rand(N,N),k=rand(1,1e12);
        cout<<n<<" "<<k<<endl;
        for(ll int i=1;i<=n;i++) cout<<rand(1,1e12)<<" ";cout<<endl;
    }
    return 0;
}
