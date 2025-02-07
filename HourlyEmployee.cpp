// Figura 13.18: HourlyEmployee.cpp
// Definições das funções-membro da classe HourlyEmployee.

#include <iostream>
using std::cout;

#include "HourlyEmployee.h" // Definição da classe HourlyEmployee

// Construtor
HourlyEmployee::HourlyEmployee(const string &first, const string &last, 
                               const string &ssn, double hourlyWage, double hoursWorked)
    : Employee(first, last, ssn)
{
    setWage(hourlyWage); // Valida a remuneração por hora
    setHours(hoursWorked); // Valida as horas trabalhadas
} // Fim do construtor HourlyEmployee

// Configura a remuneração por hora
void HourlyEmployee::setWage(double hourlyWage)
{
    wage = (hourlyWage < 0.0 ? 0.0 : hourlyWage);
} // Fim da função setWage

// Retorna a remuneração por hora
double HourlyEmployee::getWage() const
{
    return wage;
} // Fim da função getWage

// Configura as horas trabalhadas
void HourlyEmployee::setHours(double hoursWorked)
{
    hours = ((hoursWorked >= 0.0 && hoursWorked <= 168.0) ? hoursWorked : 0.0);
} // Fim da função setHours

// Retorna as horas trabalhadas
double HourlyEmployee::getHours() const
{
    return hours;
} // Fim da função getHours

// Calcula os rendimentos
// Sobrescreve a função virtual pura earnings em Employee
double HourlyEmployee::earnings() const
{
    if (getHours() <= 40) // Nenhuma hora extra
        return getWage() * getHours();
    else
        return 40 * getWage() + ((getHours() - 40) * getWage() * 1.5);
} // Fim da função earnings

// Imprime as informações do HourlyEmployee
void HourlyEmployee::print() const
{
    cout << "Empregado horista: ";
    Employee::print(); // Reutilização de código
    cout << "\nSalário por hora: " << getWage()
         << "; Horas trabalhadas: " << getHours();
} // Fim da função print

