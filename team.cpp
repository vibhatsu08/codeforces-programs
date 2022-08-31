#include <iostream>
using namespace std;

int main () {
    // number of testcases
    int n;
    cin >> n;

    // input for the values.
    int p, v, t, output=0;

    while (n--) {
        cin >> v >> p >> t;
        // if the sum is greater than or equal to 2, the output will increase by 1.
        if ((p + v + t) >= 2) {
            output += 1;
        }
    }
    cout << output << endl;

    return 0;
}