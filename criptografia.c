#include <stdio.h>

void criptografar(char mensagem[], char mensagemCriptografada[]);

int main(){

    char mensagem[100], mensagemCriptografada[100];

    printf("Informe sua string para criptografarmos: ");
    gets(mensagem);

    criptografar(mensagem, mensagemCriptografada);

    printf("Mensagem original: %s\n", mensagem);
    printf("Mensagem criptografada: %s\n", mensagemCriptografada);

    return 0;
}

void criptografar(char mensagem[], char mensagemCriptografada[]){
    int i = 0;

    while (mensagem[i] != '\0'){
        if((mensagem[i] >= 'a' && mensagem[i] <= 'w') || (mensagem[i] >= 'A' && mensagem[i] <= 'W')){
            mensagemCriptografada[i] = mensagem[i] + 3;
        }else if(mensagem[i] == 'x'){
            mensagemCriptografada[i] = 'a';
        }else if(mensagem[i] == 'X'){
            mensagemCriptografada[i] = 'A';
        }else if(mensagem[i] == 'y'){
            mensagemCriptografada[i] = 'b';
        }else if(mensagem[i] == 'Y'){
            mensagemCriptografada[i] = 'B';
        }else if(mensagem[i] == 'z'){
            mensagemCriptografada[i] = 'c';
        }else if(mensagem[i] == 'Z'){
            mensagemCriptografada[i] = 'C';
        }else{
            mensagemCriptografada[i] = mensagem[i];
        }
        i++;
    }

}