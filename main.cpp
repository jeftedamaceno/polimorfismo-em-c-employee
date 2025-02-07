#include <iostream>
#include <vector>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"

using namespace std;

int main() {
    // Criando instâncias das classes derivadas
    SalariedEmployee salaried("John", "Doe", "111-22-3333", 1000.00);
    HourlyEmployee hourly("Jane", "Smith", "444-55-6666", 20.00, 45); // 5 horas extras
    CommissionEmployee commission("Bob", "Johnson", "777-88-9999", 5000.00, 0.10);

    // Criando um vetor de ponteiros para Employee (polimorfismo)
    vector<Employee*> employees = { &salaried, &hourly, &commission };

    // Iterando sobre os funcionários e chamando métodos polimórficos
    for (Employee* employee : employees) {
        employee->print();
        cout << "\nEarnings: $" << employee->earnings() << "\n\n";
    }

    return 0;
}
