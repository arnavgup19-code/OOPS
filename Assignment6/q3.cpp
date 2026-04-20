#include <iostream>
using namespace std;

class Account{
public:
    const long accNo;
    long tid;
    string type;
    double balance;

    static long id;

    Account(long a):accNo(a){
        balance=0;
    }

    long depositAmount(const long to,const long from,const double amt){
        if(accNo==to){
            balance += amt;
            type="credit";
            tid = ++id;
            return tid;
        }
        return -1;
    }

    long creditAmount(const long to,const long from,const double amt){
        if(accNo==from){
            balance -= amt;
            type="debit";
            tid = ++id;
            return tid;
        }
        return -1;
    }

    void displayDetails() const{
        cout<<accNo<<" "<<balance<<" "<<type<<" "<<tid<<endl;
    }
};

long Account::id = 0;

int main(){
    Account a1(1),a2(2),a3(3),a4(4),a5(5);

    a1.depositAmount(1,2,500);
    a1.creditAmount(2,1,200);

    a1.displayDetails();
}