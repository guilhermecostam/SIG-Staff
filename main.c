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
void aboutScreen(void);
void teamScreen(void);

/**
 * Method main
 */
int main(void){
    int operation;

    do {
        operation = 0;

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
        printf("///                       = = Welcome to SIG-Staff = =                      ///\n");
        printf("///                                                                         ///\n");
        printf("///             Type (1) to access the system screen                        ///\n");
        printf("///             Type (2) to access the about screen                         ///\n");
        printf("///             Type (3) to access the team screen                          ///\n");
        printf("///             Type (0) to exit the system                                 ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        
        printf("Type the operation you want:\n\t>>> ");
        scanf("%i", &operation);
        printf("\n");

        if (operation != 0 && operation <= 3 && operation > 0) // impede que seja colocado números que não pode
        {
            terminalCleaner();
            switch (operation)
            {
                case 1:
                    aboutScreen();
                    break;
                case 2:
                    teamScreen();
                    break;
                // case 3:
                //     aboutScreen();
                //     break;
            }
        }
    } while (operation != 0);

    printf("Goodbye!");
    return 0;
}

/////
// Functions

/**
 * @author Guilherme Medeiros
 * Method that clean the terminal
 */
void terminalCleaner(void){
    printf("\t\t\t>>> Press <ENTER> to continue...\n");
    getchar();
    system("clear||cls");
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