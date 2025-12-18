#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){

    int n;
    cin>>n;

    vector<vector<int>> a(n);
    for(int i = 0; i<n; i++){
        a[i].resize(2 * i + 1);
        for(int &j:a[i]) cin>>j;
    }

    int x, y;
    cin>>x>>y;
    x--, y--;

    vector<vector<int>> perfect(n);
    for(int i = 0; i<n; i++){
        perfect[i].resize(2 * i + 1);
        if(i & 1){
            for(int j = 0; j < 2 * i + 1; j++){
                perfect[i][j] = (j % 4) + 1;
            }
        }
        else{
            for(int j = 0; j < 2 * i + 1; j++){
                perfect[i][j] = 4 - (j % 4);
            }
        }

    }

    int d = 0;
    queue<pair<int, int>> q;
    q.emplace(0, 0);
    vector<vector<int>> vis(n, vector<int>(n*n, 0));
    vis[0][0] = 1;

    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            auto [r, c] = q.front();
            q.pop();
            if(r == x && c == y){
                cout<<d;
                return 0;
            }
            if(c != 0){
                if(!vis[r][c - 1] && a[r][c - 1] == perfect[r][c - 1]){
                    q.emplace(r, c - 1);
                    vis[r][c - 1] = 1;
                }
            }
            if(c != 2 * r){
                if(!vis[r][c + 1]  && a[r][c + 1] == perfect[r][c + 1]){
                    q.emplace(r, c + 1);
                    vis[r][c + 1] = 1;

                }
            }

            if(c & 1){
                if(!vis[r - 1][c - 1] && a[r - 1][c - 1] == perfect[r - 1][c - 1]){
                    q.emplace(r - 1, c - 1);
                    vis[r - 1][c - 1] = 1;
                }
            }
            else{
                if(r != n - 1 && !vis[r + 1][c + 1] && a[r + 1][c + 1] == perfect[r + 1][c + 1]){
                    q.emplace(r + 1, c + 1);
                    vis[r + 1][c + 1] = 1;

                }
            }
        }
        d++;
    }

    cout<<"-1";
    return 0;
}