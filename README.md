# Sistema de Gestão de Funcionários

Este programa foi desenvolvido para demonstrar o uso de classes derivadas e polimorfismo em C++. O programa gerencia três tipos de funcionários: **SalariedEmployee** (funcionários assalariados), **HourlyEmployee** (funcionários pagos por hora) e **CommissionEmployee** (funcionários comissionados). Ele permite adicionar múltiplos funcionários para cada tipo e calcular seus ganhos com base nas suas características.

## Funcionamento

O código define três classes derivadas de uma classe base `Employee`:
- **SalariedEmployee**: Representa um funcionário assalariado com um salário fixo.
- **HourlyEmployee**: Representa um funcionário que ganha por hora, com a possibilidade de incluir horas extras.
- **CommissionEmployee**: Representa um funcionário comissionado, com uma base de pagamento mais uma comissão sobre as vendas realizadas.

Essas classes implementam o polimorfismo, permitindo que o programa seja flexível para trabalhar com diferentes tipos de funcionários.

O programa cria instâncias de vários funcionários de cada tipo e calcula seus ganhos, exibindo os resultados.

## Funcionalidades

- Adição de múltiplos funcionários para cada tipo.
- Cálculo dos ganhos de cada funcionário com base no seu tipo de pagamento.
- Exibição do nome, ID e ganhos dos funcionários.

## Exemplo de Saída

Ao executar o programa, a saída será parecida com a seguinte:

Employee: John Doe Earnings: $1000.00

Employee: Alice Brown Earnings: $1200.00

Employee: Jane Smith Earnings: $950.00

Employee: Bob White Earnings: $880.00

Employee: Juan Sebastiam Earnings: $2400.00

Employee: Carlos Garcia Earnings: $3450.00
