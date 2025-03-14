#include <bits/stdc++.h>
using namespace std;

void solve(){
    int size;
    cin >> size;
    vector<int> vals(size);
    vector<int> nums(size);
    for(int i = 0; i < size; i++){
        cin >> vals[i];
        nums[i] = i+1;
    }
    map<int,int> record;
    vector<int> answer(size);
    for(int i = 0; i < size; i++){
        if(record.find(vals[i]) != record.end()){
            answer[i] = -1;
        }
        else{
            nums[vals[i] - 1] = -1;
            answer[i] = vals[i];
            record[vals[i]]++;
        }
    }
    int index = 0;
    while(nums[index] == -1 && index < nums.size()) index++;
    for(int i = 0; i < size; i++){
        if(answer[i] == -1){
            answer[i] = nums[index];
            index++;
            while(nums[index] == -1 && index < nums.size()){
                index++;
            }
        }
        cout << answer[i] << ' ';
    }
    cout << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
    return 0;
}