#include <bits/stdc++.h>
using namespace std;

void solve(){
    int size;
    cin >> size;
    vector<int> vals(size);
    map<int,int> storage;
    for(int i = 0; i < size; i++){
        cin >> vals[i];
        storage[vals[i]]++;
    }
    map<int,int> record;
    for(int i = 0; i < size; i++){
        if(record.find(vals[i]) != record.end()){
            long curr = vals[i] + 1;
            while(storage.find(curr) != storage.end() && record.find(curr) != record.end()){
                curr++;
            }
            storage[curr]++;
            cout << curr << ' ';
        }
        else{
            cout << vals[i] << ' ';
            record[vals[i]]++;
        }
    }
    cout << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
    return 0;
}