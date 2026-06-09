#include <iostream>
using namespace std;

struct employee {
    int employee_num;
    string employee_name;
    double employee_salary;
};

void printEmployee (employee e) {
    cout << "Employee num : " << e.employee_num << endl;
    cout << "Employee name : " << e.employee_name << endl;
    cout << "Employee salary : " << e.employee_salary << endl;
}

int main() {
    employee e1{1, "Jerisha Rand", 10000};
    employee e2{2, "Julius Rohan" , 20000};
    printEmployee(e1);
    printEmployee(e2);
}
