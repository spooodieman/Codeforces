#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll a,b,c; cin >> a >> b >> c;
    string message; cin >> message;
    ll x = 0;
    ll y = 0;
    for(ll i = 0; i < 100; i++){
        for(ll j = 0; j < a; j++){
            if(message[j] == 'N') y++;
            else if(message[j] == 'S')y--;
            else if(message[j] == 'E')x++;
            else if(message[j] == 'W')x--;
            if( x == b && y == c){
                cout << "YES" << '\n';
                return; 
            }
        }
    }
    cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}