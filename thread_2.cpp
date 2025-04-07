#include <iostream>
#include <chrono>
#include <thread>
//#include <utility>
//#include <functional>
using namespace std;

atomic <int> num{0};
 
void f()
{
    //if( num%2 == 0){
    if( (num&1) == 0){
        cout<<"Even number:"<<(num++)<<", thread:"<<this_thread::get_id()<<'\n';
    } else {
        cout<<"Odd number:"<<(num++)<<", thread:"<<this_thread::get_id()<<'\n';
    }
}
 
int main(){

   vector<jthread> threadPool;

   //function<void()> funPointer {f};
   for(auto i=0; i<50; i++){
       std::this_thread::sleep_for(std::chrono::nanoseconds(50000));//used sleep for delay, otherwise explicit sync mechanism should use.
       threadPool.emplace_back(f);
   }

    return 0;
}