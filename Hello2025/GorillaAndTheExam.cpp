#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size, k;
    cin >> size >> k;
    map<int,int> record;
    int maxFreq = 0;
    for(long i = 0; i < size; i++){
        long val;
        cin >> val;
        record[val]++;
        maxFreq = max(maxFreq,record[val]);
    }
    vector<int> vals;
    for(auto pair: record) vals.push_back(pair.second);
    sort(vals.begin(),vals.end());
    for(int i = 0; i < vals.size(); i++){
        if(vals[i] <= k){
            k -= vals[i];
        }
        else{
            cout << vals.size() - i << '\n';
            return;
        }

    }
    cout << 1 << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}