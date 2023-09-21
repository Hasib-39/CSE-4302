#include "StudentCollection.h"
#include <iostream>
using namespace std;
int main() {
    StudentCollection collection;

        collection.addStudent("Alice", 3.75);
        collection.addStudent("Bob", 3.9);
        collection.addStudent("Charlie", 3.4);

        cout << "Alice's grade: " << collection["Alice"] << endl;
        cout << "Bob's grade: " << collection["Bob"] << endl;
        cout << "Charlie's grade: " << collection["Charlie"] << endl;

        collection["Charlie"] = 3.8;
        cout << "Charlie's updated grade: " << collection["Charlie"] << endl;

        collection.addStudent("David", 3.6);
        collection.addStudent("Eve", 3.7);


        collection.addStudent("Frank", 3.8);



    return 0;
}
