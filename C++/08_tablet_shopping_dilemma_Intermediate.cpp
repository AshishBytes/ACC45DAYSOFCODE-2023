#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, B;
        cin >> N >> B;
        int max_area = -1;
        for (int i = 0; i < N; i++) {
            int W, H, P;
            cin >> W >> H >> P;
            if (P <= B) {
                int area = W * H;
                if (area > max_area) {
                    max_area = area;
                }
            }
        }
        if (max_area == -1) {
            cout << "no tablet" << endl;
        } else {
            cout << max_area << endl;
        }
    }
    return 0;
}
