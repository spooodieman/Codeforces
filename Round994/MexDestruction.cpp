#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size;
    cin >> size;
    vector<int> vals(size);
    long zeroCount = 0;
    for(int i = 0 ; i < size; i++){
        cin >> vals[i];
        if(vals[i] == 0) zeroCount++;
    }
    if(zeroCount == size){
        cout << 0 << '\n';
        return;
    }
    else if(zeroCount == 0){
        cout << 1 << '\n';
        return;
    }
    long breaks = 0;
    bool breakSwitch = false;
    if(vals[0] == 0) breakSwitch = true;
    else breaks = 1;
    for(int i = 1; i < size; i++){
        if(vals[i] != 0 && breakSwitch){
            breakSwitch = false;
            breaks++;
        }
        else if(vals[i] == 0){
            breakSwitch = true;
        }
    }
    if(breaks == 1) cout << 1 << '\n';
    else cout << 2 << '\n';
    
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
    return 0;
}