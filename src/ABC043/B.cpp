#include <bits/stdc++.h>
using namespace std;

int main(){
    string ans = "";
    string s;
    cin >> s;

    //入力された文字数
    int len = s.size();
    
    //文字列を文字に分解
    for (char c :s){
        if(c == '0'){
            ans = ans + "0";
        }
        else if(c == '1'){
            ans = ans + "1";
        }
        else{
            if(ans.size() > 0){
                //Bの場合は1文字削除
                ans.pop_back();
            }
        }
    }

    cout << ans << endl;
    return 0;
}