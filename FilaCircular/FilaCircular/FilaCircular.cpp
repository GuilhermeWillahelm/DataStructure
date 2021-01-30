// FilaCircular.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>

#define MAX 5

using namespace std;

int comeco = 0;
int tamanho = 0;
int queue[MAX];

void enqueue(int);
void dequeue(void);

int main()
{
	setlocale(LC_ALL, "ptb");

	int i;

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);

	for (i = 0; i < tamanho; i++)
	{
		cout << queue[i] << endl;
	}

	dequeue();

	cout << "\n\n";

	for (i = 0; i < tamanho; i++)
	{
		cout << queue[i] << endl;
	}
	enqueue(60);

	cout << "\n\n";

	for (i = 0; i < tamanho; i++)
	{
		cout << queue[i] << endl;
	}

	system("pause");
	return 0;
}

void enqueue(int element)
{
	int pos;

	if (tamanho == MAX)
	{
		cout << "\nFila cheia\n";
	}
	else
	{
		pos = (comeco + tamanho) % MAX;

		queue[pos] = element;

		tamanho++;
	}
}

void dequeue(void)
{
	if (tamanho == 0)
	{
		cout << "\mAten��o! \nFila vazia\n";
	}
	else
	{
		comeco++;
		tamanho--;
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
