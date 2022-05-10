#include <bits/stdc++.h>
#define ll long long
#include <fstream>
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;
const ll mod = 1e9 + 7;
int main(){
    srand((unsigned)time(0));
	ios_base::sync_with_stdio(false);
	ofstream out1("input30.txt");
    ofstream out2("output30.txt");
	cin.tie(0);
	cout.tie(0);
	int t;
	/*cin >> */t=rand()%1000+1;
	out1<<t;
	cout<<t<<"\n";
	while(t--){
		int n;
		/*cin >> */n=rand()%150+1;
		out1<<"\n"<<n<<"\n";
		cout<<"\n"<<n<<"\n";
		vector<int> has(n + 1, 0);
		for(int i = 0; i < n; i++){
			int x;
			/*cin >> */x=rand()%30+1;
			out1<<x<<" ";
			cout<<x<<" ";
			if(x <= n){
				has[x]++;
			}
		}
		ll ans = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= has[i]; j++){
				if(has[j] >= i){
					ans++;
				}
			}
		}
		cout<<"\n";
		/*cout << ans << endl;*/
		out2<<ans<<"\n";
		cout<<ans<<"\n";
	}
}
