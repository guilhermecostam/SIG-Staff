#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validations.h"

/**
 * @author José Victor
 * Method that validate a email
 */
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

/**
 * @author José Victor
 * Method that validate char is composed of digits
 */
int onlyNumbers(char digit) {
    if (digit >= '0' && digit <= '9') 
      return 1;
    else 
      return 0;
}

/**
 * @author José Victor
 * Method that validate phone number
 */
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

/**
 * @author Guilherme Medeiros
 * Method that validate name
 */
int nameValidation(char name[21]){
    
  char characters_not_included[] = "0123456789,-:;[]{}*#"; //definir caracteres inuteis

  for(int i = 0; i < strlen(name); i++){        
    for(int j = 0; j < strlen(characters_not_included); j++){
      if(name[i] == characters_not_included[j]){
          return 0;
      }
    }
  }
  return 1;
}