#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size, length;
    cin >> size >> length;
    long perimeter = length * 4;
    long currX, currY;
    cin >> currX >> currY;
    for(long i = 0; i < size-1; i++){
        long x, y;
        cin >> x >> y;
        perimeter += (length*4);
        perimeter -= ((length - x)*2 + (length -y) * 2);
    }
    cout << perimeter << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
}