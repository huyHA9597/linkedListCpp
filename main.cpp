#include <iostream>
#include "orderedLinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout << "New Line: " << endl;
    orderedLinkedList<int> list1, list2;
    int num;
    cout << "Enter numbers ending with -999. " << endl;
    cin >> num;

    while (num != -999)
    {
        list1.insert(num);
        cin >> num;
    }

    cout << endl;

    cout << "list1: ";
    list1.print();
    cout << endl;

    list2 = list1;

    cout << "list2: ";
    list2.print();
    cout << endl;

    cout << "Enter the number to be deleted: ";
    cin >> num;
    cout << endl;

    list2.deleteNode(num);

    cout << "After deleting " << num << ", list2: " << endl;
    list2.print();
    cout << endl;
    return 0;
}