#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int Tall = max(A, max(B, C));
    int Short = min(A, min(B, C));

    cout << Tall - Short << endl;

    return 0;
}