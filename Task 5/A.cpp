#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int MAXV = 1000001;
    vector<int> divCount(MAXV, 0);

    
    for (int i = 1; i < MAXV; i++) {
        for (int j = i; j < MAXV; j += i) {
            divCount[j]++;
        }
    }

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << divCount[x] << "\n";
    }

    return 0;
}