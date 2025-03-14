#include <bits/stdc++.h>
using namespace std;

int main(){
    long length;
    cin >> length;
    for(int i = 1; i <= length; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << '\n';
    }
}