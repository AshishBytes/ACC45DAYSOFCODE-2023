#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A[5];
        int P;
        for (int i = 0; i < 5; i++) {
            cin >> A[i];
        }
        cin >> P;
        
        int total_hours = 0;
        for (int i = 0; i < 5; i++) {
            total_hours += A[i];
        }
        
        if (total_hours * P > 120) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
