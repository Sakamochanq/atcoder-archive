#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> haiku = {A, B, C};

    //配列の中に5が2つ、7が1つあればYES
    if(count(haiku.begin(), haiku.end(), 5) == 2 && count(haiku.begin(), haiku.end(), 7) == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}