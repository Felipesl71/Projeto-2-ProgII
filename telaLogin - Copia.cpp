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
void botoes()
{
    int c, l;
    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO QUADRO DE LOGIN
    for ( c = 5; c <= 27 ; c++ )
    {
        textbackground(CYAN);
        textcolor(BLACK);
        gotoxy ( c + 40 , 14 );
        printf ( "%c" , 205 );
        gotoxy ( c + 40 , 16 );
        printf ( "%c" , 205 );

        textcolor(WHITE);
        textbackground(3);
        gotoxy ( 45 , 15 );
        printf ( "LOGIN:" );


    //------------------------------------------------------------------------------
    //      LINHA DE CIMA DE DE BAIXO DO QUADRO DE SENHA


        //textbackground(CYAN);
        textcolor(BLACK);
        //system( "Color 3F" );
        gotoxy ( c + 40 , 18 );
        printf ( "%c" , 205 );
        gotoxy ( c + 40 , 20 );
        printf ( "%c" , 205 );
        //textcolor(WHITE);

        textcolor(WHITE);
        textbackground(3);
        gotoxy ( 45 , 19 );
        printf ( "SENHA: " );

    }

    //------------------------------------------------------------------------------

    //------------------------------------------------------------------------------
    //     CANTOS DE LOGIN
    textbackground(CYAN);
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
    textbackground(CYAN);
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
        //textbackground(CYAN);
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
        //textbackground(CYAN);
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


int main ( )
{
//system ( "cls" );
    system( "Color 80" );
    botoes();
    Janela();
    logo();


    textcolor ( WHITE );

    gotoxy ( 35 , 35 ); // TIRAR O BAGULHO DE DENTRO DA MOLDURA
}
