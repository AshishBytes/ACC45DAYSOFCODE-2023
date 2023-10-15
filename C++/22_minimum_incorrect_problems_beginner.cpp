#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;
        int incorrect = 0;

        if (X % 3 == 0) {
            incorrect = 0;
        } else if (X % 3 == 1) {
            incorrect = 2;
        } else {
            incorrect = 1;
        }

        cout << incorrect << endl;
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