#include <iostream>

using namespace std;

class Deep {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    int * get_data() { return data; }
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(Deep &source) 
    //: data(source.data) {//shallow copy (At the end of program it frees the same memory twice and crash)
        : Deep(*source.data) { //Deep copy (copy the data instead of pointer)
        cout << "Copy constructor  - Deep copy:" << source.get_data() << endl;
}

Deep::~Deep() {
    cout << "Destructor freeing data:" << data << endl;
    delete data;
}

void display_Deep(Deep s) {
    cout << s.get_data() << '\t' << s.get_data_value() << endl;
}

int main() {
    
    Deep obj1 {100};
    cout << "obj1.get_data:" << obj1.get_data() << endl;
    display_Deep(obj1);
    //cout << obj1.get_data() << endl;
    //Deep obj2 {obj1};
    //obj2.set_data_value(1000);
    //cout << "program going to terminate" << endl;
    //while(1);
    return 0;
}

#if 0
//This program output below
obj1.get_data:0x5ec399bcf2b0
Copy constructor  - Deep copy:0x5ec399bcf2b0
0x5ec399bcf6e0  100
Destructor freeing data:0x5ec399bcf6e0
Destructor freeing data:0x5ec399bcf2b0
#endif
