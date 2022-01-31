#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validations.h"

/**
 * @author Guilherme Medeiros
 * Method that validate a cpf
 */
int validateCPF(char *cpf)
{
    int cpfInteger[12];
    int i;
    int sum = 0;
    int digit1;
    int digit1Final;
    int digit2;
    int digit2Final;
    int finalValue;

    if (strlen(cpf) != 11) {
      return 0;
    }

    // Using ASCII Table -> char to int
    for (i = 0; i < 11; i++) {
      cpfInteger[i] = cpf[i] - 48;
    }

    // if(equalsDigitCPF(cpfInteger)) {
    //   return 0;
    // }

    // First digit
    for (i = 0; i < 9; i++) {
      sum = sum + cpfInteger[i] * (10 - i);
    }
    digit1Final = sum % 11;
    if ((digit1Final == 0) || (digit1Final == 1)) {
      digit1 = 0;
    }
    else {
      digit1 = 11 - digit1Final;
    }

    // Second digit
    sum = 0;
    for (i = 0; i < 10; i++) {
      sum = sum + cpfInteger[i] * (11 - i);
    }
    finalValue = (sum / 11) * 11;
    digit2Final = sum - finalValue;
    if ((digit2Final == 0) || (digit2Final == 1)) {
      digit2 = 0;
    } else {
      digit2 = 11 - digit2Final;
    }

    // Final validation of both digits
    if ((digit1 == cpfInteger[9]) && (digit2 == cpfInteger[10])) {
      return 1;
    }
    return 0;
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
int phoneValidation(char *digit) {
    int size;
    size = strlen(digit);
    if (size != 11)
        return 0;
    for (int i = 0; i < size; i++) {
        if (!onlyNumbers(digit[i])) {
            return 0;
        }
    }
    return 1;
}

/**
 * @author Guilherme Medeiros
 * Method that validate name
 */
int nameValidation(char name[51]){
    
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