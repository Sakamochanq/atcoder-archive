#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;

    vector<int> R(n);
    for(int i = 0; i < n; i++){
        cin >> R.at(i);
    }
    for(int i = 0; i < n; i++){
        sum += R.at(i);
    }

    int ave = sum / n;
    for(int i = 0; i < n; i++){
        if(R.at(i) >= ave){
            cout << R.at(i) - ave << endl;
        }else{
            cout << ave - R.at(i) << endl;
        }
    }

    return 0;
}
