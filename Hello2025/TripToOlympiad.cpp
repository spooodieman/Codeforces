#include <bits/stdc++.h>
using namespace std;

void solve(){
    long l, r;
    cin >> l >> r;
    long answer = l^r;
    long maxNum = -1;
    for(long i = l; i <= r; i++){
        long curr = answer + (i^l) + (i^r);
        if(curr > answer && i != l && i!= r){
            answer = curr;
            maxNum = i;
        }
    }
    cout << l << " " << maxNum << " " << r << '\n';

}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}