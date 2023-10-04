#include <iostream>
using namespace std;

class MyClass {       // The class    
    public:           // Access specifier   

    MyClass(string name) {    // Constructor with parameters            
    cout << "Hello! My name is: " << name << endl;    
    }
};

int main() {    
    // Create objects and call the constructor with different values    
    MyClass myObj1("Tola");    
    MyClass myObj2("Sok");

    return 0;
}