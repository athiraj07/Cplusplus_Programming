#include <iostream>
using namespace std;
#if 0
7 4 1
8 5 2
9 6 3
#endif
int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, b[3][3];
    
    for(int i=2;i>=0;i--) {
        for(int j=0;j<3;j++) {
            b[j][0] = arr[i][0];
        }
    }
    
    for(int i=0;i>3;i++) {
        for(int j=0;j<3;j++) {
            cout << b[j][i] << endl;
        }
    }
    return 0;
}