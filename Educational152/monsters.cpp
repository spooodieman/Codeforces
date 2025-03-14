#include <bits/stdc++.h>
using namespace std;

void pairsort(vector<int> &a, vector<int> &b, int n)
{
    pair<int, int> pairt[n];

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
 
    sort(pairt, pairt + n);
     
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

void solve(){
    long size, k;
    cin >> size >> k;
    vector<int> vals(size);
    vector<int> indices(size);
    for(int i = 0; i < size; i++){
        long curr;
        cin >> curr;
        curr %= k;
        if(curr == 0) curr = k;
        vals[i] = curr;
        indices[i] = i+1;
    }
    pairsort(vals,indices,size);
    stack<int> answer;
    long i = size-1;
    while(i >= 0){
        answer.push(indices[i]);
        i--;
        while(vals[i] == vals[i+1] && i >= 0){
            answer.push(indices[i]);
            i--;
        }
        while(!answer.empty()){
            cout << answer.top() << " ";
            answer.pop();
        }
    }
    cout << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}
