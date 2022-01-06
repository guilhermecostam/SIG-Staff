#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validations.h"

int emailValidation(char *email){
  int isValid = 0;
  for (int i = 0; i < strlen(email); i++){
    if(email[i] == '@'){
      isValid++;
    }

    if(isValid == 1){
      return 1;
    }else{
      return 0;
    }
  }
}

// Função inspirada no código do professor Flavius
int onlyNumbers(char digit) {
    if (digit >= '0' && digit <= '9') 
      return 1;
    else 
      return 0;
}



///
/// Retorna 1 se string recebido corresponde a um número de celular válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
// Função inspirada no código do professor Flavius
int phoneValidation(char* digit) {
    int size;
    size = strlen(digit);
    if (size != 11)
        return 0;
    for (int i = 0; i < size; i++) {
        if (onlyNumbers(digit[i])) {
            return 0;
        }
    }
    return 1;
}