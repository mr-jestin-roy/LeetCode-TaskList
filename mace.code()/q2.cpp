#include <bits/stdc++.h>
using namespace std;

int main() {
    int returned[3];
    int expected[3];


    cin >> returned[0];
    cin >> returned[1];
    cin >> returned[2];


    cin >> expected[0];
    cin >> expected[1];
    cin >> expected[2];

    int fin = 0;


    if (expected[2] == returned[2]) {
        if (expected[1] < returned[1]) {

            fin = (returned[1] - expected[1]) * 500;
        } else if ( (expected[1] == returned[1]) && (expected[0] < returned[0]) ) {

            fin = (returned[0] - expected[0]) * 15;
        }
    } else if (expected[2] < returned[2]) {

        fin = 10000;
    }
    cout << fin << endl;
}