#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0;
    
    // s.size(); で文字数取得
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}