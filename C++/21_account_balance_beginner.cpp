#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        int final_balance = w + (x - y) * z;
        cout << final_balance << endl;
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