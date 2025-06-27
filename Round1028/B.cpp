#include <bits/stdc++.h>
using namespace std;
#define int long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(int p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<int>
const int modulo = 998244353;
int power[100005];

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n), r(n);
    invl(a); invl(b);
    int maxelA = a[0];
    int maxindA = 0;
    int maxelB = b[0];
    int maxindB = 0;
    fl(i,n){
        if(a[i] > maxelA){
            maxelA = a[i];
            maxindA = i;
        }
        if(b[i] > maxelB){
            maxelB = b[i];
            maxindB = i;
        }
        pair<int,int> p1 = {maxelA, b[i-maxindA]};
        pair<int,int> p2 = {maxelB, a[i -maxindB]};
        p1 = max(p1,p2);
        r[i] = (power[p1.first] + power[p1.second])%modulo;

    }
    fl(i,n) cout << r[i] << ' ';
    cout << '\n';

}
signed main() {
    int t;
    cin >> t;
    power[0] = 1;
    for(int i = 1; i < 100005; i++){
        power[i] = 2 * power[i-1]%modulo;
    }
    while (t--) {
        solve(); 
    }
}