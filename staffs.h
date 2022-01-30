///////////////////////////////////////////////////////////////////////////////
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                    Discipline DCT1106 -- Programação                    ///
///                 SIG-Staff -- A system for staff control                 ///
///           Developed by @guilhermecostam and @victormedeiros1            ///
///////////////////////////////////////////////////////////////////////////////

///// Structs

typedef struct staff Staff;

struct staff {
    char name[51];
    char cpf[14];
    char position[15];
    char phone[11];
};

///// Assinatura das funções

void listStaffScreen(void);
Staff* createStaffScreen(void);
void searchStaffScreen(void);
void deleteStaffScreen(void);
void updateStaffScreen(void);
void fileErrorScreen(void);

void createStaff(void);

Staff* searchStaff(char* cpf);
void saveStaff(Staff* staff);
