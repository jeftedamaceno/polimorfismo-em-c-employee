// Figura 13.15: SalariedEmployee.h
// Classe SalariedEmployee derivada de Employee.

#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h" // Definição da classe Employee

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const string &, const string &, const string &, double = 0.0);

    void setWeeklySalary(double); // Configura o salário semanal
    double getWeeklySalary() const; // Retorna o salário semanal

    // Palavra-chave virtual indica a intenção de sobrescrever
    virtual double earnings() const; // Calcula os rendimentos 
    virtual void print() const; // Imprime o objeto SalariedEmployee 

private:
    double weeklySalary; // Salário por semana
}; // Fim da classe SalariedEmployee

#endif // SALARIED_H
