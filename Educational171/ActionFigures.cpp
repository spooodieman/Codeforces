#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long size;
    cin >> size;
    string message;
    cin >> message;
    long long answer = 0;
    long long curr = 0;
    for(int i = size - 1; i>=0; i--){
        if(curr >= i){
            answer += i+1;
            curr--;
            continue;
        }
        if(message[i] == '1') curr++;
        else{
            answer += i+1;
            curr--;
            if(curr < 0) curr = 0;
        }
    }
    cout << answer << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0 ; i < limit; i++) solve();
}