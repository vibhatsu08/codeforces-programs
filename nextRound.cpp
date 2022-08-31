#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    int count = 0;

    if (n >= k) {
        int arr[n];

        for (int i=0; i<n; i++) {
            cin >> arr[i];
            if (arr[i] >= arr[k-1] && arr[i] > 0) {
                count += 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}