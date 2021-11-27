///////////////////////////////////////////////////////////////////////////////
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                    Discipline DCT1106 -- Programação                    ///
///                 SIG-Staff -- A system for staff control                 ///
///           Developed by @guilhermecostam and @victormedeiros1            ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

/**
 * @author Guilherme Medeiros
 * Method that clean the terminal
 */

void terminalCleaner(void){
    printf("\n\t\t>>> Press <ENTER> to continue...\n");
    getchar();
    system("clear||cls");
}