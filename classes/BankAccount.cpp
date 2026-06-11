#include <iostream>
using namespace std;

enum class BankAccountType {SavingsAccount, CurrentAccount};

class BankAccount{
    
    private:
        string name;
        BankAccountType type;
        double amount;
    public:
        BankAccount(string name, BankAccountType type, double amount);
        void displayAccount();
        void depositAccount(double amount);
        void withdrawAccount(double amount);
};

BankAccount::BankAccount (string name, BankAccountType type, double amount) {
    this -> name = name;
    this -> type= type;
    this ->amount = amount;
}

void BankAccount::displayAccount(){
    cout << "Name: " << this ->name << endl;
    if (type == BankAccountType::SavingsAccount){
        cout << "Savings Account" << endl;
    } else {
        cout << "Current Account" << endl;
    }
    cout << "Amount: " << this ->amount << endl;
}

void BankAccount::depositAccount(double amount){
    this-> amount += amount;
}

void BankAccount::withdrawAccount(double amount){
    this -> amount -= amount;
}

int main() {
    BankAccount b1("John", BankAccountType::CurrentAccount, 50000);
    BankAccount b2("George", BankAccountType::SavingsAccount, 40000);
    b1.displayAccount();
    b2.displayAccount();
    
    b1.depositAccount(2000);
    b2.withdrawAccount(2000);
    
    b1.displayAccount();
    b2.displayAccount();
    
}
