#include <iostream>
#include <thread>
using namespace std;

void func_display(int);

void func_T1(int val) {
    func_display(1);
}


void func_T2(int val) {
    func_display(0);
}

void func_display(int k) {
    for(int i=0;i<100;i++){
        if(k==1) {
            if(i%2 == 0)
                cout << i << endl;
        }
        else {
            if(i%2 != 0)
                cout << i << endl;
        }
    }
}

int main()
{
    std::thread A(func_T1,100);
    std::thread B(func_T2,100);
    
    //pthread_join(A);
    //pthread_join(B);
    while(1);
    return 0;
}