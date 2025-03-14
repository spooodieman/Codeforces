#include <bits/stdc++.h>
using namespace std;

void solve(){
    long k, a, b, c;
        cin >> k >> a >> b >> c;
        long sum = a + b + c;
        long answer = (k/sum) * 3;
        k%= sum;
        if(k != 0){
            k -= a;
            answer++;
            if(k <= 0){
                cout << answer << '\n';
                return;
            }
            k -= b;
            answer++;
            if(k <= 0) {
                cout << answer << '\n';
                return;
            }
            k -= c;
            answer++;
        }
        cout << answer << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}