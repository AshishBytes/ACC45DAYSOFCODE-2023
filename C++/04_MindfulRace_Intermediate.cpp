#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int t;
    float L, v1, v2;
    cin >> t;
    while (t--) {
        cin >> L >> v1 >> v2;
        setprecision(3);
        int t1 = ceil(L / v1);
        int t2 = ceil(L / v2);
        if (t1 > t2) {
            if (t1 == t2 + 1)
                cout << "0" << endl;
            else
                cout << t1 - t2 - 1 << endl;
        } else if (t1 == t2)
            cout << "-1" << endl;
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
