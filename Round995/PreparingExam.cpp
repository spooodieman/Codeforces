#include <bits/stdc++.h>
using namespace std;

void solve(){
    long total, lists, known;
    long unknown = 1;
    cin >> total >> lists >> known;

    vector<long> listQuestions(lists);
    vector<long> knownQuestions(known);

    for(long i = 0; i < lists; i++) cin >> listQuestions[i];

    cin >> knownQuestions[0];
    if(knownQuestions[0] == unknown) unknown++;

    for(long i = 1; i < known; i++){
        cin >> knownQuestions[i];
        if(knownQuestions[i] == unknown) unknown++;
    } 

    if(known < total - 1){
        for(long i = 0; i < lists; i++)cout << 0;
        cout << '\n';
        return;
    }
    else if(known == total){
        for(long i = 0; i < lists; i++) cout << 1;
        cout << '\n';
        return;
    }
    
    for(long i = 0; i < lists; i++){
        if(listQuestions[i] == unknown) cout << 1;
        else cout << 0;
    }
    cout << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}