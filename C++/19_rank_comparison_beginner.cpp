#include <iostream>
#include <string>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int X = N + 1;
        while (true) {
            int sum_N = digitSum(N);
            int sum_X = digitSum(X);
            
            if (sum_N % 2 != sum_X % 2) {
                cout << X << endl;
                break;
            }
            
            X++;
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