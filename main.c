#include <stdio.h>
#include <stdlib.h>
void menu();            // Menu Function Deceleration

// Start Register Form Function
void registeration();   // Register Form Declaration
struct student{ // Student Information Store
    int roll;   char firstName[50];     int id;     char faculty[50];   char email[50];     char password[50];
} s[10];
int st_No= -1;
// End Register Form Function

// Start Show Student Number Function
void showStudentNo();
int registeredStNO = 0;
// End Show Student Number Function

// Start Adding Book Function
void add_book();        // Adding Book Declaration
struct book{
    int bookID; char bookName[100];    int bookNo;
} b[10];
int book_No = -1;
int bookID = 2020001;
// End Adding Book Function

// Start View Books Function
void viewLibrary();
// End View Books Function

// Start Search in Library
void bookSearch();
// End Search in Library

// Start Exit Function
void feedback();
// Start Exit Function

int main()
{
printf("Welcome in Fady & Elrawy Program\n");
printf("---------------------------------\n");
int userChoice;


do
{
    menu();         // Menu Function Calling & This Function Will Be Repeated
    printf("Please Enter Your Choice: ");
    scanf("%d", &userChoice);
    printf("\n");

    switch (userChoice)
    {
    case 0:     // For The 1st Time
        feedback();
        break;
    case 1:
        st_No += 1;
        registeration();
        registeredStNO = st_No + 1;
    break;

    case 2:
        showStudentNo();
    break;

    case 3:
        book_No += 1;
        add_book();
        bookID += 1;
    break;

    case 4:
        viewLibrary();
    break;

    case 5:
        bookSearch();
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
    printf("\033[1;31m");
    printf("(1) Student Register\n");
    printf("(2) Student Names\n");
    printf("(3) Add a New Book\n");
    printf("(4) List of Books\n");
    printf("(5) Search in Library\n");
    printf("(0) Exit From Program\n");
    printf("\033[0m");
    printf("\n");
}


// Register Form Function
void registeration(){
printf("\n\n\n\nRegistration Form:\n");
printf("------------------\n");
// storing information
    s[st_No].roll = st_No + 1;         printf("\nFor Student NO (%d): \n", s[st_No].roll);
    printf("First Name:\t");           scanf("%s", s[st_No].firstName);
    printf("Enter ID:\t");             scanf("%d", &s[st_No].id);
    printf("Enter Faculty:\t");        scanf("%s", s[st_No].faculty);
    printf("Enter Email:\t");          scanf("%s", s[st_No].email);
    printf("Enter Password:\t");       scanf("%s", s[st_No].password);
// displaying information
printf("\n\n\n\nDisplaying Information:\n");
printf("---------------------------\n");
    printf("\nStudent NO(%d): \n", st_No + 1);
    printf("First name:\t%s\n", s[st_No].firstName);
    printf("Student's ID:\t%d\n", s[st_No].id);
    printf("Faculty:\t%s\n", s[st_No].faculty);
    printf("Email:\t\t%s\n", s[st_No].email);
    printf("Password:\t%s\n", s[st_No].password);
    printf("\n");
}


// Show Number Student Function
void showStudentNo(){
    printf("\n\n\nThe number of students who registered till now is: %d\n\n\n", registeredStNO);
}


// Add Book Function
void add_book(){
printf("\n\n\n\nAdding Books Form:\n");
printf("-------------------------\n");
// storing information
    b[book_No].bookNo = book_No + 1;   printf("\nBook Number (%d): \n", b[book_No].bookNo);
    printf("Book Name: ");             scanf("%s", b[book_No].bookName);
    b[book_No].bookID = bookID;
    printf("The Given Book ID is: %d\n\n\n", b[book_No].bookID);
}


// View Book Names Function
void viewLibrary(){
    int i;
    printf("\n\n\nUniversity Library:\n");
    printf("------------------------\n");
    if (book_No<0) {printf("There is no books in the library.\n\n\n\n");}
    for (i=0; i<=book_No; i++){
        printf("The Book No (%d) is:\t%s\t ID: %d\n", i+1, b[i].bookName, b[i].bookID);
    }
}


// Exit & Feedback Function
void feedback(){
    char userFeedback[200];
    int userRate;
    printf("\n\n\n\nPlease Enter Your Rate for our Program (0-5): ");
    scanf("%d", &userRate);
    while (userRate<0 || userRate>5){
        printf("\nInvalid Rating! ... Please Enter a Rate (0-5): ");
        scanf("%d", &userRate);
    }
    printf("Please tell us your feedback: ");
    scanf("%s", userFeedback);
    printf("\nYour Rating is: %d\nYour Feedback: %s\n\n", userRate, userFeedback);
    printf("Thanks for your time\n\n\n\n");

}


// Search in Library
void bookSearch(){
    printf("Number of Books is: %d\n", book_No+1);
    char userFindBook[50];
    printf("Enter the Book's Name to search in our library: ");
    scanf("%s", userFindBook);
    printf("Your Book Target is: %s\n", userFindBook);
    int i, flag = 0;
    for (i=0; i<=book_No; i++)
        if(strcmp(userFindBook, b[i].bookName) == 0)
            flag = 1;
    if (flag == 1)
        printf("\nWoOoOo! ... This Book is in the Library\n\n\n\n");
    else
        printf("\nWe're so sorry ... This Book is not in the Library\n\n\n\n");

}
