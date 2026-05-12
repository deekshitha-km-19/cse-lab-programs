#include <iostream>
using namespace std;

int main() {
    int google_salary = 50;
    
    int* my_pointer = &google_salary;
    
    cout << "1. Value: " << google_salary << endl;
    cout << "2. Address: " << &google_salary << endl;
    cout << "3. Pointer stores: " << my_pointer << endl;
    cout << "4. Value via pointer: " << *my_pointer << endl;
    
    *my_pointer = 55;
    cout << "5. New value: " << google_salary << endl;
    
    return 0;
}
