#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll option1 = a+b;
    ll option2 = d-c;
    ll answer1 = 1;
    ll answer2 = 1;
    if(b + option1 == c) answer1++;
    if(option1 + c == d) answer1++;
    if(a + b == option2) answer2++;
    if(b+option2 == c) answer2++;
    cout << max(answer1,answer2) << '\n'; 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}