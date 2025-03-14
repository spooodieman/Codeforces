#include <bits/stdc++.h>
using namespace std;

void solve(){
    long k, n;
    cin >> n >> k;
    long curr = 1;
    long counter = 1;
    long nCopy = n;
    for(int i = 0; i < nCopy; i++){
        if(counter == k){
            cout << curr << ' ';
            counter = 1;
            curr++;
        } 
        else{
            cout << n << ' ';
            n--;
            counter++;
        }
    }
    cout << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}