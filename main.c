#include <stdio.h>
#include <stdlib.h>
void menu();    // Menu Function Deceleration

int main()
{
printf("Welcome in Fady & Elrawy Program\n");
printf("---------------------------------\n");
// Start Main Variables
int i,j;
int userChoice;
// End Main Variables


do
{
    menu();         // Menu Function Calling & This Function Will Be Repeated
    printf("Please Enter Your Choice: ");
    scanf("%d", &userChoice);
    printf("\n");

    switch (userChoice)
    {
    case 0:     // For The 1st Time
        break;

    case 1:
        //student_Register()
    break;

    case 2:
        //student_Names()
    break;

    case 3:
        //add_Book()
    break;

    case 4:
    //book_List()
    break;

    case 5:
    //library_Search()
    break;

    default:
        printf("Please Enter a Valid Number (0-5)\n\n\n\n\n");
    }
}while (userChoice !=0 );


return 0;
}



// Menu Function
void menu()
{
    printf("\n\n\nChoose From the Menu:\n");
    printf("---------------------\n");
    printf("(1) Student Register\n");
    printf("(2) Student Names\n");
    printf("(3) Add a New Book\n");
    printf("(4) List of Books\n");
    printf("(5) Search in Library\n");
    printf("(0) Exit From Program\n");
    printf("\n");
}
