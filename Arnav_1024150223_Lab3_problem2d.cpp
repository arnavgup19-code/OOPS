// Q2(d): Delete an element from a Linked List

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

Node* deleteElementFromList(Node* headNode, int valueToDelete) {
    if (headNode == NULL) return NULL;

    if (headNode->elementData == valueToDelete) {
        Node* tempNode = headNode;
        headNode = headNode->nextNode;
        free(tempNode);
        return headNode;
    }

    Node* currentNode = headNode;
    while (currentNode->nextNode != NULL) {
        if (currentNode->nextNode->elementData == valueToDelete) {
            Node* tempNode = currentNode->nextNode;
            currentNode->nextNode = tempNode->nextNode;
            free(tempNode);
            return headNode;
        }
        currentNode = currentNode->nextNode;
    }
    return headNode;
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

    headNode = deleteElementFromList(headNode, 20);
    displayLinkedList(headNode);
    return 0;
}
