#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin >> s;

    //1
    bool flag;

    if(isupper(s[0])){
        flag = true;
        for(int i = 1; i < s.size(); i++){
            if(islower(s[i]))
            {
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}