# University Library System
Library system program used to store user and books data to the system and view them.  
By showing a selectable menu that presents 5 options: 1-Registeration system 2-View how many registered users  
3-Adding books system 4-View all books 5-Search for a specific book 6-Exit menu.  

# The way we stored the data
We used struct method to store our data in it because we had to store different type of data with each other.

# User Defined Functions used in the program
1-menu() --> it is a function used to print the system selectable colored menu on the console.  
2-registeration() --> used to ask the user about his data to be stored in the system such as name, pass, email, id.  
3-number_of_students() --> used to print the number of students registered on the system.  
4-number_of_books() --> used to return the number of books stored in the library (useful in other functions).  
5-add_book() --> used to insert new book to the library (Asks the user to enter the name of the book then if it was not available will be added).  
6-view_books() --> used to print all books stored in the library.  
7-check_arrays(char arr1[], char arr2[]) --> helpful function used to check if two arrays was equal or not.  
8-find_book(char b_name[]) --> used to find books by returning 1 if the book was found in the library and return 0 if it was not found.  
9-search_book() --> used to scan a name of a book from the user and search it in the library then prints if it was available or not.  
10-feed_back() --> used to ask the user when he exit the menu about his feedback about the library program.  

# Library Program flow
At first we call the menu function to print the menu on the console for the user to choose an option,  
then the user has to enter the number of the option he want to choose, then we call a suitable function from the above functions to do its job.  
EX: if i was the user and i choosed the add book option, i will have to enter a name for the book i will add, after that, the book will be stored  
in the library and then the menu will be printed again and again after every option completion until the user chooses to exit.  
Then finally if the user choosed to exit, he will be asked to rate the program from 0 to 5.

# Refernces
1- https://www.markdownguide.org/cheat-sheet/ --> we used it to write our readme report.  
2- https://www.youtube.com/watch?v=IOHhUDDZaRk --> We used it to color our console output.
