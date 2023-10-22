// https://www.codechef.com/problems/WGHTS

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float W,X,Y,Z;
        cin>>W>>X>>Y>>Z;
        (X==W || Y==W || Z==W || X+Y==W || Y+Z==W || Z+X==W || X+Y+Z==W)?cout<<"YES"<<endl:cout<<"NO"<<endl;;
        
    }
	return 0;
}