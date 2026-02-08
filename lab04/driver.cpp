// TO DO: Implement the driver main() function to test your code.
#include <iostream>
#include <string>
#include "LinkedList.hpp"
using namespace std;

int main() {

    LinkedList<int> intList;
    LinkedList<string> strList;

    // Linked List With Integer
    cout << "Content of Integer Linked List: " << endl << intList << endl;
    intList.append(10);
    intList.append(15);
    intList.append(20);
    intList.append(25);
    intList.append(30);

    cout << intList;
    cout << intList.getElement(2) << endl;
    intList.replace(2, 44);
    cout << "Content of Integer Linked List: " << endl << intList << endl;
    try {
        cout << intList.getElement(10) << endl;
    } catch (const std::string& e) {
        cout << e << endl;
    }

    // Linked List With String
    cout << "Content of String Linked List: " << endl << strList << endl;
    strList.append("I");
    strList.append("am");
    strList.append("attending");
    strList.append("C++");
    strList.append("Class");

    cout << strList;
    cout << strList.getElement(2) << endl;
    strList.replace(3, "Python");
    try {
        cout << strList.getElement(10) << endl;
    } catch (const std::string& e) {
        cout << e << endl;
    }
    cout << "Content of String Linked List: " << endl << strList << endl;

    return 0;
}