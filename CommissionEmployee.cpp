// Figura 13.20: CommissionEmployee.cpp
// Definições de função-membro da classe CommissionEmployee.

#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // Definição da classe CommissionEmployee

// Construtor
CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
    : Employee(first, last, ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
} // Fim do construtor CommissionEmployee

// Configura a taxa de comissão
void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate = ((rate > 0.0 && rate < 1.0) ? rate : 0.0);
} // Fim da função setCommissionRate

// Retorna a taxa de comissão
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // Fim da função getCommissionRate

// Configura a quantidade de vendas brutas
void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = ((sales < 0.0) ? 0.0 : sales);
} // Fim da função setGrossSales

// Retorna a quantidade de vendas brutas
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} // Fim da função getGrossSales

// Calcula os rendimentos;
// Sobrescreve a função virtual pura earnings em Employee
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
} // Fim da função earnings

// Imprime informações do CommissionEmployee
void CommissionEmployee::print() const
{
    cout << "Empregado comissionado: ";
    Employee::print(); // Reutilização de código
    cout << "\nVendas brutas: " << getGrossSales()
         << "; Taxa de comissão: " << getCommissionRate();
} // Fim da função print
