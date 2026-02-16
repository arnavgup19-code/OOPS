// Q2(f): Merge two sorted Linked Lists

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

Node* mergeSortedLists(Node* firstHead, Node* secondHead) {
    if (!firstHead) return secondHead;
    if (!secondHead) return firstHead;

    Node* mergedHead = NULL;

    if (firstHead->elementData <= secondHead->elementData) {
        mergedHead = firstHead;
        firstHead = firstHead->nextNode;
    } else {
        mergedHead = secondHead;
        secondHead = secondHead->nextNode;
    }

    Node* mergedTail = mergedHead;

    while (firstHead && secondHead) {
        if (firstHead->elementData <= secondHead->elementData) {
            mergedTail->nextNode = firstHead;
            firstHead = firstHead->nextNode;
        } else {
            mergedTail->nextNode = secondHead;
            secondHead = secondHead->nextNode;
        }
        mergedTail = mergedTail->nextNode;
    }

    mergedTail->nextNode = (firstHead) ? firstHead : secondHead;

    return mergedHead;
}

void displayLinkedList(Node* headNode) {
    while (headNode != NULL) {
        cout << headNode->elementData << " ";
        headNode = headNode->nextNode;
    }
}

int main() {
    Node* firstHead = createNode(10);
    firstHead->nextNode = createNode(20);
    firstHead->nextNode->nextNode = createNode(30);

    Node* secondHead = createNode(15);
    secondHead->nextNode = createNode(25);
    secondHead->nextNode->nextNode = createNode(35);

    Node* mergedHead = mergeSortedLists(firstHead, secondHead);
    displayLinkedList(mergedHead);

    return 0;
}
