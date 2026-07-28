#include <iostream>
#include <vector>
#include <string>

struct dob{
	int year;
	int month;
	int day;
};

dob create_dob(int a, int b, int c){
	dob bd;
	bd.year = a;
	bd.month = b;
	bd.day = c;
	return bd;
}
class BankAccount;

std::vector<BankAccount> Accounts;

class BankAccount{
	public:
		int bank_account_no;
		std::string name;
		std::string address;
		dob birthday;
		int amount;
		BankAccount(int bcn, std::string nm, std::string addr, int y, int m, int d, int amt){
			bank_account_no = bcn;
			name = nm;
			address = addr;
			birthday = create_dob(y, m, d);
			amount = amt;
		}
};

void listAllAccounts(const std::vector<BankAccount>& vec){
	for (const BankAccount& i:vec){
		std::cout << "Bank Account no.: " << i.bank_account_no << std::endl;
		std::cout << "Name : " << i.name << std::endl;
		std::cout << "Address : " << i.address << std::endl;
		std::cout << "Amount : " << i.amount << std::endl;
	}
}

void depositAccount(std::vector<BankAccount>& vec, int accno, int amnt){
	for (BankAccount& i:vec){
		if (i.bank_account_no == accno) {
			i.amount += amnt;
			break;
		} else {
			continue;
		}
	}
}

void withdrawAccount(std::vector<BankAccount>& vec, int accno, int amnt){
	for (BankAccount& i:vec){
		if (i.bank_account_no == accno) {
			i.amount -= amnt;
			break;
		} else {
			continue;
		}
	}
}

void deleteAccount(std::vector<BankAccount>& vec, int accno){
	for (BankAccount& i:vec){
		if (i.bank_account_no == accno){
			i.bank_account_no = 0;
			i.name = "";
			i.address = "";
			i.birthday = create_dob(0,0,0);
			i.amount = 0;
      break;
		} else {
			continue;
		}
	}
}

int main(){
	BankAccount Acc1{123, "John", "25, North raja street, Tuticorin", 2008,5,6, 12000};
	BankAccount Acc2{456, "Bob", "16, Thirumalai nagar, Chennai", 2006,9,5, 13000};
	Accounts.push_back(Acc1);
	Accounts.push_back(Acc2);
	listAllAccounts(Accounts);
	depositAccount(Accounts, 123, 1000);
	withdrawAccount(Accounts, 456, 1000);
	listAllAccounts(Accounts);
	return 0;
}
