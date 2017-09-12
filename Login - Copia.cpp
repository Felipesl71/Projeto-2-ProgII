#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <locale.h>
#include <windows.h>
//#include <conio.h>
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
    char* nomeaux = new char[10];
    char* senhaaux = new char[10];
  //  int n,i;
   // char contrl;
    char data[9];
    char hora[9];
    char horafinal[9];
    //funcionario fun[n_posit];


 //NUMERO DE CHARS E DE ASTERISCOS



    ofstream entrada;
    ifstream leitura;
    entrada.open("testeleitor.txt", ios:: out| ios:: app);
    leitura.open("funcinario.txt", ios:: in);
    do
        {
                char tecla;
                int cont=0, aster;
                textcolor(WHITE);
                textbackground(DARKGRAY);
                gotoxy (45 , 15);
                cout << "LOGIN: ";
                //gotoxy ( 52 , 15);
                cin >> nomeaux;
                textcolor(WHITE);
                textbackground(DARKGRAY);
                gotoxy ( 45 , 19 );
                cout << "SENHA: ";
               // gotoxy ( 52 , 19);
                //cin >> senhaaux;


               // fflush(stdin);
                do
                {
                    gotoxy ( 52+cont , 19);
                    tecla = getch();

                    switch(tecla)
                    {
                        case (char)13 : if(cont>0)            //ENTER
                            senhaaux[cont] = '\0';  //NAO USA COMO CHAR
                        else
                            tecla = NULL;      //NAO CONSIDERA A SAIDA, PQ
                                                      //NAO FOI DIGITADO NADA
                        break;

                        case (char)8  : if(cont>0)                       //BACKSPACE
                        {
                            senhaaux[cont] = NULL;
                            cont--;
                        }
                        break;
                    //    fflush(stdin);
                        default: senhaaux[cont] = tecla;
                        cont++;
                        break;
                    }
                aster = cont;

                gotoxy ( 52 , 19); // posiciona o local da senha

                while(aster>0)         //IMPRIME O NR DE CHARS, EM ASTERISCOS
                {
                    cout<<"*";

                    aster--;
                }
             }while( tecla != 13);

                _strdate(data);
                gotoxy ( 105 , 32 );
                cout << data  ;
                _strtime(hora);
                gotoxy ( 105 , 33 );
                cout << hora;
                if((strcmp(nome, nomeaux) == 0) && (strcmp(senha, senhaaux) == 0))
                {
                    entrada << nome << ";" << data << ";" << hora;
                    entrada.close();
                    leitura.close();
                }
                else
                {
                    gotoxy(45,25);
                    cout << "*entrada incorreta*";
                    Sleep(1500);
                 //   delay(1500);
                    clrscr();
                    system( "Color 80" );
                    loginSenha();
                    Janela();
                    logo();

                }
            }while((strcmp(nome, nomeaux) != 0) || (strcmp(senha, senhaaux) != 0));
            delete[] senhaaux;
            senhaaux = NULL;
            delete[] nomeaux;
            nomeaux = NULL;
            clrscr();
            Janela();
            logo();
            botoes();

gotoxy ( 35 , 35 ); // TIRAR O BAGULHO DE DENTRO DA MOLDURA
return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>  //ou conio.h, se for Borland

int main()
{
    char senha[12]; //a senha
    char tecla;
    int cont=0, aster; //NUMERO DE CHARS E DE ASTERISCOS

    printf("Digite a senha : ");
    do
    {
        tecla = getch();
        switch(tecla)
        {
            case (char)13 : if(cont>0)            //ENTER
                                senha[cont] = '\0';  //NAO USA COMO CHAR
                            else
                                tecla =NULL;      //NAO CONSIDERA A SAIDA, PQ
                                                      //NAO FOI DIGITADO NADA
                            break;

            case (char)8  : if(cont>0)                       //BACKSPACE
                            {
                                senha[cont] = NULL;
                                cont--;
                            }
                            break;

            default       : senha[cont] = tecla;
                            cont++;
                            break;
        }
        aster = cont;
        clrscr();
        printf("Digite a senha : ");
        while(aster>0)         //IMPRIME O NR DE CHARS, EM ASTERISCOS
        {
            printf("*");
            aster--;
        }
    }
    while(tecla!=(char)13 && cont<10); //bota o limite de caracteres e
                                         // testa o ENTER

    printf("\nA senha digitada eh : %s",senha);
   //Só pra confirmar se o processo deu certo

    getch();
}*/
