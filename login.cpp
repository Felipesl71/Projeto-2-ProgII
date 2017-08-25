#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <locale.h>
#include "funcionario.h"
#include "funcFuncionario.h"
#define n_posit 1

using std::ifstream;
using std::ofstream;
using namespace std;



int main(){
    setlocale(LC_ALL,"portuguese");
    char nome[] = "admin";
    char senha[] = "admin";
    char nomeaux[10];
    char senhaaux[10];
    int n;
    char contrl;
    char data[9];
    char hora[9];
    char horafinal[9];
    funcionario fun[n_posit];

    ofstream entrada;
    ifstream leitura;
    entrada.open("testeleitor.txt", ios:: out| ios:: app);
    leitura.open("funcinario.txt", ios:: in);
    do{
        do{
            cout << "\ninforme seu login: ";
            cin >> nomeaux;
            cout << "informe sua senha: ";
            cin >> senhaaux;
            _strdate(data);
            cout << data << "\n";
            _strtime(hora);
            cout << hora;
            if((strcmp(nome, nomeaux) == 0) && (strcmp(senha, senhaaux) == 0)){
               entrada << nome << ";" << data << ";" << hora;
                entrada.close();
                leitura.close();
            }else{
                cout << "entrada incorreta";
            }
        }while((strcmp(nome, nomeaux) != 0) && (strcmp(senha, senhaaux) != 0));
            cout << "deseja continuar?";
            cin >> contrl;


    }while(contrl == 'S'|| contrl == 's');
    if(contrl == 'N' ||contrl ==  'n'){
        entrada.open("testeleitor.txt", ios:: out| ios:: app);
        _strtime(horafinal);
        entrada <<";"<<horafinal<<"\n";
        entrada.close();

    }else{
        cout <<"Cheguei aqui";
     }
    return 0;

}
