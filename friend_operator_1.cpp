#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;
public:
    Complex(int x, int y) {
        a = x;
        b = y;
    }
    ~Complex() {
    }
    void print() {
        cout << a << b << endl;
    }
    friend Complex operator+(Complex &m, Complex &n);
#if 0 //The below operator+ func is not working; need to check later.
    Complex operator+(Complex &m, Complex &n) {
        return Complex(m.a+n.a,m.b+n.b);
    }
#endif
};

#if 1
Complex operator+(Complex &m, Complex &n) {
        return Complex(m.a+n.a,m.b+n.b);
    }
#endif
// Driver Code
int main()
{
	Complex i{1,2}, j{3,4};
	Complex k = i+j;
	k.print();
	//cout << k.a << k.b << endl;
	return 0;
}
