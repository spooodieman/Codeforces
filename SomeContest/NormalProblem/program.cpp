#include <bits/stdc++.h>
using namespace std;

int main(){
    int limit;
    cin >> limit;
    while(limit--){
        string message;
        cin >> message;
        for(int i = message.size() - 1; i >= 0; i--){
            if(message[i] == 'q')cout << 'p';
            else if(message[i] == 'p') cout << 'q';
            else cout << 'w';
        }
        cout << '\n'; 
    }
    return 0;
}