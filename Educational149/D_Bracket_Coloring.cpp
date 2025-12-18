#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> bal(n + 1, 0);
        for (int i = 0; i < n; i++)
            bal[i + 1] = bal[i] + (s[i] == '(' ? 1 : -1);

        if (bal.back() != 0) {
            cout << -1 << '\n';
            continue;
        }

        int minBal = *min_element(bal.begin(), bal.end());
        int maxBal = *max_element(bal.begin(), bal.end());

        if (minBal == 0 || maxBal == 0) {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++) {
                cout << 1 << (i + 1 == n ? '\n' : ' ');
            }
            continue;
        }

        cout << 2 << '\n';
        vector<int> ans;
        int cur = 0;

        while (cur < n) {
            int color = (s[cur] == '(' ? 1 : 2);
            do {
                ans.push_back(color);
                cur++;
            } while (bal[cur] != 0);
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}
