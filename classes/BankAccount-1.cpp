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
        ~BankAccount();
        void displayAccount();
        void changeName(string);
        void depositAccount(double amount);
        void withdrawAccount(double amount);
};

BankAccount::BankAccount (string name, BankAccountType type, double amount) {
    this -> name = name;
    this -> type= type;
    this->amount = new double;
    *(this ->amount) = amount;
}

BankAccount::BankAccount(BankAccount&x) {
    this->name = x.name;
    this->type = x.type;
    this->amount = new double;
    *(this->amount) = *(x.amount);
}

BankAccount::~BankAccount() {
    delete this->amount;
}

void BankAccount::displayAccount(){
    cout << "Name: " << this ->name << endl;
    if (type == BankAccountType::SavingsAccount){
        cout << "Savings Account" << endl;
    } else {
        cout << "Current Account" << endl;
    }
    cout << "Amount: " << *(this ->amount) << endl;
}

void BankAccount::changeName(string name) {
    this->name = name;
}

void BankAccount::depositAccount(double amount){
    *(this-> amount) += amount;
}

void BankAccount::withdrawAccount(double amount){
    *(this -> amount) -= amount;
}

int main() {
    BankAccount b1("John", BankAccountType::CurrentAccount, 50000);
    BankAccount b2 = b1;   // BankAccount b2(b1)
    b2.changeName("George");
    
    b1.displayAccount();
    b2.displayAccount();
    
    b1.depositAccount(5000);
    
    cout << "--- After deposit ---" << endl;
    
    b1.displayAccount();
    b2.displayAccount();
    
}
