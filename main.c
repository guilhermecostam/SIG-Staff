///////////////////////////////////////////////////////////////////////////////
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                    Discipline DCT1106 -- Programação                    ///
///                 SIG-Staff -- A system for staff control                 ///
///           Developed by @guilhermecostam and @victormedeiros1            ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void terminalCleaner(void);
void mainScreen(void);
void systemOptionsScreen(void);
void aboutScreen(void);
void teamScreen(void);
void listStaffScreen(void);
void createStaffScreen(void);
void searchStaffScreen(void);
void deleteStaffScreen(void);
void updateStaffScreen(void);

/**
 * Method main
 */
int main(void){
    mainScreen();
    return 0;
}

////
// Functions

/**
 * @author Guilherme Medeiros
 * Method that clean the terminal
 */
void terminalCleaner(void){
    printf("\n\t\t>>> Press <ENTER> to continue...\n");
    getchar();
    system("clear||cls");
}

/**
 * @author Guilherme Medeiros
 * Method that shows the main screen
 */
void mainScreen(void){
    int operation;

    do {
        operation = 0;

        printf("\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                         ///\n");
        printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
        printf("///                   Centro de Ensino Superior do Serido                   ///\n");
        printf("///                    Discipline DCT1106 -- Programacao                    ///\n");
        printf("///                 SIG-Staff -- A system for staff control                 ///\n");
        printf("///           Developed by @guilhermecostam and @victormedeiros1            ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                         ///\n");
        printf("///                       = = Welcome to SIG-Staff = =                      ///\n");
        printf("///                                                                         ///\n");
        printf("///             Press (1) to access the system options screen               ///\n");
        printf("///             Press (2) to access the about screen                        ///\n");
        printf("///             Press (3) to access the team screen                         ///\n");
        printf("///             Press (0) to exit the system                                ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        
        printf("Type the operation you want:\n\t>>> ");
        scanf("%d", &operation);
        printf("\n");

        if (operation != 0)
        {
            terminalCleaner();
            switch (operation)
            {
                case 1:
                    systemOptionsScreen();
                    break;
                case 2:
                    aboutScreen();
                    break;
                case 3:
                    teamScreen();
                    break;
                default:
                    printf("\t//////////////////////////////////////////////\n");
                    printf("\t///                                        ///\n");
                    printf("\t///   You have entered an invalid option!  ///\n");
                    printf("\t///                                        ///\n");
                    printf("\t//////////////////////////////////////////////\n");
                    terminalCleaner();
            }
        }
    } while (operation != 0);

    printf("Goodbye!");
}

/**
 * @author Guilherme Medeiros
 * Method that shows the options in the system
 */
void systemOptionsScreen(void) {
    int operation;

    do{
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
        printf("///            Press (1) to list of staff                                 ///\n");
        printf("///            Press (2) to create new staff                              ///\n");
        printf("///            Press (3) to search for a specific staff                   ///\n");
        printf("///            Press (4) to update the staff register                     ///\n");
        printf("///            Press (5) to delete the staff register                     ///\n");
        printf("///            Press (0) to return to the main menu                       ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");

        printf("Type the operation you want\n\t>>>");
        scanf("%d", &operation);
        printf("\n");
        if(operation != 0){
            terminalCleaner();
            
            switch(operation){
                case 1:
                    listStaffScreen();
                    break;
                default:
                    printf("\t//////////////////////////////////////////////\n");
                    printf("\t///                                        ///\n");
                    printf("\t///   You have entered an invalid option!  ///\n");
                    printf("\t///                                        ///\n");
                    printf("\t//////////////////////////////////////////////\n");
                    terminalCleaner();
            }
        }
    } while(operation != 0);
}

/**
 * @author Guilherme Medeiros
 * Method that shows the screen about the project
 */
void aboutScreen(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                    Discipline DCT1106 -- Programação                    ///\n");
    printf("///                 SIG-Staff -- A system for staff control                 ///\n");
    printf("///           Developed by @guilhermecostam and @victormedeiros1            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                      = = = = = SIG-Staff = = = = =                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                       A system for staff control                        ///\n");
    printf("///               Project developed for the discipline DCT1106              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    terminalCleaner();
}

/**
 * @author José Victor
 * Method that shows the developers team screen
 */
void teamScreen(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                    Discipline DCT1106 -- Programação                    ///\n");
    printf("///                 SIG-Staff -- A system for staff control                 ///\n");
    printf("///           Developed by @guilhermecostam and @victormedeiros1            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                      = = = = = SIG-Staff = = = = =                      ///\n");
    printf("///                                                                         ///\n");
    printf("///             This project was developed by:                              ///\n");
    printf("///                                                                         ///\n");
    printf("///             Guilherme Costa                                             ///\n");
    printf("///             E-mail: guilherme.costa.134@ufrn.edu.br                     ///\n");
    printf("///                                                                         ///\n");
    printf("///             José Victor                                                 ///\n");
    printf("///             E-mail: jose.victor.017@ufrn.edu.br                         ///\n");
    printf("///                                                                         ///\n");
    printf("///             Repositório: https://github.com/guilhermecostam/SIG-Staff   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    terminalCleaner();
}

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
        printf("///          ID:                                                          ///\n");
        printf("///          Full name:                                                   ///\n");
        printf("///          Email:                                                       ///\n");
        printf("///          Birth date (mm/dd/aaaa):                                     ///\n");
        printf("///          Phone (only numbers):                                        ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        terminalCleaner();
}

/**
 * @author José Victor
 * Method that search a staff in system
 */
void searchStaffScreen(void){
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
        terminalCleaner();
}

/**
 * @author José Victor
 * Method that delete a staff in system
 */
void deleteStaffScreen(void){
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
        terminalCleaner();
}

/**
 * @author José Victor
 * Method that update a staff in system
 */
void updateStaffScreen(void){
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
        printf("///          Enter the identifier (ID):                                    ///\n");
        printf("///                                                                       ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        terminalCleaner();
}