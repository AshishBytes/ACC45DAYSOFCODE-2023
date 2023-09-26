#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int extraChairs = max(0, X - Y);
        cout << extraChairs << endl;
    }
    return 0;
}

/**********************************************************
 * @INFO
 * Code by Ashish Singh
 * @INFO
 * Github - AshishBytes
 * @INFO
 * Gmail - ashishlodhi5559@gmail.com
 * @INFO
 * Instagram - @itz_ash._u
 * @INFO
 * Twitter - @itz_ash_u
 * @INFO
 **********************************************************/
