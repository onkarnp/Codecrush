#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;
typedef long long int ll;

int main()
{
    srand((unsigned)time(0));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ofstream out1("input30.txt");
    ofstream out2("output30.txt");
    ll t=1;
    t=rand()%10000+1;
    cout<<t<<"\n";
    out1<<t<<"\n";
    while(t--)
    {
        ll n,i,ans=0;
        n=rand()%100+1;
        cout<<n<<"\n";
        out1<<"\n"<<n<<"\n";
        ll a[n+10],sum=0;
        for(i=1;i<=n;i++)
        {
            a[i]=rand()%10+1;
            cout<<a[i]<<" ";
            out1<<a[i]<<" ";
            sum+=a[i];
        }
        ll avg=ceil(1.0*sum/n);
        for(i=1;i<=n;i++)
        {
            if(a[i] < avg)
                ans+=(avg-a[i]);
        }
        cout<<"\n"<<ans<<"\n";
        out2<<ans<<"\n";
    }
    return 0;
}
