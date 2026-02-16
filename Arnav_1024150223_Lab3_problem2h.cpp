// Q2(h): Reverse the elements of a Linked List

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

Node* reverseList(Node* headNode) {
    Node* previousNode = NULL;
    Node* currentNode = headNode;

    while (currentNode != NULL) {
        Node* nextNode = currentNode->nextNode;
        currentNode->nextNode = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    return previousNode;
}

void displayLinkedList(Node* headNode) {
    Node* currentNode = headNode;
    while (currentNode != NULL) {
        cout << currentNode->elementData << " ";
        currentNode = currentNode->nextNode;
    }
}

int main() {
    Node* headNode = createNode(10);
    headNode->nextNode = createNode(20);
    headNode->nextNode->nextNode = createNode(30);

    headNode = reverseList(headNode);
    displayLinkedList(headNode);

    return 0;
}
