#include <iostream>
using namespace std;

int main() {
    double A, B, result;
    
    char opr;

    cin >> A;
    cin >> B;
    cin >> opr;

    switch (opr) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            if (B == 0) {
                cout << "Undefined" << endl;
                return 0;
            }
            result = A / B;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }

    cout << fixed << result << endl;
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