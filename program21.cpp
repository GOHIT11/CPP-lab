//To demonstrate the use of pointers to objects and accessing class members in C++.
#include <iostream>
using namespace std;
class Student {
private:
 int rollNo;
 string name;
public:
 void setData(int r, string n) {
 rollNo = r;
 name = n;
 }
 void display() {
 cout << "Roll No: " << rollNo << ", Name: " << name << endl;
 }
};
int main() {
 Student s1; // Normal object
 Student *ptr = &s1; // Pointer to object
   ptr->setData(101, "Alice");
 ptr->display();
 // Dynamic allocation
 Student *s2 = new Student;
 s2->setData(102, "Bob");
 s2->display();
 delete s2; // Free memory
 return 0;
}
