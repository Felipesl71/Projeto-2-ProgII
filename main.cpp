#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "funcoes.h"

using namespace cadastros;
using namespace std;


main(){
    int* contador = 0;

    contador = new int;
    instrutor instrut[9];
    int opcao;

    cout << "1-Cadastro de instrutor: "<<endl;
    cout << "0- Sair"<<endl;
    cin >>opcao;

    switch(opcao){
            case 1:

                cadInstrutor(instrut,contador);
            break;


            case 0:
            break;
    }
}




