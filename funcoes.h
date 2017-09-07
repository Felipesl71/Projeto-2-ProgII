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

            grava<< "Nome: " << inst[i].nome;
            grava<< "\nHorario: " << inst[i].horario<<endl;

        grava.close();
        *cont = i;
        i++;
    }while((i<=9) && (op != 'n') && (op != 'N'));

}

void carregaAlunos ( ifstream &f, cadastro cadaux []){
     for (int i = 0; i< n_registo ; i ++) cadaux[i].disp = 1;
     cadastro c;
     string linhas , campo ;
     int n_linha = 0;
     int n_campo , pos ;
     int n = 0;
     while ( getline (f, linhas )){
         n_campo = 1;
         pos = 0;
         n ++;
     while ( pos <= linhas . size ()){
     campo = "";
     while (( linhas [ pos ] != '\n') and ( pos <= linhas . size ())){
         campo = campo + linhas [ pos ];
         pos = pos + 1;
     }
     pos = pos + 1;

     switch ( n_campo )
     {

         case 1:
         c.cpf1 = campo ;
         break ;
         case 2:
         c.nome= campo ;
         break ;
          case 3:
         c.cidade= campo ;
         break ;
         case 4:
         c.endereco = campo ;
         break ;
          case 5:
         c.estado = campo ;
         break ;
         case 6:
         c.bairro = campo ;
         break ;
         case 7:
         c.num_casa = campo ;
         break ;
         case 8:
         c.idade = campo ;
         break ;
          case 9:
         c.sexo = campo ;
         break ;
         case 10:
         c.telefone = campo ;
         break ;
          case 11:
         c.turno = campo ;
         break ;
         case 12:
         c.categoria = campo ;
         break ;

         }
         n_campo = n_campo + 1;
         }
         c.disponivel = 0;
         n_cadastrados ++;
         cadaux [ n_linha ] = c;
         n_linha = n_linha + 1;
 }
}
#endif // FUNCOES_H_INCLUDED
