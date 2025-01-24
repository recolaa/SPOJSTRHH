#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    string c;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> c;
        cout << c[0];
        for(int i = 2; i < (c.size()/2); i+=2){
            cout << c[i];;
        }
        cout << endl;
    }
} 

