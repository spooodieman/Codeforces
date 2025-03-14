#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    string message;
    cin >> message;
    for(int i = 0; i < message.size() - 1; i++){
        if(message[i+1] == message[i]){
            cout << 1 << '\n';
            return;
        }
    }
    cout << message.size() << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}