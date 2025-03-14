#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long value;
    cin >> value;
    long long answer = 1;
    while(value > 3){
        answer *= 2;
        value /= 4;
    }
    cout << answer << '\n';

}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}