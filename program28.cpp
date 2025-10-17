//To demonstrate insertion, deletion, and traversal using list and vector.
int main() {
 // Vector
 vector<int> v = {1, 2, 3};
 v.push_back(4);
 v.erase(v.begin()); // delete first element
 cout << "Vector Elements: ";
 for (int x : v) cout << x << " ";
 cout << endl;
 // List
 list<int> l = {10, 20, 30};
 l.push_front(5);
 l.push_back(40);
 l.remove(20); // delete specific element
 cout << "List Elements: ";
 for (int x : l) cout << x << " ";
 cout << endl;
 return 0;
}
