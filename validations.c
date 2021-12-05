#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validations.h"

int emailValidation(char *email){
  int emailSize = strlen(email);
  char *emailUser = email;
  
  printf("///     %", emailUser);
  printf("\n");

  for (int i = 0; i < emailSize; i++){
    if (emailUser == "%[A-Za-z0-9@._]"){
      return 1;
    } else {
      return 0;
    }
  }
}