#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
int val=0,i=0;
void func_display();
//void func_display(int);
#if 0
void func_T1(int val) {
    func_display(1);
}


void func_T2(int val) {
    func_display(0);
}
#endif
void func_display() {
#if 0
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
#endif
    for(;i<100;i++) {
    m.lock();
    cout << this_thread::get_id() << ",val is" << ++val << endl;
    //cout << "val is" << ++val << endl;
    m.unlock();
    std::this_thread::sleep_for(std::chrono::nanoseconds(500)); //sleep for sync between 2-thread executions
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main()
{
    std::thread A(func_display);
    std::thread B(func_display);

    A.join();
    B.join();
    //while(1);
    return 0;
}