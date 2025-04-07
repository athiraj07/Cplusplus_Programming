#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountname;
    int balance;

public:
    void credit(int a) {
        balance += a;
    }
    void balancequery() {
        cout << balance <<endl;
    }
    void func(int a=10, int b=20) {
        cout << a+b << endl;
    }
    BankAccount(){
        balance = 0;
        cout << "In Constructor, no arg" << endl;
    }

    BankAccount(int initial_val){
        balance = initial_val;
        cout << "In Constructor, arg passed" << initial_val << endl;
    }
    ~BankAccount(){
        cout << "In Destructor" << this->balance <<endl;
    }
};

int main() {
    class BankAccount A(10),B;
    cout << "Calling credit function"  << endl;
    B.func(20,40);
    A.credit(100);
    A.balancequery();
    cout << "Exiting the program" << endl;
    return 0;
}
