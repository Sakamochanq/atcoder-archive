#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> Q(n);
    vector<int> A(n);
    vector<int> B(n);

    int INF = 1000000;
    int result = 0;

    for(int i = 0;  i < n; i++) {
        cin >> Q[i];
    }
        for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
        for(int i = 0; i < n; i++) {
        cin >> B[i];
    }

    for(int x = 0; x < *max_element(Q.begin(), Q.end()) + 1; x++) {
        int y = INF;
        for(int i = 0; i < n; i++) {
            if(Q[i] < A[i] * x) {
                y = 0;
                break;
            }
            else if(B[i] > 0){
                y = min(y, (Q[i] - A[i] * x) / B[i]);
            }
        }
        result = max(result, x + y);
    }

    //WA
    cout << result << endl;
    return 0;
}