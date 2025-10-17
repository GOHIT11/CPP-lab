//To demonstrate a function template for performing the same operation on different data types.
#include <iostream>
using namespace std;
// Function template
template <class T>
T add(T a, T b) {
 return a + b;
}
int main() {
 cout << "Sum of Integers: " << add(10, 20) << endl;
 cout << "Sum of Doubles: " << add(3.5, 2.7) << endl;
 cout << "Sum of Characters: " << add('A', (char)2) << endl; // 'A' + 2
 return 0;
}
