///////////////////////////////////////////////////////////////////////////////
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                    Discipline DCT1106 -- Programação                    ///
///                 SIG-Staff -- A system for staff control                 ///
///           Developed by @guilhermecostam and @victormedeiros1            ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "staffs.h"
#include "helpers.h"
#include "validations.h"

/**
 * @author José Victor
 * Method that list all staff in system
 */
void listStaffScreen(void){
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
    printf("///                         = = List of Staff = =                         ///\n");
    for(int i = 0; i < 5; i++){
        printf("///                                   %d                                   ///\n", i);
    }
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    terminalCleaner();
}

/**
 * @author Guilherme Costa
 * Method that create a staff in system
 */
void createStaff(void) {
    Staff* staff;
    staff = createStaffScreen();

    if(searchStaff(staff->cpf) == NULL){
        saveStaff(staff);
    }else{
        system("clear||cls");
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
        printf("///                     = = Staff already created = =                     ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        terminalCleaner();
    }
}

/**
 * @author Guilherme Costa
 * Method that search a staff in system
 */
Staff* searchStaff(char* cpf) {
    FILE* fp;
    Staff* staff;

    staff = (Staff*) malloc(sizeof(Staff));
    fp = fopen("staff.dat", "rb");
    if (fp == NULL) {
        fileErrorScreen();
    }
    while(fread(staff, sizeof(Staff), 1, fp)) {
        if ((strcmp(staff->cpf, cpf) == 0)) {
            fclose(fp);
            return staff;
        }
    }
    fclose(fp);
    return NULL;
}

/**
 * @author Guilherme Costa
 * Method that show a file error screen
 */
void fileErrorScreen(void) {  
    system("clear||cls");
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
    printf("///            ###############################################            ///\n");
    printf("///            ####                                       ####            ///\n");
    printf("///            ####         ERROR WHEN SAVING FILE        ####            ///\n");
    printf("///            ####                                       ####            ///\n");
    printf("///            ###############################################            ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    terminalCleaner();
}

/**
 * @author Guilherme Costa
 * Method that save a staff in system
 */
void saveStaff(Staff* staff) {
    FILE* fp;

    fp = fopen("staff.dat", "ab");
    if (fp == NULL) {
        fileErrorScreen();
    }
    fwrite(staff, sizeof(Staff), 1, fp);
    fclose(fp);
}

/**
 * @author José Victor
 * Method that read a staff details
 */
Staff* createStaffScreen(void){
    Staff* staff;
    staff = (Staff*) malloc(sizeof(Staff));

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
    printf("///                         = = Create staff = =                          ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    do {
        printf("///     Full name:\n\t>>>");
        scanf("%[^\n]", staff->name);
        getchar();
    } while (!nameValidation(staff->name));

    do {
        printf("///     CPF (only numbers):\n\t>>>");
        scanf("%[A-Za-z0-9@._]", staff->cpf);
        getchar();
    } while (!validateCPF(staff->cpf));

    printf("///     Position:\n\t>>>");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", staff->position);
    getchar();

    do {
        printf("///     Phone (only numbers):\n\t>>>");
        scanf("%[0-9]", staff->phone);
        getchar();
    } while (!phoneValidation(staff->phone));
    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Wait while the staff is created ...                            ");
    sleep(1);
    terminalCleaner();

    return staff;
}

/**
 * @author Guilherme Medeiros
 * Method that find a staff in system
 */
void findStaff(void) {
    Staff* staff;
    char* cpf;

    cpf = findStaffScreen();
    staff = searchStaff(cpf);
    showStaff(staff);
}

/**
 * @author José Victor
 * Method that show the find staff screen
 */
char* findStaffScreen(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char));
    
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
    printf("///                         = = Search staff = =                          ///\n");
    printf("///                                                                       ///\n");
    printf("///          Enter the identifier (CPF):                                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n"); 

    printf("///                                                                         ///\n");
    do {
        printf("///     # Enter the staff CPF:\n\t>>>");
        scanf("%[A-Za-z0-9@._]", cpf);
        getchar();
    } while (!validateCPF(cpf));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . You will be redirected to this staff details ... ");
    sleep(1);
    terminalCleaner();
    
    return cpf;
}

