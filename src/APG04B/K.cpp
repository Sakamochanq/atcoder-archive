#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << "A:";
    int i = 0;

    while ((i < A)){
        cout << "]";
        i++;
    }

    cout << endl;

    i = 0;
    cout << "B:";
    while (i < B){
        cout << "]";
        i++;
    }
    cout << endl;
    return 0;
}