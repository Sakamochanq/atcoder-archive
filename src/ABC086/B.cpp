#include <bits/stdc++.h>
using namespace std;

int is_req(int n){
    int root = sqrt(n);
    return root * root == n;
}

int main(){
    string a, b;
    cin >> a >> b;

    //文字列を数値に変換
    int n = stoi(a + b);

    if(is_req(n)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}