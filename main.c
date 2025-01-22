//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
    //comando de regionalizacao
    setlocale(LC_ALL, "Portuguese");
    //titulo do programa
    SetConsoleTitle("Criando arquivos e pastas");

    //system ("mkdir Aulas");

    //NOME DO ARQUIVO | SEGURANCA
    if (CreateDirectory ("NovaPasta", NULL)){
        printf ("Pasta criada com sucesso!\n\n");
    }
    else
    {
        printf ("Erro ao criar a pasta.\n\n");
    }

    //system ("copy NUL Aulas\\texto.txt");

    //NOME DO ARQUIVO | TIPO DE ACESSO | COMPARTILHAMENTO | SEGURANCA | TIPO DE CRIACAO DO ARQUIVO | ATRIBUTOS | TEMPLATE PARA ARQUIVO
    if (CreateFile ("NovaPasta/teste.txt", GENERIC_READ, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL)){
        printf ("Arquivo criado com sucesso!\n\n");
    }
    else
    {
        printf ("Erro ao criar o arquivo.\n\n");
    }
}
