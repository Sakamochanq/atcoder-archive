#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;

int f(int x, int y){
    string ketugou = to_string(x) + to_string(y);
    //文字を数値に変換
    return stoll(ketugou) % mod;
} 

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long int result = 0;

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (i != j){
                result += f(a[i], a[j]);
            }
        }
    }

    //RE
    cout << result << endl;
    return 0;
}