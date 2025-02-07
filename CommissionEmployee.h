// Figura 13.19: CommissionEmployee.h
// Classe CommissionEmployee derivada de Employee.

#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h" // Definição da classe Employee

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setCommissionRate(double); // Configura a taxa de comissão
    double getCommissionRate() const; // Retorna a taxa de comissão

    void setGrossSales(double); // Configura a quantidade de vendas brutas
    double getGrossSales() const; // Retorna a quantidade de vendas brutas

    // Palavra-chave virtual indica a intenção de sobrescrever
    virtual double earnings() const; // Calcula os rendimentos 
    virtual void print() const; // Imprime o objeto CommissionEmployee 

private:
    double grossSales; // Vendas brutas semanais
    double commissionRate; // Porcentagem da comissão
}; // Fim da classe CommissionEmployee

#endif // COMMISSION_H
