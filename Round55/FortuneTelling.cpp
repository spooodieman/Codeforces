#include <bits/stdc++.h>
using namespace std;

int main(){
    long size;
    long total = 0;
    cin >> size;
    vector<long> vals(size);
    for(long i = 0; i < size; i++){
        cin >> vals[i];
        total += vals[i];
    }
    long minim = 1e9;
    if(total % 2 == 0){
        for(long i = 0; i < size; i++){
            if(vals[i] % 2 == 1){
                minim = min(vals[i],minim); 
            }
        }
        if(minim == 1e9)cout << 0 << '\n';
        else cout << total - minim << '\n';
    }
    else cout << total << '\n';
}