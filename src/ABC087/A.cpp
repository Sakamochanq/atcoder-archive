#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, A, B;
    cin >> X >> A >> B;

    int result = (X - A) % B;

    cout << result << endl;

    return 0;
}