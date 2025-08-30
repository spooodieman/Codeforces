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

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vi a(n),b(n),c(n); invl(a); invl(b); invl(c);
    int curr = 0;
    int arr[31] = {0};
    f(i,0,31) arr[i] = (((1LL << i) & k)?1:0); 
    for(ll i : a){
        bool cand = true;
        int temp = i;
        f(j,0,31){
            if(((temp&1) == 1) && (arr[j] == 0)){
                cand = false;
                break;
            }
            temp>>=1;
        }
        if(cand) curr |= i;
        else break;
    }
    for(ll i : b){
        bool cand = true;
        int temp = i;
        f(j,0,31){
            if(((temp&1) == 1) && (arr[j] == 0)){
                cand = false;
                break;
            }
            temp>>=1;
        }
        if(cand) curr |= i;
        else break;
    }
    for(ll i : c){
        bool cand = true;
        int temp = i;
        f(j,0,31){
            if(((temp&1) == 1) && (arr[j] == 0)){
                cand = false;
                break;
            }
            temp>>=1;
        }
        if(cand) curr |= i;
        else break;
    }
    if(curr == k) YES;
    else NO;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}