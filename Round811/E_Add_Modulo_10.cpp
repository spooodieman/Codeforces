#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define vi vector<ll>

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    bool hasZero = false;
    f(i,0,n){
        if(arr[i]%10 == 0 || arr[i]%10 == 5){
            arr[i] += (arr[i]%10);
            hasZero = true;
        }
    }
    if(hasZero){
        f(i,1,n){
            if(arr[i] != arr[i-1]){
                NO;
                return;
            }
        }
        YES;
        return;
    }
    f(i,0,n){
        if((arr[i]%10)%2 == 1) arr[i] += (arr[i]%10);
    }
    f(i,0,n){
        if((arr[i]/10)%2 == 1 && arr[i]%10 == 6) arr[i] = 0;
        else if(arr[i]%10 == 6) arr[i] = 1;
        else if((arr[i]/10)%2 == 1) arr[i] = 1;
        else arr[i] = 0;
    }
    f(i,1,n){
        if(arr[i] != arr[i-1]){
            NO;
            return;
        }
    }
    YES;

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}