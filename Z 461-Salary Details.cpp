#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Employee{
    char name[55];
    int salary;
};

bool compare(Employee a, Employee b) {
    if(a.salary == b.salary) {
        return strcmp(a.name, b.name) < 0;
    }
    return a.salary < b.salary;
}

void sortEmployees(Employee *employees, int n) {
    sort(employees, employees + n, compare);
}

int main() {
    int n;
    cin >> n;

    Employee employees[n];
    for(int i = 0; i < n; i++) {
        cin >> employees[i].name >> employees[i].salary;
    }

    sortEmployees(employees, n);

    for(int i = 0; i < n; i++) {
        cout << employees[i].name << " " << employees[i].salary << endl;
    }

    return 0;
}
