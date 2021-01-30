// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void selectionSort(int vet[], int tam);
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
    selectionSort(vetor, 5);

    cout << "\n\n";

    printVector(vetor, 5);
    cout << "\n\n";
}


void selectionSort(int vet[], int tam) 
{
    int indexMin, i, j;

    // Percorrer todos os números
    for (i = 0; i < tam - 1; i++)
    {
        // Define o elemento atual com o menor 
        indexMin = i;

        //Encontra o menor valr após "i + 1"
        for (j = i + 1; j < tam; j++)
        {
            if (vet[j] < vet[indexMin])
            {
                indexMin = j;
            }
        }

        cout << "Troca: " << vet[i] << " <= " << vet[indexMin] << endl;

        if (indexMin != i)
        {
            //troca os números
            int temp = vet[indexMin];
            vet[indexMin] = vet[i];
            vet[i] = temp;
        }
    }
}

void printVector(int vet[], int tam) 
{
    int i;
    cout << vet[0];

    // Após a troca
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
