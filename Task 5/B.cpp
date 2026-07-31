#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;

        bool found_a = false;
        long long a = 0;

        long long num = 2;
        while (num * num <= n) {
            if (n % num == 0) {
                a = num;
                found_a = true;
                break;
            }
            num = num + 1;
        }

        if (found_a == false) {
            cout << "NO" << endl;
        } else {
            long long rest = n / a;

            bool found_b = false;
            long long b = 0;
            long long c = 0;

            long long num2 = 2;
            while (num2 * num2 <= rest) {
                if (rest % num2 == 0) {
                    long long temp_c = rest / num2;
                    if (num2 != a && temp_c != a && temp_c != num2) {
                        b = num2;
                        c = temp_c;
                        found_b = true;
                        break;
                    }
                }
                num2 = num2 + 1;
            }

            if (found_b == false) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
        }
    }

    return 0;
}