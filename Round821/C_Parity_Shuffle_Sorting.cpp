#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    bool allOdd = true;
    bool allEven = true;
    if(n == 1){
        cout << "0\n";
        return;
    }
    for(ll i : arr){
        if(i&1) allOdd = false;
        else allEven = false;
    }
    if(allOdd || allEven){
        cout << n-1 << '\n';
        for(ll i = 1; i < n; i++)
            cout << i << " " << n << '\n';
            return;
    }
    cout << n-1 << '\n';
    cout << "1 " << n << '\n'; 
    if(arr.front()%2 == 1) allOdd = true;
    else allEven = true; 
    if((arr.front() + arr.back()) % 2 == 0){
        arr[0] = arr[n-1];
    }
    else{
        arr[n-1] = arr[0];
    } 
    for(ll i = 1; i < n-1; i++){
        if((arr[i] + arr.front())%2 == 1){
            cout << "1 " << i + 1 << '\n';
        }
        else{
            cout << i + 1 << " " << n << '\n';
        }
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}