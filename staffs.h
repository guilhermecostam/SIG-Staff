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
};

///// Assinatura das funções

void listStaffScreen(void); // falta
Staff* createStaffScreen(void);
char* findStaffScreen(void); // falta
char* updateStaffScreen(void); // falta
char* deleteStaffScreen(void); // falta
void fileErrorScreen(void);

void createStaff(void);
void showStaff(Staff* staff);
void editStaff(Staff* staff);
void deleteStaff(void);

Staff* searchStaff(char* cpf);
void saveStaff(Staff* staff);
void findStaff(void);
void deleteSelectedStaff(Staff* staff);
int sureDeleteStaff(Staff* staff);
void successStaffDeleted(void);
