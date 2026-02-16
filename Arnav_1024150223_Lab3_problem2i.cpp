// Q2(i): Reorder Linked List without extra space

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

Node* reorderList(Node* headNode) {
    if (headNode == NULL || headNode->nextNode == NULL) return headNode;

    Node* slowPointer = headNode;
    Node* fastPointer = headNode;
    Node* previousSlowPointer = NULL;

    while (fastPointer != NULL && fastPointer->nextNode != NULL) {
        previousSlowPointer = slowPointer;
        slowPointer = slowPointer->nextNode;
        fastPointer = fastPointer->nextNode->nextNode;
    }

    Node* secondHalf = slowPointer;
    previousSlowPointer->nextNode = NULL;
    secondHalf = reverseList(secondHalf);

    Node* firstHalf = headNode;
    Node* mergedHead = firstHalf;

    while (firstHalf != NULL && secondHalf != NULL) {
        Node* temp1 = firstHalf->nextNode;
        Node* temp2 = secondHalf->nextNode;

        firstHalf->nextNode = secondHalf;
        secondHalf->nextNode = temp1;

        firstHalf = temp1;
        secondHalf = temp2;
    }

    return mergedHead;
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
    headNode->nextNode->nextNode->nextNode = createNode(40);

    headNode = reorderList(headNode);
    displayLinkedList(headNode);

    return 0;
}
