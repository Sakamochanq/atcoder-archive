#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, R;
    cin >> L >> R;

    if(L == 0 && R == 0){
        cout << "Invalid" << endl;
    }
    else if (L == 1 && R == 1){
        cout << "Invalid" << endl;
    }
    else if (L == 1 && R == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}