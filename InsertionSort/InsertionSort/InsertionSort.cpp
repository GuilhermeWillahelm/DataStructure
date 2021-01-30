// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void insertionSort(int vet[], int tam);
void printVector(int vet[], int tam);

int main()
{
    setlocale(LC_ALL, "ptb");

    int vetor[5] = { 13, 23, 3, 8, 1 };
    int i;

    printVector(vetor, 5);

    //Insertion
    insertionSort(vetor, 5);

    cout << "\n\n";
    /*
    for (i = 0; i < 5; i++)
    {
        cout << vetor[i] << "\t";
    }
    */
    printVector(vetor, 5);

    cout << "\n\n";
}

void insertionSort(int vet[], int tam)
{
    int valueInsert, posInsert, i;

    // Percorrer todos os n�meros
    for (i = 1; i < tam; i++)
    {
        // Seleciona o valor a ser inserido
        valueInsert = vet[i];

        // Selecione a posição onde o número deve ser inserido
        posInsert = i;

        cout << "-------------------------\n";
        printVector(vet, 5);
        cout << "-------------------------\n";
        cout << "Valor: " << valueInsert << endl;
        cout << "Posição Inserção: " << posInsert << endl << endl;

        // verifique se o anterior não é maior que o valor a ser inserido
        while (posInsert > 0 && vet[posInsert - 1] > valueInsert)
        {
            vet[posInsert] = vet[posInsert - 1];
            posInsert--;
            printVector(vet, 5);
        }

        if (posInsert != i)
        {
            cout << "\tInsere: " << valueInsert << " na posição: " << posInsert << endl;
            vet[posInsert] = valueInsert;
        }
        
    }
}

void printVector(int vet[], int tam)
{
    int i;
    cout << vet[0];

    // Apos a troca
    for (i = 1; i < 5; i++)
    {
        cout << ", " << vet[i];
    }
    cout << endl;
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
