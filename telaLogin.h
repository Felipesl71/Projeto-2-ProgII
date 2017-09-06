//"═" ALT+205

//"╔" ALT+201

//"╝" ALT+188

//"╗" ALT+187

//"║" ALT+186

//"╚" ALT+200

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
using namespace std;

void Janela ( )
{
    int c, l;
    //------------------------------------------------------------------------------
    //          LINHA DE CIMA E DE BAIXO (PRIMEIRA E ULTIMA)
    for ( c = 3; c <= 113 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c , 2 );
        printf ( "%c" , 205 );
        gotoxy ( c , 34 );
        printf ( "%c" , 205 );
    }
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //           CANTOS DA MOLDURA
    textbackground(DARKGRAY);
    textcolor(BLACK);
    gotoxy ( 2 , 2 );
    printf ( "%c" , 201 );
    gotoxy ( 114 , 2 );
    printf ( "%c" , 187 );
    gotoxy ( 114 , 34 );
    printf ( "%c" , 188 );
    gotoxy ( 2 , 34 );
    printf ( "%c" , 200 );
    gotoxy ( 2 , 9 );
    printf ( "%c" , 204 );
    gotoxy ( 114 , 9 );
    printf ( "%c" , 185 );

    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //          MOLDURA LATERAL ESQUERDA E DIREITA DO MEIO
    for ( l = 10; l <= 33 ; l++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( 2 , l );
        printf ( "%c" , 186 );
        gotoxy ( 114 , l );
        printf ( "%c" , 186 );
    }
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //        MOLDURA LATERAL ESQUERDA E DIREITA DE CIMA
    for ( l = 3; l <= 8 ; l++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( 2 , l );
        printf ( "%c" , 186 );
        gotoxy ( 114 , l );
        printf ( "%c" , 186 );
    }
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //    LINHA DE BAIXO DA LOGOMARCA
    for ( c = 3; c <= 113 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy (c , 9);
        printf ( "%c" , 205 );
    }
    //------------------------------------------------------------------------------
}
void loginSenha()
{
    int c, l;
    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO QUADRO DE LOGIN
    for ( c = 5; c <= 27 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c + 40 , 14 );
        printf ( "%c" , 205 );
        gotoxy ( c + 40 , 16 );
        printf ( "%c" , 205 );

        //textcolor(WHITE);
        //gotoxy ( 45 , 15 );
        //printf ( "LOGIN:" );
        //gotoxy ( 52 , 15);
        //printf("admin");

    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO QUADRO DE SENHA

        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c + 40 , 18 );
        printf ( "%c" , 205 );
        gotoxy ( c + 40 , 20 );
        printf ( "%c" , 205 );
        //textcolor(WHITE);
        //textbackground(DARKGRAY);
        //gotoxy ( 45 , 19 );
       // printf ( "SENHA: " );
       // gotoxy ( 52 , 19);
        //printf("admin");

    }

    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //     CANTOS DE LOGIN
    textcolor(BLACK);
    gotoxy ( 44 , 14 );
    printf ( "%c" , 201 );
    gotoxy ( 68 , 14 );
    printf ( "%c" , 187 );
    gotoxy ( 68 , 16 );
    printf ( "%c" , 188 );
    gotoxy ( 44 , 16 );
    printf ( "%c" , 200 );
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //     CANTOS DE SENHA
    textcolor(BLACK);
    gotoxy ( 44 , 18 );
    printf ( "%c" , 201 );
    gotoxy ( 68 , 18 );
    printf ( "%c" , 187 );
    gotoxy ( 68 , 20 );
    printf ( "%c" , 188 );
    gotoxy ( 44 , 20 );
    printf ( "%c" , 200 );
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //     LINHAS LATERAIS DO QUADRO DE LOGIN
    for ( l = 15; l <= 15 ; l++ )
    {
        textcolor(BLACK);
        gotoxy ( 44 , l );
        printf ( "%c" , 186 );
        gotoxy ( 68 , l );
        printf ( "%c" , 186 );
    }
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //     LINHAS LATERAIS DO QUADRO DE SENHA
    for ( l = 19; l <= 19 ; l++ )
    {
        textcolor(BLACK);
        gotoxy ( 44 , l );
        printf ( "%c" , 186 );
        gotoxy ( 68 , l );
        printf ( "%c" , 186 );
    }
    //------------------------------------------------------------------------------
}

