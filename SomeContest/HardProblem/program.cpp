#include <bits/stdc++.h>
using namespace std;

void solve(){
    long n,a,b,c;
    cin >> n >> a >> b >> c;
    long answer = 0;
    long firstrow = n;
    long secondrow = n;
    if(n >= a){
        firstrow -= a;
        answer += a;
    }
    else{
        answer += n;
        firstrow = 0;
    }
    if(n >= b){
        secondrow -= b;
        answer += b;
    }
    else{
        answer += n;
        secondrow = 0;
    }
    firstrow += secondrow;
    if(firstrow >= c){
        answer += c;
        cout << answer << '\n';
        return;
    }
    else{
        answer += firstrow;
        cout << answer << '\n';
    }
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}