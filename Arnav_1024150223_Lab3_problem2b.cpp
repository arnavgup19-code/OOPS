// Q2(b): Count and sum the nodes of a Linked List

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

void countAndSumNodes(Node* headNode) {
    int nodeCount = 0;
    int totalSum = 0;
    Node* currentNode = headNode;

    while (currentNode != NULL) {
        nodeCount++;
        totalSum += currentNode->elementData;
        currentNode = currentNode->nextNode;
    }

    cout << "Node count: " << nodeCount << ", Sum: " << totalSum;
}

int main() {
    Node* headNode = createNode(10);
    headNode->nextNode = createNode(20);
    headNode->nextNode->nextNode = createNode(30);

    countAndSumNodes(headNode);
    return 0;
}
