#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int px = 0, py = 0, pt = 0;

    for(int i = 0; i < n; i++){
        int t, x, y;
        cin >> t >> x >> y;

        int dt = t - pt;
        int dist = abs(x - px) + abs(y - py);

        if(dist > dt || (dt - dist) % 2 != 0){
            cout << "No" << endl;
            return 0;
        }

        px = x;
        py = y;
        pt = t;
    }

    //WA
    cout << "Yes" << endl;
    return 0;
}