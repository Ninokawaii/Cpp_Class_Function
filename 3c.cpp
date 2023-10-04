#include <iostream>
using namespace std;
class CarClass{         // The class    
    public:             // Access specifier        
    string model;       // Attribute        
    int price;          // Attribute     
       
    void introduction(string name){  
    // Method/function defined inside the class 
    cout << "Hello! My name is: " << name << endl;        
}
};

int main(){    
    CarClass toyota;                // Create an object of CarClass 

    toyota.introduction("Tola");    // Call the method    
    toyota.model = "Rize";    
    toyota.price = 20000;    

    cout << "Car Model is: " <<toyota.model << endl;    
    cout << "The price is: " << toyota.price << endl;   

    return 0;
}