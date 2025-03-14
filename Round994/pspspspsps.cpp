#include <bits/stdc++.h>
using namespace std;

void solve(){
    long length;
    cin >> length;
    string message;
    cin >> message;
    long sCount = 0;
    long pCount = 0;
    bool pCheck = false;
    map<int, int> sLength;
    for(int i = 0; i < length; i++){
        if(message[i] == 's'){
            if(pCheck){
                cout << "NO" << '\n';
                return;
            }
            sCount++;
        }
        else if(message[i] == 'p'){
            pCount++;
            pCheck = true;
        }
    }
    if(sCount == 0 || pCount == 0){
        cout << "YES" << '\n';
        return;
    }
    

}

int main(){
    long limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}