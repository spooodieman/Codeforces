#include <bits/stdc++.h>
using namespace std;

void solve(){
    long x;
    cin >> x;
    if(x%33 == 0){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }

}

int main(){
    long input;
    cin >> input;
    for(int i = 0 ; i < input; i++) solve();
}