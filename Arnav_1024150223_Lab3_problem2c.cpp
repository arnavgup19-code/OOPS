// Q2(c): Search for a key element in a Linked List

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

bool searchKeyInList(Node* headNode, int searchKey) {
    Node* currentNode = headNode;
    while (currentNode != NULL) {
        if (currentNode->elementData == searchKey) {
            cout << "Key found";
            return true;
        }
        currentNode = currentNode->nextNode;
    }
    cout << "Key not found";
    return false;
}

int main() {
    Node* headNode = createNode(10);
    headNode->nextNode = createNode(20);
    headNode->nextNode->nextNode = createNode(30);

    searchKeyInList(headNode, 20);
    return 0;
}
