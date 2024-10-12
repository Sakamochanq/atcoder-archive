#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    //10の8乗のあまりを返す
    return (x + y) % 100000000;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int result = 0;

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            result += f(a[i], a[j]);
        }
    }

    //TLE
    cout << result << endl;
    return 0;
}