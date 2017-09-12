#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "structs.h"
#include "struct.h"

#define n_registo 9

using namespace std;
using namespace cadastros;
using namespace cad;

void cadInstrutor(instrutor inst[], int *cont){
        int i = 1;
        char op;

        do{
            cout << "CADASTRANDO INSTRUTOR" << endl;
            cout << "Nome:  ";
            cin >> inst[i].nome;
            cout << "Turno:  ";
            cin >> inst[i].horario;
            cout <<"Deseja cadastrar outro instrutor? ";
            cin >> op;
        char* arquivo = "instrutores.txt";
        ofstream grava;
        grava.open(arquivo, ios::app);

        grava.seekp((i - 1) * sizeof(inst));
        grava.write((const char *)(&i),sizeof(inst));

        grava.close();
        *cont = i;
        i++;
    }while((i<=9) && (op != 'n') && (op != 'N'));

}

#endif // FUNCOES_H_INCLUDED
