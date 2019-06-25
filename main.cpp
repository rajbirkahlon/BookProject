#include <iostream>
using namespace std;
#include "User.h"
#include "Book.h"

int main() {
    //Book Flower("Rajbir", "Action", 1230, 14, 3.3); FUNCTION TO ADD BOOK TO DATABASE
    int choice;
    User User1;
    do {
        main_menu_start:
        cout << "If you would like to sign up or sign in, press 1 or 2." << endl;
        cout << "If you would like to contribute to the book data base, press 3." << endl;
        cin >> choice;
        if (choice == 1) {
            User();
        }
        if (choice == 2) {
            //EditUser(User1);
        }
        if (choice == 3) {
            //User_Book();
        }
        cout << "Would you like to go back to the main menu? Enter 1 to do so or enter 0 to quit." << endl;
        cin >> choice;
        if (choice == 1) goto main_menu_start;
    } while(choice != 0);

    return 0;
}