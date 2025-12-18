    #include <bits/stdc++.h>
    using namespace std;
    #define ll int
    #define invl(v) for(auto &x: v) cin >> x;
    #define all(v) (v).begin(), (v).end()
    #define f(p,q,n) for(ll p = q; p < n; p++)
    #define YES cout << "YES\n"
    #define NO cout << "NO\n"
    #define vi vector<ll>

    void solve(ll tt = 0){
        int n ; cin >> n;
        map<int,int>mp;
        vector<vi>a(n);
        f(i,0,n){
            int k; cin >> k; 
            a[i].assign(k, 0);
            f(j,0,k){
                cin >> a[i][j];
                mp[a[i][j]]++;
            }
        }
        f(i,0,n){
            bool possible = true;
            for(auto &x : a[i]) {
                if(mp[x] == 1){
                    possible = false;
                    break;
                }
            }
            if(possible){
                YES;
                return;
            }
        }
        NO;

    }

    int main(){
        ios::sync_with_stdio(false); cin.tie(nullptr);
        ll t; cin >> t;
        for(ll i = 1; i <= t; i++)
            solve();
    }