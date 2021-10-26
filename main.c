///////////////////////////////////////////////////////////////////////////////
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                    Discipline DCT1106 -- Programação                    ///
///                 SIG-Staff -- A system for staff control                 ///
///           Developed by @guilhermecostam and @victormedeiros1            ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/**
 * Method main
 */
int main(){
    aboutScreen();
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
    system("clear||cls");
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