void logo()
{
    int c, l;

    textbackground(DARKGRAY);
    textcolor(BLACK);
    gotoxy(40,3);
    printf("%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c" , 201,205,205,205,187 , 201,205,203,205,187 , 201,205,205,205,187); // SIG linha 1
    printf(" %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c" , 201,205,205,205,187 , 201,205,205,205,205 , 201,205,205,205,187); // AES linha 1

    gotoxy(40,4);
    printf("%c       %c   %c     %c   %c %c     %c   ", 186,186,186,186,186,186,186); // SIGAES linha 2

    gotoxy(40,5);
    printf("%c%c%c%c%c   %c   %c  %c%c", 200,205,205,205,187 , 186 , 186 , 205,187); //SIG linha3
    printf(" %c%c%c%c%c %c%c%c%c  %c%c%c%c%c", 204,205,205,205,185 , 204,205,205,205 , 200,205,205,205,187);//AES linha 3

    gotoxy(40,6);
    printf("    %c   %c   %c   %c %c   %c %c         %c", 186 , 186, 186 , 186, 186 , 186, 186 , 186); // SIGAES linha 4

    gotoxy(40,7);
    printf("%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c", 200,205,205,205,188 , 200,205,202,205,188 , 200,205,205,205,188); //SIG linha 5
    printf(" %c   %c %c%c%c%c%c %c%c%c%c%c", 200 , 188 , 200,205,205,205,205 , 200,205,205,205,188); //AES linha 5

    gotoxy(40,8);
    printf("Sistema Gerenciador de Auto Escola");

}

void botoes()
{
    int c, l;

        //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO BOTAO CONTROLE DE ALUNO
    for ( c = 5; c <= 27 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c  , 10 );
        printf ( "%c" , 205 );
        gotoxy ( c  , 12 );
        printf ( "%c" , 205 );

        textcolor(WHITE);
        gotoxy ( 5 , 11 );
        printf ( "[1] CONTROLE DE ALUNO" );

        //     CANTOS DE CONTROLE DE ALUNO
        textcolor(BLACK);
        gotoxy ( 4 , 10 );
        printf ( "%c" , 201 );
        gotoxy ( 28 , 10 );
        printf ( "%c" , 187 );
        gotoxy ( 28 , 12 );
        printf ( "%c" , 188 );
        gotoxy ( 4 , 12 );
        printf ( "%c" , 200 );

        //     LINHAS LATERAIS DO BOTAO CONTROLE DE ALUNO
        for ( l = 11; l <= 11 ; l++ )
        {
            textcolor(BLACK);
            gotoxy ( 4 , l );
            printf ( "%c" , 186 );
            gotoxy ( 28 , l );
            printf ( "%c" , 186 );
        }
    //------------------------------------------------------------------------------
    }

    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO QUADRO DE CADASTRO
    for ( c = 5; c <= 27 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c , 14 );
        printf ( "%c" , 205 );
        gotoxy ( c , 16 );
        printf ( "%c" , 205 );

        textcolor(WHITE);
        gotoxy ( 5 , 15 );
        printf ( "[2] CADASTRO" );

        //     CANTOS DE CADASTRO
        textcolor(BLACK);
        gotoxy ( 4 , 14 );
        printf ( "%c" , 201 );
        gotoxy ( 28 , 14 );
        printf ( "%c" , 187 );
        gotoxy ( 28 , 16 );
        printf ( "%c" , 188 );
        gotoxy ( 4 , 16 );
        printf ( "%c" , 200 );

        //     LINHAS LATERAIS DO BOTAO CADASTRO
        for ( l = 15; l <= 15 ; l++ )
        {
            textcolor(BLACK);
            gotoxy ( 4 , l );
            printf ( "%c" , 186 );
            gotoxy ( 28 , l );
            printf ( "%c" , 186 );
        }
    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO BOTAO INSTRUTORES

        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c , 18 );
        printf ( "%c" , 205 );
        gotoxy ( c , 20 );
        printf ( "%c" , 205 );
        textcolor(WHITE);
        textbackground(DARKGRAY);
        gotoxy ( 5 , 19 );
        printf ( "[3] INSTRUTORES " );

    }

    //     CANTOS DE INSTRUTORES
    textcolor(BLACK);
    gotoxy ( 4 , 18 );
    printf ( "%c" , 201 );
    gotoxy ( 28 , 18 );
    printf ( "%c" , 187 );
    gotoxy ( 28 , 20 );
    printf ( "%c" , 188 );
    gotoxy ( 4 , 20 );
    printf ( "%c" , 200 );

    //     LINHAS LATERAIS DO BOTAO INSTRUTORES
    for ( l = 19; l <= 19 ; l++ )
    {
        textcolor(BLACK);
        gotoxy ( 4 , l );
        printf ( "%c" , 186 );
        gotoxy ( 28 , l );
        printf ( "%c" , 186 );
    }

