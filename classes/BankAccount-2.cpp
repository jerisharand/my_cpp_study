#include <iostream>
using namespace std;

enum class BankAccountType {SavingsAccount, CurrentAccount};

class BankAccount{
    private:
        string name;
        BankAccountType type;
        double *amount;
    public:
        BankAccount(string name, BankAccountType type, double amount);
        BankAccount(BankAccount&);
        BankAccount(BankAccount&&);
        BankAccount& operator=(BankAccount&&);
        BankAccount() = default;
        ~BankAccount();
        void displayAccount();
        void changeName(string name);
        void depositAccount(double);
        void withdrawAccount(double);
};

BankAccount::BankAccount(string name, BankAccountType type, double amount) {
    cout << "Constructor called" << endl;
    this->name = name;
    this->type = type;
    this->amount = new double;
    *(this->amount) = amount;
}

BankAccount::BankAccount(BankAccount& x) {
    cout << "Copy constructor called" << endl;
    this->name = x.name;
    this->type = x.type;
    this->amount = new double;
    *(this->amount) = *(x.amount);
}

BankAccount::BankAccount(BankAccount&& x) {
    cout << "Move constructor called" << endl;
    this->name = x.name;
    this->type = x.type;
    this->amount = x.amount;
    x.amount = nullptr;
}

BankAccount& BankAccount::operator=(BankAccount&& x) {
    cout << "Move assignment" << endl;
    this->name = x.name;
    this->type = x.type;
    this->amount = x.amount;
    x.amount = nullptr;
    return *this;
}

BankAccount::~BankAccount() {
    cout << "Destructor called" << endl;
    delete this->amount;
}

void BankAccount::displayAccount (){
    cout << "Name: " << this->name << endl;
    if (type == BankAccountType::SavingsAccount) {
        cout << "Savings Account" << endl;
    } else {
        cout << "Current Account" << endl;
    }
}

void BankAccount::changeName(string name) {
    this->name = name;
}

void BankAccount::depositAccount(double amount) {
    *(this->amount) += amount;
}

void BankAccount::withdrawAccount(double amount) {
    *(this->amount) -= amount;
}

BankAccount make_bank_account(string name, BankAccountType actype, double amount) {
    BankAccount b(name, actype, amount);
    return b;
}

int main() {
    BankAccount b1 = make_bank_account("John", BankAccountType::CurrentAccount, 50000);
    b1.displayAccount();
    return 0;
}
