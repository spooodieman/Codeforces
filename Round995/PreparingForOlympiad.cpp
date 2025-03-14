#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size;
    cin >> size;
    vector<int> mono(size);
    vector<int> stereo(size);
    for(int i = 0; i < size; i++){
        cin >> mono[i];
    }
    for(int i = 0; i < size; i++){
        cin >> stereo[i];
    }
    long answer = 0;
    for(int i = 0; i < size - 1; i++){
        answer += mono[i] - stereo[i+1] < 0? 0: mono[i] - stereo[i+1];
    }
    answer += mono[size -1];
    cout << answer << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i= 0 ; i < limit; i++) solve();
}