/*

Reproduza todas as formas de Entrada, Processamento e Saída (como visto em aula) para o problema abaixo. 
Escreva um algoritmo que calcule a média aritmética simples de 3 notas de um aluno. 
Na parte do processamento desenvolva uma função responsável por efetuar o cálculo da média e invoque essa função na main.

*/

#include <stdio.h>

double AverageCalculator (const double grade1, const double grade2, const double grade3);

int main()
{
    freopen("Input.in", "r", stdin);
    freopen("Output.out", "w", stdout);

    double grade1 = 0;
    double grade2 = 0;
    double grade3 = 0;

    // Input

    scanf("%lf %lf %lf", &grade1, &grade2, &grade3);

    // Processing

    const double Average = AverageCalculator (grade1, grade2, grade3);

    // Output

    printf("%.2lf", Average);
      
    return 0;
}

double AverageCalculator (const double grade1, const double grade2, const double grade3)
{
    const double Average = (grade1 + grade2 + grade3) / 3;

    return Average;
}
