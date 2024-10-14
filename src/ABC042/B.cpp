#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;

    //文字配列
    string s[N];

    for(int i = 0; i < N; i++) {
        cin >> s[i];
    }

    //辞書順に並び替え
    sort(s, s+N);

    string result;
    for(int i = 0; i<N; i++){
        result = result + s[i];
    }

    cout << result << endl;
    return 0;
}