#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    string m; cin >> m;
    bool one = false;
    bool two = false;
    bool three = false;
    for(ll i = 0 ; i < n; i++){
        if(m[i] == '1'){
            one = true;
            if(two) {
                three = true;
                break;
            }
        }
        else{
            if(one) two = true;
        }
    }
    int denomination = 0;
    ll sum = 0;
    if(three) denomination = 2;
    else if(two) denomination = 1;
    char curr = '0';
    for(ll i = 0; i <n; i++){
        if(m[i] != curr){
            curr = m[i];
            sum += 2;
        }
        else sum++;
    } 
    cout << sum - denomination << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}  