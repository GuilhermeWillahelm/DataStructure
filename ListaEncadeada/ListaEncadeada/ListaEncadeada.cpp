// ListaEncadeada.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;

//Nó ou Nodo
struct nodo
{
	int info;
	nodo* next;
};

nodo* insertBegin(nodo* ptr, int value);
nodo* insertEnd(nodo* ptr, int value);

void printNodo(nodo* ptr);
nodo* removeBegin(nodo* ptr);
nodo* removeEnd(nodo* ptr);

void replaceNodo(nodo* ptr, int position, int newValue);
int searchSequencial(nodo* ptr, int value);
void release(nodo* ptr);
int countNodo(nodo* ptr);

int main()
{
	setlocale(LC_ALL, "ptb");

	int c, op, value, pos, nvalue, resp;

	nodo* list = NULL;

	do
	{
		system("cls");
		system("color f1");

		cout << "< < < Alocação Dinamica < < <\n";

		cout << "\n 1- Insere na Frente da Lista ";
		cout << "\n 2- Insere no Fim da Lista \n";
		cout << "\n 3- Remove na Frente da Lista ";
		cout << "\n 4- Remove no Fim da Lista \n";
		cout << "\n 5- Exibe Lista ";
		cout << "\n 6- Substitui Nó na Lista ";
		cout << "\n 7- Conta os Nós da Lista ";
		cout << "\n 8- Busca na Lista \n";
		cout << "\n 9- Libera Lista ";
		cout << "\n 10- Sai ";

		cout << "\n\n Opção: ";
		cin >> op;

		system("cls");
		system("color 1f");

		switch (op)
		{
		case 1:
			cout << "\nInserir na frente: ";
			cin >> value;
			list = insertBegin(list, value);
			break;
		case 2:
			cout << "\nInsere no final: ";
			cin >> value;
			list = insertEnd(list, value);
			break;
		case 3:
			if (!list)
			{
				cout << "\nR\nNada a remover. Fila vazia\n";
			}
			else
			{
				list = removeBegin(list);
				cout << "\n\nPrimeiro elemento da Fila removido\n";
			}
			break;
		case 4:
			if (!list)
			{
				cout << "\nR\nNada a remover. Fila vazia\n";
			}
			else
			{
				list = removeEnd(list);
				cout << "\n\nÚltimo elemento da Fila removido\n";
			}
			break;
		case 5:
			if (!list)
			{
				cout << "\n\nFila vazia\n";
			}
			else
			{
				printNodo(list);
			}
			break;
		case 6:
			if (!list)
			{
				cout << "\nFila vazia\n";
			}
			else
			{
				cout << "\nQual a posição do No? ";
				cin >> pos;

				while (pos > countNodo(list))
				{
					cout << "\nPosição Inválida\n";
					cout << "\nQual a posição do Nó? ";
					cin >> pos;
				}

				cout << "\nQual o novo valor? ";
				cin >> nvalue;

				replaceNodo(list, pos, nvalue);
				cout << "\nValor substituído\n";
			}
			break;
		case 7:
			if (!list)
			{
				cout << "\n\nFila vazia\n";
			}
			else
			{
				cout << "\nTotal de nós: " << countNodo(list);
			}
			break;
		case 8:
			if (!list)
			{
				cout << "\n\nFila vazia\n";
			}
			else
			{
				cout << "\nQual o valor de procura? ";
				cin >> value;

				resp = searchSequencial(list, value);
				if (resp == 1)
				{
					cout << "\nValor encontrado na fila.\n";
				}
				else
				{
					cout << "\nValor não encontrado na lista\n";
				}
			}
			break;
		case 9:
			if (list)
			{
				cout << "\nTem elementos na Lista\n";
			}
			else
			{
				release(list);
				cout << "\nLiberando Memória";
			}
			break;
		case 10:
			cout << "Fechando Lista Encadeada\n";
			break;
		default:
			cout << "\nOpção Inválida\n";
			break;
		}
		cout << "\n\n";
		system("pause");

	} while (op != 10);

	return 0;
}

nodo* insertBegin(nodo* ptr, int value)
{
	nodo* temp = new nodo;
	if (!temp)
	{
		cout << "\nNão foi possível fazer a alocação de memória.\n";
		system("pause");
		exit(1);
	}
	temp->info = value;
	temp->next = ptr;
	return temp;
}

nodo* insertEnd(nodo* ptr, int value)
{
	nodo* novo, * aux;
	novo = new nodo;
	if (!novo)
	{
		cout << "\nNão foi possível fazer a alocação de memória.\n";
		system("pause");
		exit(1);
	}
	novo->info = value;
	novo->next = NULL;
	if (!ptr)
	{
		ptr = novo;
	}
	else
	{
		aux = ptr;
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = novo;
	}
	return ptr;
}

void printNodo(nodo* ptr)
{
	cout << "\nListando\n";
	while (ptr)
	{
		cout << "\n" << ptr->info;
		ptr = ptr->next;
	}
}

nodo* removeBegin(nodo* ptr)
{
	nodo* aux;
	aux = ptr;
	ptr = ptr->next;
	delete aux;
	return ptr;
}

nodo* removeEnd(nodo* ptr)
{
	nodo* aux, * last;
	if (!ptr->next)
	{
		delete ptr;
		ptr = NULL;
		return ptr;
	}
	else
	{
		aux = ptr;
		while (aux->next->next)
		{
			aux = aux->next;
		}
		last = aux->next;
		delete last;
		aux->next = NULL;
		return ptr;
	}
}

void replaceNodo(nodo* ptr, int position, int newValue)
{
	int countT = 1;
	while (countT != position)
	{
		ptr = ptr->next;
		countT++;
	}
	ptr->info = newValue;
}

int countNodo(nodo* ptr)
{
	int countT = 0;
	while (ptr)
	{
		countT++;
		ptr = ptr->next;
	}
	return countT;
}

int searchSequencial(nodo* ptr, int value)
{
	while (ptr)
	{
		if (ptr->info == value)
		{
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}

void release(nodo* ptr)
{
	delete ptr;
	ptr = 0;
}