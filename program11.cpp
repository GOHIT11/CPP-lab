//To demonstrate the use of a default constructor and destructor in C++.
#include <iostream>
using namespace std;
class Demo {
public:
 Demo() { // Default constructor
 cout << "Default Constructor Called!" << endl;
 }
 ~Demo() { // Destructor
 cout << "Destructor Called!" << endl;
 }
};
int main() {
 Demo obj; // Constructor will be called automatically
 cout << "Inside main function" << endl;
 return 0; // Destructor will be called automatically
}
