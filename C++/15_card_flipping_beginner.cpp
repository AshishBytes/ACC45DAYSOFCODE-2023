#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int flips = min(X, N - X);
        cout << flips << endl;
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