// Funcao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void printMSG();
float calcImposto();
int sumValue(int number1, int number2);
void alteraDado(int& v1);

int main()
{
    setlocale(LC_ALL, "ptb");

    float value;
    int valueSum, vlr1;

    vlr1 = 20;

    //printMSG();
    //value = calcImposto();
    //valueSum = sumValue(10, 33);
    alteraDado(vlr1);

    //cout << "O valor do imposto �: " << value << endl << endl;
    //cout << "O valor da soma �: " << valueSum << endl << endl;
    cout << "Valor alterado: " << vlr1 << "\n\n";

    system("pause");
}

//fun��o sem retorno e sem par�metros
void printMSG() 
{
    cout << "Hello Guys\n\n";
}

//Fun��o com retorno
float calcImposto() 
{
    float sal;
    float vlrImposto;

    sal = 2000;

    cout << "Seu sal�rio � de: " << sal << "\n";

    vlrImposto = (sal * 10.2) / 100;

    return vlrImposto;
}

//Fun��o com par�metros e retorno;
int sumValue(int number1, int number2) 
{
    int total;

    total = number1 + number2;

    return total;
}

//Fun��o com par�metros por refer�ncia
void alteraDado(int& v1) 
{
    v1 = 100;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
