// Q3(a): Display all restaurant orders

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct OrderNode {
    int orderId;
    char customerName[50];
    float orderPrice;
    struct OrderNode* nextOrder;
};

OrderNode* createOrderNode(int orderId, const char* name, float price) {
    OrderNode* newOrder = (OrderNode*)malloc(sizeof(OrderNode));
    newOrder->orderId = orderId;
    strcpy(newOrder->customerName, name);
    newOrder->orderPrice = price;
    newOrder->nextOrder = NULL;
    return newOrder;
}

void displayAllOrders(OrderNode* headOrder) {
    OrderNode* currentOrder = headOrder;
    while (currentOrder != NULL) {
        cout << currentOrder->orderId << " " << currentOrder->customerName << " " << currentOrder->orderPrice << endl;
        currentOrder = currentOrder->nextOrder;
    }
}

int main() {
    OrderNode* restaurantOrders = createOrderNode(101,"Alice",250);
    restaurantOrders->nextOrder = createOrderNode(102,"Bob",300);

    displayAllOrders(restaurantOrders);
    return 0;
}
