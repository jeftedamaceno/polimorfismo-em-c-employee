#include <iostream>
#include <vector>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"

using namespace std;

int main() {
    // Criando instâncias de vários funcionários para cada tipo
    SalariedEmployee salaried1("John", "Doe", "111-22-3333", 1000.00);
    SalariedEmployee salaried2("Alice", "Brown", "222-33-4444", 1200.00);

    HourlyEmployee hourly1("Jane", "Smith", "444-55-6666", 20.00, 45); // 5 horas extras
    HourlyEmployee hourly2("Bob", "White", "555-66-7777", 22.00, 40); // Sem horas extras

    CommissionEmployee commission1("Juan", "Sebastiam", "123456789", 2000.00, 0.20);
    CommissionEmployee commission2("Carlos", "Garcia", "987654321", 3000.00, 0.15);

    // Criando vetores para cada tipo de funcionário
    vector<SalariedEmployee*> salariedEmployees = { &salaried1, &salaried2 };
    vector<HourlyEmployee*> hourlyEmployees = { &hourly1, &hourly2 };
    vector<CommissionEmployee*> commissionEmployees = { &commission1, &commission2 };

    // Criando um vetor de ponteiros para Employee (polimorfismo)
    vector<Employee*> employees;

    // Adicionando todos os funcionários aos funcionários gerais
    for (auto& employee : salariedEmployees) {
        employees.push_back(employee);
    }

    for (auto& employee : hourlyEmployees) {
        employees.push_back(employee);
    }

    for (auto& employee : commissionEmployees) {
        employees.push_back(employee);
    }

    // Iterando sobre os funcionários e chamando métodos polimórficos
    for (Employee* employee : employees) {
        employee->print();
        cout << "\nEarnings: $" << employee->earnings() << "\n\n";
    }

    return 0;
}
