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
    char cpf[12];
    char position[15];
    char phone[11];
    char deleted;
};

///// Assinatura das funções

Staff* createStaffScreen(void);
char* findStaffScreen(void);
char* updateStaffScreen(void);
char* deleteStaffScreen(void);
void fileErrorScreen(void);

void createStaff(void);
void showStaff(Staff* staff);
Staff* editStaff(Staff* staff);
void deleteStaff(void);
void rewriteStaff(Staff* staff);

Staff* searchStaff(char* cpf);
void saveStaff(Staff* staff);
void findStaff(void);
void deleteSelectedStaff(Staff* staff);
int sureDeleteStaff(Staff* staff);
void successStaffDeleted(void);
