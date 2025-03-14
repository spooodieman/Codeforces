#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    int a,b;
    cin >> a >>b;
    if(a == 1 && b == 1){
        cout << "1" << '\n';
    }
    else{
        cout << (b-a) << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}