#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "structs.h"


#define n_registo 9

using namespace std;
using namespace cadastros;
    void cadInstrutor(instrutor inst[], int *cont){
            int i = 1;
            int indinst;
            char op;
            char* arquivo = "instrutores.txt";

            do{
                cout << "CADASTRANDO INSTRUTOR" << endl;
                cout << "Nome:  ";
                cin >> inst[i].nome;
                cout << "Turno:  ";
                cin >> inst[i].horario;
                cout <<"Deseja cadastrar outro instrutor? ";
                cin >> op;

            ofstream grava;
            grava.open(arquivo, ios::app);

            grava.seekp((i - 1) * sizeof(inst));
            grava.write((const char *)(&i),sizeof(inst));

            grava.close();
            *cont = i;
            i++;
        }while((i<=9) && (op != 'n') && (op != 'N'));
     // verificar essa parte
       ifstream abrir;
       abrir.open(arquivo,ios::in);
       abrir.read((char *)(&i),sizeof(inst));
           while (abrir && ! abrir.eof()) {
           cout<<inst[i].nome<< endl;
           cout<<inst[i].horario<<endl;
           abrir.read((char *)(&i),sizeof(inst));
        }
        abrir.close( );
    }


#endif // FUNCOES_H_INCLUDED
