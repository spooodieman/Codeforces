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
    ll n; cin >> n;
    char t; cin >> t;
    vector<string> trumps;
    vector<string> other;
    f(i,0, 2 * n){
        string curr; cin >> curr;
        if(curr[1] == t){
            trumps.push_back(curr);
            continue;
        }
        other.push_back(curr);
    }
    sort(other.begin(),other.end(), [] (string a, string b) {
        return a[1] < b[1];
    });
    sort(trumps.begin(),trumps.end(),[] (string a, string b ){
        return a[0] < b[0];
    });
    vector<string> ans;
    ll otherIndex = 0;
    ll index = 0;
    f(i,0,other.size() - 1){
        if(i + 1 >= other.size()) break;
        if(other[i][1] == other[i+1][1]){
            if(other[i][0] < other[i+1][0]) ans.push_back(other[i] + " " + other[i+1]);
            else ans.push_back(other[i+1] + " " + other[i]);
            index+= 2;
            i++;
        }
        else{
            if(otherIndex == trumps.size()){
                cout << "IMPOSSIBLE" << '\n';
                return;
            }
            else{
                ans.push_back(other[i] + " " + trumps[otherIndex]);
                otherIndex++;
                index++;
            }
        }
    }
    if(index != other.size() && other.size() - index > trumps.size()){
        cout << "IMPOSSIBLE" << '\n';
        return;
    }

    while(index != other.size()){
        ans.push_back(other[index++] + " " + trumps[otherIndex++]);
    }
    while(otherIndex != trumps.size()){
        ans.push_back(trumps[otherIndex] + " " + trumps[otherIndex + 1]);
        otherIndex+= 2;
    }
    for(string &s : ans){
        cout << s << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}