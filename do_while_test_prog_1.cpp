#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char input;
    int vector_input,total{0},min{0},max{0};
    vector <int> list;
    cout << "P - Print numbers" << '\n' << "A - Add a number" << '\n' << "M - Display the mean of the numbers" << '\n' << "S - Display the smallest number" << '\n' << "L - Display the largest number" << '\n' << "Q - Quit" << endl;
    cout << "Enter your choice:";
    cin >> input;
    do {
        if(input == 'P' || input == 'p') {
            if (list.empty() == 0) {
                for(auto i : list) {
                    cout << i << '\t' << endl;
                }
            }
            else {
                cout << "Vector list is empty" << endl;
            }
        } else if (input == 'A' || input == 'a') {
            cin >> vector_input;
            list.push_back(vector_input);
        } else if (input == 'M' || input == 'm') {
            for(auto i : list) {
                total += i;
            }
            cout << "Mean val is " << static_cast <double>(total)/list.size();
        } else if ((input == 'S') || (input == 's')) {
           min = list.at(0);
            for(auto i : list) {
                if (min > i)
                    min = i;
            }
            cout << "Smallest Nr is " << min;
        } else if (input == 'L' || input == 'l') {
            max = list.at(0);
            for(auto i : list) {
                if (max < i)
                    max = i;
            }
            cout << "Largest Nr is " << max;
        } else if (input == 'Q' || input == 'q') {
            cout << "Going to Quit this program" << endl;
        } else {
            cout << "No Given Options Selected" << endl;
        }
        cout << "P - Print numbers" << '\n' << "A - Add a number" << '\n' << "M - Display the mean of the numbers" << '\n' << "S - Display the smallest number" << '\n' << "L - Display the largest number" << '\n' << "Q - Quit" << endl;
        cout << "Enter your choice:";
        cin >> input;
        cout << "Entered input inside do-while loop is " << input << endl;
    }while ( ! (input == 'q' || input == 'Q') );

    return 0;
}