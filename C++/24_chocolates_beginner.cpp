#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int C, X, Y;
        cin >> C >> X >> Y;

        int money_spent = 0;

        if (X >= C) {
            money_spent = 0;
        } else {
            int chocolates_needed = C - X;
            money_spent = chocolates_needed * Y;
        }

        cout << money_spent << endl;
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