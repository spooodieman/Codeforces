#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    bool allZero = true;
    f(i,0,n){
        if(arr[i] != 0){
            allZero = false;
            break;
        }
    }
    if(allZero){
        NO;
        return;
    }
    vi less, more;
    f(i,0,n){
        if(arr[i] < 0) less.push_back(arr[i]);
        else more.push_back(arr[i]);
    }
    sort(all(less));
    sort(all(more));

    YES;
    ll goal = abs(less.front()) + more.back();
    ll curr = 0;
    ll ind1 = 0, ind2 = 0;
    while(ind1 < more.size() && ind2 < less.size()){
        if(curr + more[ind1] >= goal){
            curr += less[ind2];
            cout << less[ind2++] << " ";
        }
        else{
            curr += more[ind1];
            cout << more[ind1++] << " ";
        }
    }
    while(ind1 < more.size()){
        cout << more[ind1++] << " ";
    }
    while(ind2 < less.size()){
        cout << less[ind2++] << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}