#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool check1(vector<vector<ll>> arr, ll n){
    for(ll i = 0; i < n; i++){
        ll curr = 0;
        ll con = 0;
        bool in = false;
        for(ll j = 0; j < n; j++){
            if(arr[i][j] == 1 && in){
                curr++;
                if(curr == 3) return false;
            }
            else if(arr[i][j] == 0){
                in = false;
                curr = 0;
            }
            else{
                in = true;
                con++;
                curr = 1;
            }
        }
        if(con > 1){
            return false;
        }
    }
    for(ll i = 0; i < n; i++){
        ll curr = 0;
        ll con = 0;
        bool in = false;
        for(ll j = 0; j < n; j++){
            if(arr[j][i] == 1 && in){
                curr++;
                if(curr == 3) return false;
            }
            else if(arr[j][i] == 0){
                in = false;
                curr = 0;
            }
            else{
                in = true;
                con++;
                curr = 1;
            }
        }
        if(con > 1){
            return false;
        }
    }
    return true;
}

bool check2(vector<vector<ll>> arr, ll n){
    queue<pair<ll,ll>> q;
    bool done = false;
    for(ll i = 0 ; i < n; i++){
        if(done) break;
        for(ll j = 0; j < n; j++){
            if(arr[i][j] == 1){
                q.push({i,j});
                done = true;
                break;
            }
        }
    }
    while(!q.empty()){
        auto [x,y] = q.front();
        arr[x][y] = 0;
        q.pop();
        if(x - 1 >= 0 && arr[x-1][y] == 1) {
            q.push({x-1,y});
            arr[x-1][y] = 0;
        }
        if(x + 1 < n && arr[x+1][y] == 1) {
            q.push({x+1,y});
            arr[x+1][y] = 0;
        }
        if(y - 1 >= 0 && arr[x][y-1] == 1) {
            q.push({x,y-1});
            arr[x][y-1] = 0;
        }
        if(y + 1 < n && arr[x][y+1] == 1) {
            q.push({x,y+1});
            arr[x][y+1] = 0;
        }
    }
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++) if(arr[i][j]) return false;
    return true;

}

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<vector<ll>> arr(n,vector<ll>(n));
    ll black = 0;
    for(ll i = 0; i < n ; i ++){
        for(ll j = 0; j < n ; j++){
            char c; cin >> c;
            if(c == '#') {
                arr[i][j] = 1;
                black++;
            }
            else arr[i][j] = 0;
        }
    }
    if(black == 0){
        cout << "YES\n";
        return;
    }
    if(!check1(arr,n)){
        cout << "NO\n";
        return;
    }
    if(check2(arr,n)){
        cout << "YES\n";
        return;
    }
    vector<vector<ll>> temp = arr;
    for(ll i = 0; i < n; i++){
        bool vis = false;
        ll y = -1;
        for(ll j = 0; j < n; j++){
            if(arr[i][j]){
                vis = true;
                y = j;
            }
        }
        if(vis){
            ll xadd = 1;
            ll yadd = 0;
            ll counter = 0;
            while(i + xadd < n && y + yadd < n){
                temp[i + xadd][y + yadd] = 1;
                if(counter == 0) yadd++;
                else xadd++;
                counter = (counter+1)%2;
            }
            break;
        }
    }
    

    if(check1(temp,n) && check2(temp,n)){
        cout << "YES\n";
        return;
    }

    temp = arr;
    for(ll i = 0; i < n; i++){
        bool vis = false;
        ll y = -1;
        for(ll j = 0; j < n; j++){
            if(arr[i][j]){
                vis = true;
                y = j;
            }
        }
        if(vis){
            ll xadd = 0;
            ll yadd = 1;
            ll counter = 0;
            while(i + xadd < n && y + yadd < n){
                temp[i + xadd][y + yadd] = 1;
                if(counter == 0) xadd++;
                else yadd++;
                counter = (counter+1)%2;
            }
            break;
        }
    }
   
    if(check1(temp,n) && check2(temp,n)){
        cout << "YES\n";
        return;
    }

    temp = arr;
    for(ll i = n-1; i >= 0; i--){
        bool vis = false;
        ll y = -1;
        for(ll j = 0; j < n; j++){
            if(arr[i][j]){
                vis = true;
                y = j;
            }
        }
        if(vis){
            ll xadd = 1;
            ll yadd = 0;
            ll counter = 0;
            while(i - xadd >= 0 && y + yadd < n){
                temp[i - xadd][y + yadd] = 1;
                if(counter == 0) yadd++;
                else xadd++;
                counter = (counter+1)%2;
            }
            break;
        }
    }
    

    if(check1(temp,n) && check2(temp,n)){
        cout << "YES\n";
        return;
    }

    temp = arr;
    for(ll i = n-1; i >= 0; i--){
        bool vis = false;
        ll y = -1;
        for(ll j = 0; j < n; j++){
            if(arr[i][j]){
                vis = true;
                y = j;
            }
        }
        if(vis){
            ll xadd = 0;
            ll yadd = 1;
            ll counter = 0;
            while(i - xadd >= 0 && y + yadd < n){
                temp[i - xadd][y + yadd] = 1;
                if(counter == 0) xadd++;
                else yadd++;
                counter = (counter+1)%2;
            }
            break;
        }
    }
    if(check1(temp,n) && check2(temp,n)){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}