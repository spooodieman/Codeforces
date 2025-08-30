#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"


void solve(ll tt = 0){
    ll a,b,c; cin >> a >> b >> c;
    ll new_a = b + (b-c);
    if(new_a%a == 0 && new_a/a > 0){
        YES;
        return;
    }
    ll new_b = (a+c)/2;
    if(new_b%b == 0 && (a+c)%2 == 0 && new_b/b > 0){
        YES;
        return;
    }
    ll new_c = b + (b-a);
    if(new_c%c == 0 && new_c/c > 0){
        YES;
        return;
    }
    NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}