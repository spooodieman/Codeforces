    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    const ll mod = 1e9 + 7;
    const ll INF = LLONG_MAX >> 1;

    void solve(){
        ll size; 
        cin >> size;
        map<ll,ll> record;
        ll maxim = 0;
        for(ll i = 0; i < size; i++){
            ll x;
            cin >> x;
            record[x]++;  
            maxim = max(x,maxim); 
        }
        for(auto &x : record){
            if(x.first == maxim){
                if(x.second%2 == 1){
                    cout << "NO" << '\n';
                    return;
                } 
                break;
            }
            if(x.second <2){
                cout << "NO" << '\n';
                return;
            }
            x.second -= 2;
            if(x.second != 0) record[x.first+1] += x.second;
        }
        cout << "YES" << '\n';
    }

    int main(){
        ios::sync_with_stdio(false); cin.tie(NULL);
        long limit;
        cin >> limit;
        for(long i = 0; i < limit; i++) solve();
    }