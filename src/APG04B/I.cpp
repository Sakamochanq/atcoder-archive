#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;

    if(p == 1){
        int price, n;
        cin >> price >> n;

        cout << price * n << endl;
    }
    else if(p == 2){
        string text;
        int price, n;
        cin >> text >> price >> n;

        cout << text << "!" << endl;
        cout << price * n << endl;
    }

    return 0;
}