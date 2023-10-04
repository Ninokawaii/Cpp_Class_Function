#include <iostream>
using namespace std;

class MySibling {     // The class    
    public:           // Access specifier        
    MySibling(string name, string occupation){    
    // Constructor with parameters            
    cout << name << " is a: " << occupation << endl;    
    }
};
int main() {    
    // Create objects and call the constructor with different values   
    MySibling sibling1 ("Tola", "Teacher");    
    MySibling sibling2 ("Sok", "Doctor");

    return 0;
}