#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, ans;
    cin >> A >> B;

    ans = A + B;

    for(int i = 0; i < 9; i++){
        if(i != ans){
            cout << i << endl;
            break;
        }
    }
    return 0;  
}