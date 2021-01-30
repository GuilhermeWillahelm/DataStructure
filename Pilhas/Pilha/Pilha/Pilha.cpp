// Pilha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>

#define TAM 5

using namespace std;

void empilha(int p[], int& t, int v);
int desempilha(int p[], int& t, int& v);
void acessoTopo(int p[], int& t);
void situacaoPilha(int p[], int& t);

int main()
{
    setlocale(LC_ALL, "ptb");

    int op, val, topo = -1, pilha[TAM], resp
        ;

    do
    {
        system("cls");
        system("color f0");

        cout << "\nPilha( LIFO -  Last iIn - First Out )\n\n";
        cout << "\n1- Inserir um valor na pilha";
        cout << "\n2- Remover um valor da pilha";
        cout << "\n3- Mostrar o elemento do topo da pilha";
        cout << "\n4- Mostrar situação da pilha";
        cout << "\n5- Sair";

        cout << "\n\nEcolha uma opção: ";
        cin >> op;

        system("cls");

        switch (op)
        {
        case 1:
            cout << "Digite o valor a ser empilhado: ";
            cin >> val;
            empilha(pilha, topo, val);
            break;

        case 2: 
            resp = desempilha(pilha, topo, val);
            if (resp == 0)
            {
                cout << "\nAtenção. \nPilha vazia, \n";
            }
            else
            {
                cout << "\nValor removido: " << val;
            }
            break;

        case 3: 
            acessoTopo(pilha, topo);
            break;

        case 4:
            situacaoPilha(pilha, topo);
            break;
        case 5:
            cout << "\nPrograma básico da Pilha.\n";
            break;
        default:
            cout << "\nOpção Inválida.\n";
            break;
        }

        cout << "\n\n";
        system("pause");

    } while (op != 5);
}

/* Insere */
void empilha(int p[], int& t, int v) 
{
    if (t == TAM - 1)
    {
        cout << "\nAtenção. \nPilha Cheia\n";
    }
    else
    {
        t++; // atualiza o topo
        p[t] = v; // pilha recebe valor
    }
}

/* Remove */
int desempilha(int p[], int& t, int& v) 
{
    if (t == -1)
    {
        return 0;
    }
    else
    {
        v = p[t]; // guarda o valor do topo
        t--; //atualiza o topo
        return 1;
    }
}

/* Mostra o topo */
void acessoTopo(int p[], int& t) 
{
    if (t == -1)
    {
        cout << "\nAtenção. \nPilha Vazia\n";
    }
    else
    {
        cout << "\nElemento do topo da Pilha: " << p[t];
    }
}

/* Motra situação da Pilha */
void situacaoPilha(int p[], int& t) 
{
    if (t == - 1)
    {
        cout << "\Atenção. \nPilha Cheia\n";
    }
    else if (t == TAM - 1)
    {
        cout << "\Atenção. \nPilha Cheia\n";
    }
    else
    {
        cout << "\nTotal de elementos na pilha: " << t + 1 << "\n";
        cout << "\n\nEspaço disponível na pilha: " << TAM - (t + 1) << "\n";
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
