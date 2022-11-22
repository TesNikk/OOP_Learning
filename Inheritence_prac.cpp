#include<iostream>
using namespace std;
class Employee {
private:
	string name;
	int em_id;
public:
	Employee(int em_id,string name) {
		this->name = name;
		this->em_id = em_id;
	}
	string get_name() {
		return name;
	}
	int get_em_id() {
		return em_id;
	}
};
class FullTime_Employee:public Employee {
private:
	int salary;
public:
	FullTime_Employee(int e,string n,int salary):Employee(e,n) {
		this->salary=salary;
	}
	int get_salary() {
		return salary;
	}
};
class PartTime_Employee :public Employee {
private:
	int wage;
public:
	PartTime_Employee(int e, string n, int wage) :Employee(e, n) {
		this->wage = wage;
	}
	int get_wage() {
		return wage;
	}
};
int main() {
	FullTime_Employee E1(1, "Nahid", 50000);
	PartTime_Employee E2(2, "Niyaz", 1000);
	cout <<E1.get_em_id() << " Salary of " << E1.get_name() << " is " << E1.get_salary() << endl;
	cout << E2.get_em_id() << " Salary of " << E2.get_name() << " is " << E2.get_wage() << endl;
	return 0;
}