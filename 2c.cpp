#include <iostream>
using namespace std;

class CarClass{         // The class    
    public:             // Access specifier        
    string model;       // Attribute        
    int price;          // Attribute
};

int main(){  

    CarClass toyota;    // Create an object of CarClass  

    toyota.model = "Rize";    
    toyota.price = 20000; 

    cout << "Car Model is: " <<toyota.model << endl;    
    cout << "The price is: " << toyota.price;    
    
    return 0;
}