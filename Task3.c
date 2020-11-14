#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int j=0;
struct students
{
    char s_name[50];
    int s_id;
    char s_email[30];
    char s_password[30];
};
struct students stud[100];

struct books
{
    char b_name[50];
    int  b_id;
};
struct books book[100];

void menu();
void registeration();
void number_of_students();
int number_of_books();
void add_book();
void view_books();
int check_arrays(char arra1[], char arr2[]);
int find_book(char b_name[]);
void search_book();
void feed_back();

void main()
{
    system("COLOR FC");
    SetConsoleTitle("University Library System");
    menu();
}

void menu()
{
    int option, b_name[50];
    while (1)
    {
        printf("\nChoose from the options given below : \n\n");
        printf("Press (1) for Registeration.\n");
        printf("Press (2) to Know how many students registered into the system.\n");
        printf("Press (3) to Add a book.\n");
        printf("Press (4) to View all the books.\n");
        printf("Press (5) to Search for a specific book.\n");
        printf("Press (0) to Exit the system.\n\n");
        scanf("%d",&option);
        switch (option)
        {
            case 1:
                registeration();
                break;
            case 2:
                number_of_students();
                break;
            case 3:
                add_book();
                break;
            case 4:
                view_books();
                break;
            case 5:
                search_book();
                break;
            case 0:
                feed_back();
                break;
            default:
                printf("You have entered Invalid choise. \n");
        }
    }
}
void registeration()
{
    printf("Enter the information of the student : \n");
    
    printf("Name : ");
    scanf("%s",stud[j].s_name);

    printf("Password : ");
    scanf("%s",stud[j].s_password);

    printf("E-mail : ");
    scanf("%s",stud[j].s_email);

    printf("ID : ");
    scanf("%d",&stud[j].s_id);
    
    printf("%s account has been successfully registered!\n", stud[j].s_name);
    
    j++;
    
}
void number_of_students()
{
    printf("The number of students : %d",j);
}
int number_of_books()
{
    int b_num;
    for(int i = 0; i < 100; i++)
    {
        b_num = i+1;
        if(book[i].b_id != b_num)
        {
            return i;
        }
    }
}
void add_book()
{
    int b_num = number_of_books(), available;
    char b_name[50];
    printf("Enter the book name: ");
    scanf("%s", b_name);
    available = find_book(b_name);
    if(available == 0)
    {
    	printf("%s book has been successfully added.\n", b_name);
        book[b_num].b_id = b_num + 1;
        for(int k = 0; k < 50; k++)
        {
            book[b_num].b_name[k] = b_name[k];
        }
    }
    else
        printf("%s book is already available in the library!\n", b_name);
}
void view_books()
{
    int b_num = number_of_books();
    printf("All books in the library: \n");
    for(int i = 0; i < b_num; i++)
    {
        printf("%s \n", book[i].b_name);
    }
}
int check_arrays(char arr1[], char arr2[])
{
    int is_equal = 1;
    for(int i = 0; i < 50; i++)
    {
        if(arr1[i] != arr2[i])
        {
            is_equal = 0;
            break;
        }
    }
    return is_equal;
}
int find_book(char b_name[])
{
    int num = number_of_books(), found = 0;
    for(int i = 0; i < num; i++)
    {
        found = check_arrays(book[i].b_name, b_name);
        if(found == 1)
            break;
    }
    return found;
}
void search_book()
{
    char name[50];
    int is_found;
    printf("Enter the book name: ");
    scanf("%s", name);
    is_found = find_book(name);
    if(is_found == 1)
        printf("%s book is available in the library.", name);
    else
        printf("%s book is not available in the library.", name);
}
void feed_back()
{
    int feed;
    printf("Rate us [0-5]: ");
    scanf("%d", &feed);
    if(feed <= 5 && feed >= 0)
    {
        if(feed >= 4)
            printf("Thank you for your good feedback.");
        else
            printf("Thanks, We will keep working on developing our system to be better!");
        exit(0);
    }
    else
    {
        printf("Please enter a number from [0-5]!\n");
        feed_back();
    }
}





