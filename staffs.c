///////////////////////////////////////////////////////////////////////////////
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                    Discipline DCT1106 -- Programação                    ///
///                 SIG-Staff -- A system for staff control                 ///
///           Developed by @guilhermecostam and @victormedeiros1            ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
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
 * @author José Victor
 * Method that create a staff in system
 * Note:
 *  What data will be needed? Ask Guilherme.
 */
void createStaffScreen(void){
    char idStaff[12];
    char fullName[51];
    char email[51];
    char position[15];
    char phone[12];

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

    printf("///     Id (only numbers):\n\t>>>");
    scanf("%[0-9]", idStaff);
    getchar();

    printf("///     Full name:\n\t>>>");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", fullName);
    getchar();
    
    printf("///     E-mail:\n\t>>>");
    scanf("%s", email);
    getchar();

    printf("///     Position:\n\t>>>");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", position);
    getchar();

    printf("///     Phone (only numbers):\n\t>>>");
    scanf("%[0-9]", phone);
    getchar();
    //processamento

    terminalCleaner();
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