#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    //何通り
    int count = 0;

    //A:500円, B:100円, C:50円
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            for(int k = 0; k <= C; k++){
                if(500*i + 100*j + 50*k == X){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}