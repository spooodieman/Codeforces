#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> vals(n);
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> vals[i];
        sum += vals[i];
    }
    sort(vals.begin(),vals.end());
    long long answer = 0;
    x = sum - x;
    y = sum - y;
    
    cout << answer << '\n';

}

int main(){
    long limit;
    cin >> limit;
    for(int i = 0; i < limit; i++)solve();
    
}