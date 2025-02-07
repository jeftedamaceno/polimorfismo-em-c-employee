// Figura 13.14: Employee.cpp
// Definições das funções-membro da classe básica abstrata Employee.
// Nota: Nenhuma definição contém funções virtuais puras.

#include <iostream>
using std::cout;

#include "Employee.h" // Definição da classe Employee

// Construtor
Employee::Employee(const string &first, const string &last, const string &ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn)
{
    // Corpo vazio
} // Fim do construtor Employee

// Configura o nome
void Employee::setFirstName(const string &first)
{
    firstName = first;
} // Fim da função setFirstName

// Retorna o nome
string Employee::getFirstName() const
{
    return firstName;
} // Fim da função getFirstName

// Configura o sobrenome
void Employee::setLastName(const string &last)
{
    lastName = last;
} // Fim da função setLastName

// Retorna o sobrenome
string Employee::getLastName() const
{
    return lastName;
} // Fim da função getLastName

// Configura o número de segurança social (SSN)
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn; // Deve validar
} // Fim da função setSocialSecurityNumber

// Retorna o SSN
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // Fim da função getSocialSecurityNumber

// Imprime as informações de Employee (virtual, mas não virtual pura)
void Employee::print() const
{
    cout << getFirstName() << " " << getLastName()
         << "\nNúmero de segurança social: " << getSocialSecurityNumber();
} // Fim da função print
