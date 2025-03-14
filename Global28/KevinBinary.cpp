#include <bits/stdc++.h>
using namespace std;

void solve(){
    string val;
    cin >> val;
    long zeroCount = 0;
    for(int i = 0 ; i < val.size(); i++) if(val[i] == '0') zeroCount++;
    if(zeroCount == 0){
        cout << "1 " << val.size() << " 1 1" << '\n'; 
        return;
    }
    zeroCount = 0;
    long firstIndex = 0;
    for(int i = 0; i < val.size(); i++){
        if(val[i] == '0'){
            firstIndex = i + 1;
            while(val[i] == '0' && i < val.size()){
                zeroCount++;
                i++;
            }
            break;
        }
    }
    long newIndex = firstIndex - zeroCount;
    if(newIndex <= 0) newIndex = 1;
    cout << newIndex << " " << val.size() - (firstIndex - newIndex) << " " << 1 << " " << val.size() << '\n'; 
    
}

int main(){
    int limit;
    cin >> limit;
    for(int i= 0; i < limit; i++) solve();
}