//------------------------------------------------------------------------------
//      LINHA DE CIMA DE DE BAIXO DO QUADRO DE FINANCEIRO
    for ( c = 5; c <= 27 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c , 22 );
        printf ( "%c" , 205 );
        gotoxy ( c , 24 );
        printf ( "%c" , 205 );

        textcolor(WHITE);
        gotoxy ( 5 , 23 );
        printf ( "[4] FINANCEIRO" );

        //     CANTOS DE FINANCEIRO
        textcolor(BLACK);
        gotoxy ( 4 , 22 );
        printf ( "%c" , 201 );
        gotoxy ( 28 , 22 );
        printf ( "%c" , 187 );
        gotoxy ( 28 , 24 );
        printf ( "%c" , 188 );
        gotoxy ( 4 , 24 );
        printf ( "%c" , 200 );

        //     LINHAS LATERAIS DO BOTAO FINANCEIRO
        for ( l = 23; l <= 23 ; l++ )
        {
            textcolor(BLACK);
            gotoxy ( 4 , l );
            printf ( "%c" , 186 );
            gotoxy ( 28 , l );
            printf ( "%c" , 186 );
        }
    //------------------------------------------------------------------------------
    }
    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO BOTAO SAIR
    for ( c = 5; c <= 27 ; c++ )
    {
        textbackground(DARKGRAY);
        textcolor(BLACK);
        gotoxy ( c , 26 );
        printf ( "%c" , 205 );
        gotoxy ( c , 28 );
        printf ( "%c" , 205 );

        textcolor(WHITE);
        gotoxy ( 5 , 27 );
        printf ( "[5] SAIR" );

        //     CANTOS DE SAIR
        textcolor(BLACK);
        gotoxy ( 4 , 26 );
        printf ( "%c" , 201 );
        gotoxy ( 28 , 26 );
        printf ( "%c" , 187 );
        gotoxy ( 28 , 28 );
        printf ( "%c" , 188 );
        gotoxy ( 4 , 28 );
        printf ( "%c" , 200 );

        //     LINHAS LATERAIS DO BOTAO DE SAIR
        for ( l = 27; l <= 27 ; l++ )
        {
            textcolor(BLACK);
            gotoxy ( 4 , l );
            printf ( "%c" , 186 );
            gotoxy ( 28 , l );
            printf ( "%c" , 186 );
        }
    //------------------------------------------------------------------------------
    }


}




//int main ( )
//{
//    system( "Color 80" );
//    botoes();
//    Janela();
//    logo();
//    textcolor ( WHITE );
//
//    gotoxy ( 35 , 35 ); // TIRAR O BAGULHO DE DENTRO DA MOLDURA
//}
