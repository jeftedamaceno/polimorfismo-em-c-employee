// Figura 13.17: HourlyEmployee.h
// Definição da classe HourlyEmployee.

#ifndef HOURLY_H
#define HOURLY_H

#include "Employee.h" // Definição da classe Employee

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setWage(double); // Configura o salário por hora
    double getWage() const; // Retorna o salário por hora

    void setHours(double); // Configura as horas trabalhadas
    double getHours() const; // Retorna as horas trabalhadas

    // Palavra-chave virtual indica a intenção de sobrescrever
    virtual double earnings() const; // Calcula os rendimentos 
    virtual void print() const; // Imprime o objeto HourlyEmployee 

private:
    double wage; // Salário por hora
    double hours; // Horas trabalhadas durante a semana
}; // Fim da classe HourlyEmployee

#endif // HOURLY_H
