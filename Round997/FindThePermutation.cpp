#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size;
    cin >> size;
    
    vector<int> arr(size);
    for(int i = 0; i < size; i++){
        arr[i] = i + 1;
    }
    vector<string> grid(size);
    for(int i = 0; i < size; i++) cin >> grid[i];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i < j && grid[i][j] == '1' && arr[i] < arr[j]){
                long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << '\n';
}

int main(){
    int testcases;
    cin >> testcases;
    for(int i = 0; i < testcases; i++) solve();
}