/**
 * @author Guilherme Medeiros
 * Method that shows a staff
 */
void showStaff(Staff* staff) {
    system("clear||cls");
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
    printf("///                             = = Staff = =                             ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                       ///\n");

	if (staff == NULL) {
    printf("///             ###############################################           ///\n");
    printf("///             ####                                       ####           ///\n");
    printf("///             ####             MISSING STAFF!            ####           ///\n");
    printf("///             ####                                       ####           ///\n");
    printf("///             ###############################################           ///\n");

	} else {
        printf("///            -> Staff informations:                                     ///\n");
        printf("///                                                                       ///\n");
        printf("///            . Name: %s\n", staff->name);
        printf("///            . Position: %s\n", staff->position);
        printf("///            . CPF: %s\n", staff->cpf);
        printf("///            . Phone: %s\n",staff->phone);
    }
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    terminalCleaner();
}

/**
 * @author Guilherme Medeiros
 * Method that update a staff in system
 */
void updateStaff(void) {
    Staff* staff;
    char* cpf;

    cpf = updateStaffScreen();
    staff = searchStaff(cpf);
    editStaff(staff);
}

/**
 * @author José Victor
 * Method that show the update staff screen
 */
char* updateStaffScreen(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char));
    
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
    printf("///                          = = Update Staff = =                         ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                       ///\n");
    do {
        printf("///     # Enter the staff CPF:\n\t>>>");
        scanf("%[A-Za-z0-9@._]", cpf);
        getchar();
    } while (!validateCPF(cpf));

    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               You will be redirected to the update screen ... ");
    sleep(1);
    
    return cpf;
}

/**
 * @author José Victor
 * Method that update a staff in system
 */
void editStaff(Staff* staff) { 
    system("clear||cls"); 
    int editChoice;

    do {
        editChoice = 0;
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
        printf("///            Press (1) to edit the staff name                           ///\n");
        printf("///            Press (2) to edit the staff CPF                            ///\n");
        printf("///            Press (3) to edit the staff position                       ///\n");
        printf("///            Press (4) to edit the staff phone                          ///\n");
        printf("///            Press (0) to return to the main menu                       ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                       ///\n");
        printf("\n");

        printf("Type the operation you want:\n\t>>>");
        scanf("%d", &editChoice);
        printf("\n");
        if(editChoice != 0){
            terminalCleaner();
            
            switch(editChoice){
                case 1:
                {
                    do {
                        printf("///     Full name:\n\t>>>");
                        scanf("%[^\n]", staff->name);
                        getchar();
                    } while (!nameValidation(staff->name));
                    break;
                }
                case 2:
                {
                    do {
                        printf("///     CPF (only numbers):\n\t>>>");
                        scanf("%[A-Za-z0-9@._]", staff->cpf);
                        getchar();
                    } while (!validateCPF(staff->cpf));
                    break;
                }
                case 3:
                {
                    printf("///     Position:\n\t>>>");
                    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", staff->position);
                    getchar();
                    break;
                }
                case 4:
                {
                    do {
                        printf("///     Phone (only numbers):\n\t>>>");
                        scanf("%[0-9]", staff->phone);
                        getchar();
                    } while (!phoneValidation(staff->phone));
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
    } while(editChoice != 0);

    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    terminalCleaner();
}

/**
 * @author José Victor
 * Method that delete a staff in system
 */
void deleteStaffScreen(void){
    char idStaff[12];

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
    printf("///                         = = Delete staff = =                          ///\n");
    printf("///                                                                       ///\n");
    printf("///          Enter the identifier (ID):                                   ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    printf("Type the id of the staff you want delete:\n\t>>> ");
    scanf("%[0-9]", idStaff);
    getchar();
    // processamento
    printf("\n");

    terminalCleaner();
}