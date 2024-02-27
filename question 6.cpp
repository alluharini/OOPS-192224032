#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(string n,int i,double s):name(n),id(i),salary(s) {}
    string getName() const {
        return name;
    }
    void setName(string n) {
        name=n;
    }
    int getId() const {
        return id;
    }
    void setId(int i) {
        id = i;
    }
    double getSalary() const {
        return salary;
    }
    void setSalary(double s) {
        salary = s;
    }
};
class Manager:public Employee {
private:
    string speciality;
    int hours;
public:
    Manager(string n,int i,double s,string spec,int h)
        : Employee(n,i,s), speciality(spec), hours(h) {}
    string getSpeciality() const {
        return speciality;
    }
    void setSpeciality(string spec) {
        speciality = spec;
    }
    int getHours() const {
        return hours;
    }
    void setHours(int h) {
        hours = h;
    }
};

class Engineer : public Employee {
public:
    Engineer(string n, int i, double s) : Employee(n, i, s) {}
};

int main() {
    Manager manager("harini",4032,500000,"IT",15);
    Engineer engineer("pome",906, 60000);

    cout <<"Manager Name:"<< manager.getName() << endl;
    cout <<"Manager ID:"<< manager.getId() << endl;
    cout <<"Manager Salary:" << manager.getSalary() << endl;
    cout <<"Manager Speciality:"<< manager.getSpeciality() << endl;
    cout <<"Manager Hours:"<< manager.getHours() << endl;

    cout <<"\nEngineer Name:"<< engineer.getName() << endl;
    cout <<"Engineer ID:"<< engineer.getId() << endl;
    cout <<"Engineer Salary:"<< engineer.getSalary() << endl;

    return 0;
}

