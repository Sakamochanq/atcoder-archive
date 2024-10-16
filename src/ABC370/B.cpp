#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    //N×Nの配列
    vector<vector<int>> A(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            cin >> A[i][j];
            
            //0から始まるから1引く
            A[i][j]--;
        }
    }

    //元素1
    int current = 0;
    for (int i = 0; i < N; i++){
        if(current >= i){
            current = A[current][i];
        }
        else{
            current = A[i][current];
        }
    }
    
    current++;
    cout << current << endl;
    return 0;
}