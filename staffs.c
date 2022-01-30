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
    //processamento

    terminalCleaner();
    return staff;
}

/**
 * @author José Victor
 * Method that search a staff in system
 */
void searchStaffScreen(void){
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
    printf("///                         = = Search staff = =                          ///\n");
    printf("///                                                                       ///\n");
    printf("///          Enter the identifier (ID):                                   ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    printf("Type the id of the staff you want search:\n\t>>> ");
    scanf("%[0-9]", idStaff);
    getchar();
    // processamento
    printf("\n");

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

/**
 * @author José Victor
 * Method that update a staff in system
 */
void updateStaffScreen(void){
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
    printf("///                         = = Update staff = =                          ///\n");
    printf("///                                                                       ///\n");
    printf("///          Enter the identifier (ID):                                   ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    printf("Type the id of the staff you want update:\n\t>>> ");
    scanf("%[0-9]", idStaff);
    getchar();
    // processamento
    printf("\n");

    terminalCleaner();
}