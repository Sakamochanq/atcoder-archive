#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> S(12);
    for(int i = 0; i < S.size(); i++){
        cin >> S[i];
    }

    int count = 0;

    for(int i = 0; i < S.size(); i++){
        if(S[i].length() == i+1){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}