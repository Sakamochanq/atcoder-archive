#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> cnt(200);

    //最も多い文字
    int max = 0;

    //文字列の各文字でループ
    for (char c : s){
        cnt[c]++;
        for (char c = 'a'; c <= 'z'; c++){
            max = std::max(max, cnt[c]);
        }
    }

    for (char c = 'a'; c <= 'z'; c++){
        if (cnt[c] == max){
            cout << c << endl;
            return 0;
        }
    }

    return 0;
}