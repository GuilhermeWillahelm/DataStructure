// EstruturaHeterogenia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void printCoordinatesArray();

struct Coordenates 
{
    int x, y, z;
};

void printDatas(Coordenates point);

int main()
{
    setlocale(LC_ALL, "ptb");

    //printCoordinatesArray();

    Coordenates pontoA, pontoB;

    pontoA.x = 20;
    pontoA.y = 30;
    pontoA.z = 50;

    cout << "Digite a coordenada x: ";
    cin >> pontoB.x;

    cout << "Digite a coordenada y: ";
    cin >> pontoB.y;

    cout << "Digite a coordenada z: ";
    cin >> pontoB.z;

    printDatas(pontoB);

}

void printDatas(Coordenates point)
{
    cout << "\nPonto B - x: " << point.x << endl;
    cout << "Ponto B - y: " << point.y << endl;
    cout << "Ponto B - z: " << point.z << endl << endl;
}

void printCoordinatesArray() 
{
    Coordenates ponto[3];

    ponto[0].x = 20;
    ponto[0].y = 30;
    ponto[0].z = 50;

    cout << "Ponto A - x: " << ponto[0].x << endl;
    cout << "Ponto A - y: " << ponto[0].y << endl;
    cout << "Ponto A - z: " << ponto[0].z << endl << endl;

    ponto[1].x = 30;
    ponto[1].y = 40;
    ponto[1].z = 60;

    cout << "Ponto B - x: " << ponto[1].x << endl;
    cout << "Ponto B - y: " << ponto[1].y << endl;
    cout << "Ponto B - z: " << ponto[1].z << endl << endl;

    ponto[2].x = 70;
    ponto[2].y = 90;
    ponto[2].z = 100;

    cout << "Ponto C - x: " << ponto[2].x << endl;
    cout << "Ponto C - y: " << ponto[2].y << endl;
    cout << "Ponto C - z: " << ponto[2].z << endl << endl;
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
