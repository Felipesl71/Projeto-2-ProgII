#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <conio2.h>
#include "telaLogin.h"
//#include "funcionario.h"
//#include "funcFuncionario.h"
//#define n_posit 1

using std::ifstream;
using std::ofstream;
using namespace std;

int main()
{
    //setlocale(LC_ALL,"portuguese");
    system( "Color 80" );
    loginSenha();
    Janela();
    logo();

    char nome[] = "admin";
    char senha[] = "admin";
    char nomeaux[10];
    char senhaaux[10];
    int n,i;
    char contrl;
    char data[9];
    char hora[9];
    char horafinal[9];
    char opcao;
    //funcionario fun[n_posit];

    ofstream entrada;
    ifstream leitura;
    entrada.open("testeleitor.txt", ios:: out| ios:: app);
    leitura.open("funcinario.txt", ios:: in);
    do
    {

        textcolor(WHITE);
        textbackground(DARKGRAY);
        gotoxy (45 , 15);
        cout << "LOGIN: ";
        gotoxy ( 52 , 15);
        cin >> nomeaux;
        textcolor(WHITE);
        textbackground(DARKGRAY);
        gotoxy ( 45 , 19 );
        cout << "SENHA: ";
        gotoxy ( 52 , 19);
        cin >> senhaaux;
        _strdate(data);
        gotoxy ( 105 , 32 );
        cout << data  ;
        _strtime(hora);
        gotoxy ( 105 , 33 );
        cout << hora;
        if((strcmp(nome, nomeaux) == 0) && (strcmp(senha, senhaaux) == 0))
        {
            entrada << nome << ";" << data << ";" << hora;
            delay(1000);
            clrscr();
            Janela();
            logo();
            botoes();
            entrada.close();
            leitura.close();
        }
        else
        {
            cout << "\nentrada incorreta";
            delay(1500);
            clrscr();
            system( "Color 80" );
            loginSenha();
            Janela();
            logo();
        }
    }while((strcmp(nome, nomeaux) != 0) || (strcmp(senha, senhaaux) != 0));

        opcao = getch();
        switch(opcao)
        {
            case '1':
                cout << "Chama a funcao 1";
                break;

            case '2':
                cout << "Chama a funcao 2";
                break;

            case '3':
                cout << "Chama a funcao 3";
                break;

            case '4':
                cout << "Chama a funcao 4";
                break;

            case '5':
                entrada.open("testeleitor.txt", ios:: out| ios:: app);
                _strtime(horafinal);
                entrada <<";"<<horafinal<<"\n";
                entrada.close();
                break;
        }
gotoxy ( 35 , 35 ); // TIRAR O BAGULHO DE DENTRO DA MOLDURA
return 0;
}
