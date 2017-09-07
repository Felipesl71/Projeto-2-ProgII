#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

namespace cad{
   struct cadastro
{
    char nome[10];
    char categoria[10];
    char turno[10];
    char sexo[10];
    char endereco[10];
    char estado[10];
    char cidade[20];
    char bairro[10];
    int num_casa;
    int idade;
    char cpf1[10]; //decidir fazer com char pq ficava mais fácil a veerificação
    int telefone; //coloquei telefone ao invés de Tel

};
struct cadCarro
{
    char modelo[10];
    int ano;
    char cor;
    char placa;
    char chassi;
    double peso;
    int lotacao;
    float ipva;
    float seguro;
};

#endif // ALUNO_H_INCLUDED

