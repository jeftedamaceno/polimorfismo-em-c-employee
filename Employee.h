// Figura 13.13: Employee.h
// Classe básica abstrata Employee.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // Classe string padrão C++
using std::string;

class Employee
{
public:
    Employee(const string &, const string &, const string &);

    void setFirstName(const string &); // Configura o nome
    string getFirstName() const; // Retorna o nome

    void setLastName(const string &); // Configura o sobrenome
    string getLastName() const; // Retorna o sobrenome

    void setSocialSecurityNumber(const string &); // Configura o número de segurança social (SSN)
    string getSocialSecurityNumber() const; // Retorna o SSN

    // A função virtual pura torna a classe Employee abstrata
    virtual double earnings() const = 0; // Virtual pura 
    virtual void print() const; // Virtual 

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
}; // Fim da classe Employee

#endif // EMPLOYEE_H
