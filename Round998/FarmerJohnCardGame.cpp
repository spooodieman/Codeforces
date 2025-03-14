#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll num,cards; cin >> num >> cards;
    vector<vector<ll>> vals(num,vector<ll>(cards));
    for(int i = 0; i < num; i++){
        for(int j = 0; j < cards; j++) cin >> vals[i][j];
    }
    map<ll,ll> answer;
    for(int i = 0; i < num; i++) sort(vals[i].begin(),vals[i].end());
    for(int i = 0; i < num; i++){
        answer[vals[i][0]] = i+1;
        for(int j = 1; j < cards; j++){
            if(vals[i][j-1] != vals[i][j]-num){
                cout << -1 << '\n';
                return;
            }
        }
    }
    for(auto x : answer) cout << x.second << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}