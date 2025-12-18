#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    bool allone = true;
    string s; cin >> s;
    int cnt_0 = 0;
	for(int i=0;i<n;i++){
		cnt_0 += s[i]=='0';
	}
	if(cnt_0 == 1){
		cout << "BOB\n";
		return;
	}
	if(cnt_0%2){
		cout << "ALICE\n";
		return;
	}
	cout << "BOB\n";
    
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}