


#include <iostream>
using namespace std;

class Node {
public: 
    int value;
    Node* next;
};

void printList(Node*n) {   
    while (n != NULL) {
    sttd:cout << n->value << endl;
        n = n->next;
    }
}


int main()
{
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();

    head->value = 0;
    head->next = first;

    first->value = 1;
    first->next = second;

    second->value = 2;
    second->next = NULL;
    printList(head);

    return 0;
}
