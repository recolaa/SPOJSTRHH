#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; //number of test cases
    string c; //string to be read
    cin >> t; //read number of test cases
    for(int i = 0; i < t; i++){ //loop through test cases
        cin >> c; //read string
        cout << c[0]; //print first character
        for(int i = 2; i < (c.size()/2); i+=2){ //loop through string
            cout << c[i];; //print every other character
        }
        cout << endl; //print new line
    }
} 

