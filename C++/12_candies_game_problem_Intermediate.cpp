#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int moves = 1;
        while (true) {
            if (moves % 2 == 1) {
                A -= moves;
                if (A < 0) {
                    cout << "Bob" << endl;
                    break;
                }
            } else {
                B -= moves;
                if (B < 0) {
                    cout << "Limak" << endl;
                    break;
                }
            }
            moves++;
        }
    }
    return 0;
}

/**********************************************************
 * @INFO
 * Code by Ashish Singh
 * @INFO
 * Gmail - ashishlodhi5559@gmail.com
 * @INFO
 * Github - AshishBytes
 * @INFO
 * LinkedIn - ashishbytes
 * @INFO
 * Instagram - @itz_ash._u
 * @INFO
 * Twitter - @itz_ash_u
 * @INFO
 **********************************************************/