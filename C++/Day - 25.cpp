#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        if (Y % X == 0 && Y / X <= N) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
