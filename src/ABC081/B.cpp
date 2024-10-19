#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n);

    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    while(true){
        //奇数のフラグ
        bool flag_odd = false;

        for(int i = 0; i < n; i++){
            if(A[i] % 2 != 0){
                flag_odd = true;
            }
        }
        if(flag_odd == true){
            break;
        }
        for(int i = 0; i < n; i++){
            A[i] = A[i] / 2;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}