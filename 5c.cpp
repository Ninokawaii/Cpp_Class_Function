#include <iostream>
using namespace std;
    class CarClass{     // The class    
    public:             // Access specifier        
    string model;       // Attribute        
    int price;          // Attribute        
    
    void introduction(string);  // Method/function declaration
};
// Method/function definition outside the class
void CarClass::introduction(string name){    
    cout << "Hello! My name is: " << name << endl;
}

int main(){    
    
    CarClass toyota;              // Create an object of CarClass    
    
    toyota.introduction("Tola");  // Call the method    
    toyota.model = "Rize";    
    toyota.price = 20000; 

    cout << "Car Model is: " <<toyota.model << endl;    
    cout << "The price is: " << toyota.price;    
    
    return 0;
}