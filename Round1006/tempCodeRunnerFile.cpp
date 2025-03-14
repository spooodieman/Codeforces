#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll num;
    cin >> num;
    if(num == 0){
        cout << "1\n0 0\n";
        return;
    }
    ll x = -1e9 + 1;
    ll y = -1e9 + 1;
    ll total = (num/2) * 3 + (num%2)+1;
    cout << total << '\n';
    ll totalcopy = total;
    ll orientation = 0;
    for(ll i = 0; i < total; i++){
        if(orientation == 0){
            cout << x << " " << y << '\n';
        }
        else if(orientation == 1){
            cout << x + 1 << " " << y << '\n';
        }
        else if(orientation == 2){
            cout << x << " " << y +1<< '\n';
        }
        else if(orientation == 3){
            if(totalcopy < 2){
                orientation = 4;
            }
            else cout << x+1 << " " << y << '\n';
        }
        else if(orientation == 4){
            if(totalcopy < 2){

            }
            else cout << x << " " << y-1 << '\n';
        }
        totalcopy--;
        orientation++;
        if(orientation == 5){
            orientation = 0;
            x += 3;
            y += 3;
        }
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}