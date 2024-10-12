#include <bits/stdc++.h>
using namespace std;

int main(){
    //n:グループ数, k:グループの人数
    int n, k;
    cin >> n >> k;

    vector<int>A(n);
    for(int i = 0; i < n; i++){
        //グループ人数の格納
        cin >> A[i];
    }

    int kuuseki = k;
    int kaisuu = 0;

    for(int i = 0; i < n; i++){
        if(kuuseki < A[i]){
            kaisuu++;
            kuuseki = k;
        }
        kuuseki = kuuseki - A[i];
    }

    if( kuuseki < k){
        kaisuu++;
    }

    cout << kaisuu << endl;
    return 0;
}