#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    long size;
    cin >> size;
    string message;
    cin >> message;
    for(int i = 0; i < message.size(); i++) if(message[i] >= '0' && message[i] <= '9') cout << message[i];
    cout << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}