#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int total_rupees = X * 5 + Y * 10;
        int max_chocolates = total_rupees / Z;
        cout << max_chocolates << endl;
    }
    return 0;
}
