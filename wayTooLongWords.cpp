#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    string word;
    char firstLetter, lastLetter;

    for (int i=1; i<=n; ++i) {
        cin >> word;
        if (word.size() > 10) {
            firstLetter = word[0];
            lastLetter = word[word.size()-1];
            cout << firstLetter << word.size()-2 << lastLetter << endl;
        }   
        else {
            cout << word << endl;
        }
    }

    return 0;
}