#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 998244353;
const ll INF = LLONG_MAX >> 1;


void solve(ll tt = 0){   
    int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (a[j - 1] > a[j]) {
                    swap(a[j - 1], a[j]);
                    ans.push_back({1, j});
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (b[j - 1] > b[j]) {
                    swap(b[j - 1], b[j]);
                    ans.push_back({2, j});
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                ans.push_back({3, i + 1});
            }
        }
        cout << ans.size() << '\n';
        for (auto [x, y] : ans) cout << x << " " << y << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}