#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
     int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> freq(n + 1);
    for (int x : a) freq[x]++;

    vector<int> len(n + 1);
    len[0] = freq[a[0]] == 1;
    for (int i = 1; i < n; i++)
        if (freq[a[i]] == 1)
            len[i] = len[i - 1] + 1;
    
    int mx = *max_element(len.begin(), len.end());
    if (mx == 0){
        cout << "0\n";
        return;
    }

    for (int i = 0; i < n; i++){
        if (len[i] == mx){
            cout << i - len[i] + 2 << " " << i + 1 << "\n";
            return;
        }
    }   
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}