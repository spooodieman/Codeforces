#include <bits/stdc++.h>
using namespace std;

const int N = 100000 + 5;

int n, k;
int cat[N];
vector<int> adj[N];
int ans = 0;

void dfs(int node, int parent, int consec) {

    if (cat[node] == 1) consec++;
    else consec = 0;

    if (consec > k) return;

    bool isLeaf = true;

    for (int nxt : adj[node]) {
        if (nxt == parent) continue;
        isLeaf = false;
        dfs(nxt, node, consec);
    }

    if (isLeaf) ans++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> cat[i];
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, -1, 0);

    cout << ans << "\n";
}
