#include <iostream>
using namespace std;
int main()
{
    int a=1234,b,c;
    int i=0;
    
    while(a!=0) {
        b = a%10;
        c = c | b<<i;
        i +=4;
        //cout << b << endl;
        a = a/10;
    }
    cout << c << endl;
    

    return 0;
}