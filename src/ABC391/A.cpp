#include <bits/stdc++.h>
using namespace std;

int main(){
    string D;
    cin >> D;

    if(D == "N"){
        cout << "S" << endl;
    }
    else if(D == "S"){
        cout << "N" << endl;
    }
    else if(D == "W"){
        cout << "E" << endl;
    }
    else if(D == "E"){
        cout << "W" << endl;
    }

    if(D == "NW"){
        cout << "SE" << endl;
    }
    else if(D == "NE"){
        cout << "SW" << endl;
    }
    else if(D == "SW"){
        cout << "NE" << endl;
    }
    else if(D == "SE"){
        cout << "NW" << endl;
    }

    return 0;
}