#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input5.txt","r",stdin);
    // freopen("output5.txt","w",stdout);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i,ans=0;
        cin>>n;
        ll a[n+10],sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll avg=ceil(1.0*sum/n);
        for(i=1;i<=n;i++)
        {
            if(a[i] < avg)
                ans+=(avg-a[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
