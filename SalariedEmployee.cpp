// Figura 13.16: SalariedEmployee.cpp
// Definições das funções-membro da classe SalariedEmployee.

#include <iostream>
using std::cout;

#include "SalariedEmployee.h" // Definição da classe SalariedEmployee

// Construtor
SalariedEmployee::SalariedEmployee(const string &first, const string &last, const string &ssn, double salary)
    : Employee(first, last, ssn)
{
    setWeeklySalary(salary);
} // Fim do construtor SalariedEmployee

// Configura o salário semanal
void SalariedEmployee::setWeeklySalary(double salary)
{
    weeklySalary = (salary < 0.0) ? 0.0 : salary;
} // Fim da função setWeeklySalary

// Retorna o salário semanal
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
} // Fim da função getWeeklySalary

// Calcula os rendimentos
// Sobrescreve a função virtual pura earnings em Employee
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
} // Fim da função earnings

// Imprime as informações de SalariedEmployee
void SalariedEmployee::print() const
{
    cout << "Empregado assalariado: ";
    Employee::print(); // Reutiliza a função print da classe básica abstrata
    cout << "\nSalário semanal: " << getWeeklySalary();
} // Fim da função print
