#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<string> answers;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    set<int> set1;
    for(int i = 0; i < a+b; i++){
        int val;
        cin >> val;
        set1.insert(val);
    }    
    for(int i = 1; i <= n; i++){
        if(set1.find(i) == set1.end()){
            answers.push_back("NO");
            return;
        }
    }
    answers.push_back("YES");
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
    for(int i = 0 ; i < answers.size(); i++) cout << answers[i] << '\n';
}