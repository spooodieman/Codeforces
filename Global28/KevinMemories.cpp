#include <bits/stdc++.h>
using namespace std;

long finder(vector<long> vals, long checkingVal){
    long left = 0;
    long right = vals.size() - 1;
    long mid = 0;
    while(left < right){
        mid = left + (right-left)/2;
        if(checkingVal == vals[mid]){
            break;
        }
        else if(checkingVal < vals[mid]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return vals.size() - mid;
}

void solve(){
    long pSize;
    long qSize;
    cin >> pSize >> qSize;
    vector<long> participants(pSize);
    vector<long> questions(qSize);
    for(long i = 0; i < pSize; i++) cin >> participants[i];
    long kevin = participants[0];
    for(long i = 0; i < qSize; i++) cin >> questions[i];
    sort(questions.begin(), questions.end());
    sort(participants.begin(),participants.end());
    for(int i = 1 ; i <= qSize; i++){
        long rank = 1;
        long requiredQues = qSize/i;
        requiredQues *= i;
        for(long j = requiredQues - 1; j >= 0; j--){

            long max = -1;
            if(questions[j] > kevin){
                long curr = finder(participants,questions[j]);
                cout << "CURR " << curr << '\n'; 
                if(max == -1 && curr != 0){
                    max = curr;
                    rank++;
                }
                else{
                    if(curr != max){
                        rank++;
                    }
                }
            }
            else{
                break;
            }
        }
        cout << rank << " ";
    }
    cout << '\n';

}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}