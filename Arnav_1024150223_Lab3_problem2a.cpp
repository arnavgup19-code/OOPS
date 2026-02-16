// Q2(a): Display the elements of a Linked List

#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int elementData;
    struct Node* nextNode;
};

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->elementData = value;
    newNode->nextNode = NULL;
    return newNode;
}

void displayLinkedList(Node* headNode) {
    Node* currentNode = headNode;
    while (currentNode != NULL) {
        cout << currentNode->elementData << " -> ";
        currentNode = currentNode->nextNode;
    }
    cout << "NULL";
}

int main() {
    Node* headNode = createNode(10);
    headNode->nextNode = createNode(20);
    headNode->nextNode->nextNode = createNode(30);
    displayLinkedList(headNode);
    return 0;
}
