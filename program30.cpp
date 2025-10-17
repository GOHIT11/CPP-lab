//To demonstrate insertion, deletion, access, and searching using map
#include <iostream>
#include <map>
using namespace std;
int main() {
 map<int, string> m;
 // Insertion
 m[1] = "One";
 m[2] = "Two";
 m[3] = "Three";
 // Traversal
 cout << "Map Elements:" << endl;
 for (auto &p : m)
 cout << p.first << " -> " << p.second << endl;
 // Search
 if (m.find(2) != m.end())
 cout << "Found Key 2: " << m[2] << endl;
 // Deletion
 m.erase(1);
 cout << "After Deletion:" << endl;
 for (auto &p : m)
   cout << p.first << " -> " << p.second << endl;
 return 0;
}
