#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int tallest = -1;
        for (int i = 0; i < N; i++) {
            int height;
            cin >> height;
            tallest = max(tallest, height);
        }
        cout << tallest << endl;
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