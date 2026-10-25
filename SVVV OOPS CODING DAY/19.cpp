#include <iostream>
using namespace std;
class Payment {
public:
    virtual void process() {
        cout << "Processing payment..." << endl;
    }

    virtual ~Payment() {} 
};
class CreditCard : public Payment {
private:
    string cardNumber;
public:
    CreditCard(string number) : cardNumber(number) {}

    void process() override {
        cout << "Processing credit card payment using card number: " << cardNumber << endl;
    }
};
class Cash : public Payment {
private:
    float amount;
public:
    Cash(float amt) : amount(amt) {}

    void process() override {
        cout << "Processing cash payment of $" << amount << endl;
    }
};

int main() {
    Payment* p1 = new CreditCard("1234-5678-9012-3456");
    Payment* p2 = new Cash(100.0f);

    cout << "Payment Methods:\n";
    p1->process();
    p2->process();

    delete p1;
    delete p2;

    return 0;
}
