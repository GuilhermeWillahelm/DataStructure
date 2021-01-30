// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void bubbleSort(int vet[], int tam);
void printVector(int vet[], int tam);

int main()
{
    setlocale(LC_ALL, "ptb");

    int vetor[5] = { 13, 23, 3, 8, 1 };
    int i;

    // Antes da troca;
    printVector(vetor, 5);
    cout << "\n\n";


    //==================================//
    /* SelectionSort */
    bubbleSort(vetor, 5);

    cout << "\n\n";

    printVector(vetor, 5);
    cout << "\n\n";
}

void bubbleSort(int vet[], int tam)
{
    int temp, i, j;

    bool continuarTroca = false;

    // Percorrer todos os números
    for (i = 0; i < tam -1; i++)
    {
        continuarTroca = false;

        //loop through numbers falling a head
        for (j = 0; j < tam - 1 -i; j++)
        {
            cout << "------------------------\n";
            printVector(vet, 5);
            cout << "Comparando: " << vet[j] << " com :" << vet[j + 1] << endl;

            // Troca o número mais alto
            if (vet[j] > vet[j + 1])
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;

                continuarTroca = true;
            }

            printVector(vet, 5);
            cout << "\n\n";
        }

        // Se estiver tudo ordenado
        if (!continuarTroca)
        {
            break;
        }
    }
}

void printVector(int vet[], int tam)
{
    int i;
    cout << vet[0];

    // Ap�s a troca
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
