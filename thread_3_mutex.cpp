#include <iostream>
#include <chrono>
#include <thread>
#include <utility>
#include <functional>
#include <thread>
#include <mutex>
 
using namespace std;
 
//atomic<int> num{10};
int num{10};
mutex num_mux;
 
void f()
{
    lock_guard<mutex> lock(num_mux);
    if( (num & 1) == 0){
        cout<<"Even number:"<<(num++)<<", thread:"<<this_thread::get_id()<<'\n';
    }
    else{
        cout<<"Odd number:"<<(num++)<<", thread:"<<this_thread::get_id()<<'\n';
    }
}
 
int main(){
   vector<jthread> threadPool;
   //function<void()> funPointer {f};
   for(auto i=0; i<10; i++){
       threadPool.emplace_back(f);
   }
    return 0;
}