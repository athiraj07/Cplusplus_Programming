#include <iostream>
using namespace std;

template <class A, class B>
class MyClass {
  public:
    A first;
    B second;

    MyClass(A f, B s) {
      first = f;
      second = s;
    }
};

int main() {
  MyClass<int,string> myObj( 15, "Some Text" );
  cout << myObj.first << " " << myObj.second << "\n";
  return 0;
}