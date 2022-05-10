#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> has(n + 1, 0);
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
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
		cout << ans << endl;
	}
}
