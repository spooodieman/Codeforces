#include <bits/stdc++.h>
using namespace std;

long factorial(long num){
    long answer = 1;
    for(int i = 2; i <= num; i++) answer *= i;
    return answer; 
}

bool sevenchecker(long num,long currentSteps){
    long curr = num * 10 + num;
    map<int, int> record;
    long steps = 0;
    long minSteps = currentSteps > 4? 100: factorial(currentSteps);
    while(steps < minSteps){
        steps++;
        curr %= 7;
        if(curr == 0) return true;
        curr = (curr *10) + num;
        if(record.find(curr) != record.end()) return false;
        record[curr]++;
    }
    return false;
}

void solve(){
    long times, digit;
    cin >> times >> digit;
    cout << 1 << " ";
    if(times > 2 || digit % 3 == 0) cout << 3 << " ";
    if(digit == 5) cout << 5 << " ";
    if(sevenchecker(digit,times)) cout << 7 << " ";
    if(times > 5 || digit % 9 == 0 || (times > 2 && digit%3 == 0)) cout << 9;
    cout << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}