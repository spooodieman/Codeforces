#include <bits/stdc++.h>
using namespace std;

int main(){
    string message;
    cin >> message;
    long lower = 0;
    for(char s:message){
        if(s >= 'a' && s <= 'z') lower++;
    }
    if(message.size() - lower > message.size()/2){
        for(int i = 0; i < message.size(); i++){
            if(message[i] >= 'a' && message[i] <= 'z') message[i] -= 32;
        }
        cout << message << '\n';
    }
    else{
        for(int i = 0; i < message.size(); i++){
            if(message[i] >= 'A' && message[i] <= 'Z') message[i] += 32;
        }
        cout << message << '\n';
    }
}