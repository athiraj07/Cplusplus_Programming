#include <iostream>
using namespace std;

int main()
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}},b[3][3];
    int i=0,j=0;

#if 0 //copy from array a to array b
1 2 3
4 5 6
7 8 9
#endif
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            b[i][j] = a[i][j];            
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

#if 0 //horizantal to vertical value in array a
1 4 7
2 5 8
3 6 9
#endif
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            a[i][j] = b[j][i];
            //cout << *b[j] << ' ';
        }
    }
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

#if 0 //swap 1st and 3rd element in array a
7 4 1
8 5 2
9 6 3
#endif
    for(j=0;j<3;j++) {
        i = a[j][2];
        a[j][2] = a[j][0];
        a[j][0] = i;
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}