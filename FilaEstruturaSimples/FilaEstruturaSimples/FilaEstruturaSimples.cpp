// FilaEstruturaSimples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>

#define TAM 5

using namespace std;

//variavel global
struct queue
{
    float f[TAM];
    int inicio, fim;
};

void enqueue(queue& fill);
void dequeue(queue& fill);
void firstElement(queue& fill);
void queueSituation(queue& fill);

int main()
{
    setlocale(LC_ALL, "ptb");

    char resp[10]; int op;
    queue fila;

    //Inicialização da fila
    fila.inicio = 0;
    fila.fim = -1;

    do
    {
        system("cls");
        system("color 2f");

        cout << "\nFILA( FIFO - First In - First Out)\n\n";
        cout << "\n1 - Inserir um valor na fila";
        cout << "\n2 - Remover um valor da fila";
        cout << "\n3 - Mostrar o elemento do início";
        cout << "\n4 - Mostrar situação da fila";
        cout << "\n5 - Sair";

        cout << "\n\nOpção: ";
        cin >> resp;

        op = atoi(resp);

        system("cls");

        switch (op)
        {
        case 1:
            enqueue(fila);
            break;
        case 2: 
            dequeue(fila);
            break;
        case 3:
            firstElement(fila);
            break;
        case 4:
            queueSituation(fila);
            break;
        case 5:
            cout << "\nPrograma básico da Fila.\n";
            break;
        default:
            cout << "\nOpção inválido.";
            break;
        }
        cout << "\n\n";
        system("pause");

    } while (op != 5);
}

void enqueue(queue & fil)  
{
    float valor;
    if (fil.fim == TAM - 1)
    {
        cout << "\nAtenção! \nFila cheia\n";
    }
    else
    {
        cout << "Digite o valor a ser enfileiado: ";
        cin >> valor;
        fil.fim++;
        fil.f[fil.fim] = valor;
    }
}

void dequeue(queue & fil) 
{
    if (fil.inicio > fil.fim)
    {
        cout << "\mAtenção! \nFila vazia\n";
    }
    else
    {
        cout << "\nValor Removido: " << fil.f[fil.inicio];  //exibe o valor "removido"0
        fil.inicio++; //Atualiza inicio da fila
    }
}

void firstElement(queue & fil) 
{
    if (fil.inicio > fil.fim)
    {
        cout << "\nAtenção! \nFazia vazia\n";
    }
    else
    {
        cout << "\nElemento do início da fila: " << fil.f[fil.inicio];
    }
}

void queueSituation(queue & fil) 
{
    if (fil.inicio > fil.fim)
    {
        cout << "\nAtenção! \nFila vazia\n";
    }
    else
    {
        cout << "\nTotal de elementos da fila: " << fil.fim - fil.inicio + 1 << "\n";
        cout << "\n\nEspaço disponível na fila: " << TAM - (fil.fim + 1) << "\n";
        cout << "\n\nPosição do primeiro elemento da fila: " << fil.inicio << "\n";
        cout << "\n\nPosição do último elemento da fila: " << fil.fim << "\n";

        cout << "\nValor\tPosição do Vetor\n";

        for (int x = fil.inicio; x <= fil.fim ; x++)
        {
            cout << "\n" << fil.f[x] << "\t" << x;
        }
    }
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
