
#include <iostream>
using namespace std;

class Fraction {
  int rem, quo;
public:
    Fraction (int r=0,int q=1) : rem{r}, quo{q} {
    }
    Fraction (const Fraction &temp) { //explicit copy Constructor; if we don't keep this user defined Constructor, compiler will keep the copy Constructor.
        cout << "In Constructor copy" << endl;
        rem = temp.rem;
        quo = temp.quo;
    }
    void print() {
        cout << rem << '\t' << quo << endl;
    }
    
};

void Fraction_print(Fraction F3) {
    cout << "Inside Fraction_print" << endl;
    F3.print();
}

int main()
{
    Fraction F1{2,4};
    cout << "Calling Fraction_print fun" << endl;
    Fraction_print(F1);
    //F1.print();
    //Fraction F2{F1};
    //F2.print();
    return 0;
}