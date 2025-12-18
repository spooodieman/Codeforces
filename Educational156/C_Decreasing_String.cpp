#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s; cin >> s;
    ll n = s.size();
    ll x; cin >> x;
    x--;

    stack<char> st;
    s += '$';

    for(char c : s){
        while(x >= n && st.size() > 0 && st.top() > c){
            x -= n;
            n--;
            st.pop();
        }   
        st.push(c);
    }
    string newString = "";
    while(!st.empty()){
        newString += st.top();
        st.pop();
    }
    reverse(all(newString));
    cout << newString[x];
}

int main(){
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}