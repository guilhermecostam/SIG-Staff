#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "staffs.h"
#include "helpers.h"
#include "validations.h"
#include "relatorios.h"

/**
 * @author José Victor
 * Method that shows the options in the system
 */

void listStaffOptionsScreen(void) {
    int operation;

    do {
        operation = 0;
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                       ///\n");
        printf("///          ===================================================          ///\n");
        printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
        printf("///          = = = =              SIG-Staff              = = = =          ///\n");
        printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
        printf("///          ===================================================          ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                       ///\n");
        printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
        printf("///           = = = = =   Type the desired option   = = = = =             ///\n");
        printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
        printf("///                                                                       ///\n");
        printf("///            Press (1) to list all staff                                ///\n");
        printf("///            Press (2) to list staff for alphabetic order               ///\n");
        printf("///            Press (0) to return to the main menu                       ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");

        printf("Type the operation you want:\n\t>>>");
        scanf("%d", &operation);
        printf("\n");
        if(operation != 0){
            terminalCleaner();
            
            switch(operation){
                case 1:
                {
                    listStaff();
                    break;
                }
                case 2:
                {
                    listStaffAlphabetic();
                    break;
                }
                default:
                {
                    printf("\t//////////////////////////////////////////////\n");
                    printf("\t///                                        ///\n");
                    printf("\t///   You have entered an invalid option!  ///\n");
                    printf("\t///                                        ///\n");
                    printf("\t//////////////////////////////////////////////\n");
                    terminalCleaner();
                }
            }
        }
    } while(operation != 0);
}

void listStaff(void){
    FILE* fp;
    Staff* staff;
    staff = (Staff*) malloc(sizeof(Staff));
    fp = fopen("staff.dat", "rb");
    while (fread(staff, sizeof(Staff), 1, fp)) {
        printf("///           Name: %s                                                    \n", staff->name);
        printf("///           CPF: %s                                                   \n", staff->cpf);
        printf("///           Position: %s                                                  \n", staff->position);
        printf("///           Phone: %s                                     \n", staff->phone);
        printf("-----------------------------------------------------------------------------\n");
    }
    fclose(fp);
    free(staff);
}
void listStaffAlphabetic(void){
  printf("TESTE ALPHABETIC");
}