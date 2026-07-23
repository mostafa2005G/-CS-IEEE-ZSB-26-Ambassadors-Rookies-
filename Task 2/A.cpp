#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool solved[26] = {false};
        int balloons = 0;

        for (int i = 0; i < n; i++) {
            int index = s[i] - 'A';

            if (!solved[index]) {
                balloons += 2;
                solved[index] = true;
            } else {
                balloons += 1;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}