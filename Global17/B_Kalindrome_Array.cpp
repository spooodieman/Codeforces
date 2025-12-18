#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool isPalindrome(vi &arr){
    ll n = arr.size();
    f(i,0,n){
        if(arr[i] != arr[n-i-1]) return false;
    }
    return true;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    ll mis1 = -1;
    ll mis2 = -1;

    ll l = 0;
    ll r = n-1;
    while(l < r){
        if(arr[l] == arr[r]){
            l++;r--;
        }
        else{
            mis1 = arr[l];
            mis2 = arr[r];
            break;
        }
    }

    if(mis1 == -1){
        YES;
        return;
    }

    vi narr;
    vi narr2;

    f(i,0,n){
        if(arr[i] != mis1) narr.push_back(arr[i]);
    }
    f(i,0,n){
        if(arr[i] != mis2) narr2.push_back(arr[i]);
    }

    if(isPalindrome(narr) || isPalindrome(narr2)) YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}