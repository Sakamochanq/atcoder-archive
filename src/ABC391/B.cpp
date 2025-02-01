#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<string>S(N), T(M);
    for(int i = 0; i < N; i++){
        cin >> S.at(i);
    }
    for(int i = 0; i < M; i++){
        cin >> T.at(i);
    }

    bool ha = true;

    for(int i = 0; i < N - M; i++){
        for(int j = 0; j < N - M; j++){
            for(int k = 0; k < M; k++){
                for(int l = 0; l < M; l++){
                    if(S[i+k][j+l] != T[k][l]){
                        ha = false;
                    }
                }
            }
            if(ha){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    // ??????
    return 0;
}