// Q2(e): Check if a Linked List is sorted

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

bool isListSorted(Node* headNode) {
    Node* currentNode = headNode;
    while (currentNode != NULL && currentNode->nextNode != NULL) {
        if (currentNode->elementData > currentNode->nextNode->elementData) return false;
        currentNode = currentNode->nextNode;
    }
    return true;
}

int main() {
    Node* headNode = createNode(10);
    headNode->nextNode = createNode(20);
    headNode->nextNode->nextNode = createNode(30);

    cout << (isListSorted(headNode) ? "Sorted" : "Not Sorted");
    return 0;
}
