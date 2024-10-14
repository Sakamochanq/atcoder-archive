#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> D(K);

    for(int i = 0; i < K; i++) {
        cin >> D[i];
    }

    //制約 1 <= N <= 100000
    for(int i = N; i < 100000; i++) {
        string s = to_string(i);
        bool flag = true;
        for(int j = 0; j < s.size(); j++) {
            for(int k = 0; k < K; k++) {
                if(s[j] == D[k] + '0') {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}