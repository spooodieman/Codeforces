#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size; 
    cin >> size;
    vector<long> nums(size);
    for(int i = 0; i < size; i++) cin >> nums[i];
    vector<long> sums;
    map<long,int> record;
    record[0]++;
    sums.push_back(0);
    long maxim = 0;
    long minim = 0;
    long curr = 0;
    for(int i = 0; i < size; i++){
        curr += nums[i];
        long minCurr = minim + nums[i];
        long maxCurr = maxim + nums[i];
        if(record.find(minCurr) == record.end()){
            record[minCurr]++;
            sums.push_back(minCurr);
        }
        if(record.find(curr) == record.end()){
            record[curr]++;
            sums.push_back(curr);
        }
        if(record.find(maxCurr) == record.end()){
            record[maxCurr]++;
            sums.push_back(maxCurr);
        }
        minim = min(minim,minCurr);
        maxim = max(maxim,maxCurr);
    }
    sort(sums.begin(),sums.end());
    for(long i = 0; i < sums.size(); i++) cout << sums[i] << " ";
    cout << '\n';  
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}