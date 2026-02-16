// Q2(g): Concatenate two Linked Lists

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

Node* concatenateLists(Node* firstHead, Node* secondHead) {
    if (firstHead == NULL) return secondHead;

    Node* currentNode = firstHead;
    while (currentNode->nextNode != NULL) {
        currentNode = currentNode->nextNode;
    }
    currentNode->nextNode = secondHead;
    return firstHead;
}

void displayLinkedList(Node* headNode) {
    Node* currentNode = headNode;
    while (currentNode != NULL) {
        cout << currentNode->elementData << " ";
        currentNode = currentNode->nextNode;
    }
}

int main() {
    Node* firstHead = createNode(10);
    firstHead->nextNode = createNode(20);

    Node* secondHead = createNode(30);
    secondHead->nextNode = createNode(40);

    firstHead = concatenateLists(firstHead, secondHead);
    displayLinkedList(firstHead);

    return 0;
}
