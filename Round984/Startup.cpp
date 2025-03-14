#include <bits/stdc++.h>
using namespace std;

void solve(){
    long n, k;
    cin >> n >> k;
    if(k <= n){
        long answer = 0;
        for(int i = 0; i < k; i++){
            long brand,cost;
            cin >> brand >> cost;
            answer += cost;
        }
        cout << answer << '\n';
        return;
    }
    long size = 0;
    map<long,long> record;
    for(int i = 0; i < k; i++){
        long brand,cost;
        cin >> brand >> cost;
        if(record.find(brand) == record.end()){
            size++;
            record[brand] = 0;
        }
        record[brand] += cost;
    }
    vector<long> values;
    for(auto pair: record) values.push_back(pair.second);
    sort(values.begin(),values.end());
    long answer = 0;
    size--;
    while(n-- && size >= 0){
        answer+= values[size--];
    }
    cout << answer << '\n';
    
}

int main(){
    long limit;
    cin >> limit;
    for(int i = 0 ; i < limit; i++) solve();
}