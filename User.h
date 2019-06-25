//
// Created by Rajbi on 6/25/2019.
//

#ifndef BOOKPROJECT_USER_H
#define BOOKPROJECT_USER_H

class User {
private:
    string User_Name; string password; string gen_preference[10]; string frequency; string fav_authors[10]; int length_read;
public:
    User() {
        int account_create;
        cout << "Hello. Welcome to my new app. If you are new, enter 0 and we will guide you through creating an account. Else enter 1 to return to main menu." << endl;
        cin >> account_create;
        if(account_create == 0) {
            cout << "Enter your name." << endl;
            cin >> User_Name;
            ///////////////////////////////////////
            cout << "Enter your password." << endl;
            cin >> password;
            ///////////////////////////////////
            string gen_pref;
            add_gen:
            cout << "Enter a single preferred genre. " << endl;
            cin >> gen_pref;
            for(int i=0; i<10; i++) {
                if (gen_preference[i] == " ") {
                    gen_preference[i] = gen_pref;
                    break; //does this leave for loop?
                }
            }
            int n_u_more_gen;
            cout << "Would you like to add more genres? Enter 1 for yes, 0 for no.";
            cin >> n_u_more_gen;
            if(n_u_more_gen == 1) {
                goto add_gen;
            }
            else {
                // go on with registration
            }
            ///////////////////////////////////////////////////////////////////
            do {
                cout << "Enter how frequent you read. Either daily, weekly, or monthly. " << endl;
                cin >> frequency;
            } while(frequency != "daily" && frequency != "weekly" && frequency != "monthly"); //do while loop so user can only enter a valid choice
            //////////////////////////////////////////////////////////////
            string new_author;
            add_auth:
            cout << "Enter a single favorite author. " << endl;
            cin >> new_author;
            for(int i=0; i<10; i++) {
                if(fav_authors[i] == " ") {
                    fav_authors[i] = new_author;
                    break;
                }
            }
            int n_u_more_authors;
            cout << "Would you like to add more authors that you like? Enter 1 for yes, 0 for no.";
            cin >> n_u_more_authors;
            if(n_u_more_authors == 1) {
                goto add_auth;
            }
            else {
                // go on with registration
            }
            ///////////////////////////////////////////////////
            int u_length;
            cout << "Do you have a maximum page length that you wish your recommended books to exceed? Enter 1 for less than 100, 2 for less than 500, 3 if no limit." << endl;
            cin >> u_length;
            if(u_length == 1) length_read = 100; //in future, check if recommended book is less than 100
            if(u_length == 2) length_read = 500; //in future, check if recommended book is less than 500
            if(u_length == 3) length_read = 0; // in future, recommend book regarless if u_length us 0
        }

            /////////////////////////////////////////

        else {
            cout << "Returning to main menu." << endl;
        }
    }

    void EditUser(User U) {
        string use, pass;
        cout << "Please enter username" << endl;
        cin >> use;
        cout << "Please enter your password" << endl;
        cin >> pass;
        //if authenticated, tell user about success. If not, tell user to try again
        string WhatChange;
        next_change:
        cout << "What would you like to edit: username, password, authors, genres, maximum number of pages desired, or quit?" << endl;
        cin >> WhatChange;

        if(WhatChange == "username") {
            cout << "Enter a new username" << endl;
            cin >> User_Name;
            cout << "You will be known as " << User_Name << " now." << endl;
            goto next_change;
        }

        if(WhatChange == "password") {
            cout << "Enter a new password" << endl;
            cin >> password;
            cout << "Your password has been updated." << endl;
            goto next_change;
        }

        if(WhatChange == "authors") {
            string new_fav_author;
            cout << "Enter a new favorite author to add to your profile." << endl;
            cin >> new_fav_author;
            for(int i = 0; i<10; i++) {
                if(fav_authors[i] == " ") {
                    fav_authors[i] = new_fav_author;
                    break; //does this leave for loop successfully? test it
                }
            }
            cout << "The genre " << new_fav_author << " has been added to your profile." << endl;
            goto next_change;
        }

        if(WhatChange == "genres") {
            string new_pref_genre;
            cout << "Enter a new favorite genre to add to your profile." << endl;
            cin >> new_pref_genre;
            for(int i = 0; i<10; i++) {
                if(gen_preference[i] == " ") {
                    gen_preference[i] = new_pref_genre;
                    break; //does this leave for loop successfully? test it
                }
            }
            cout << "The author " << new_pref_genre << " has been added to your profile." << endl;
            goto next_change;
        }

        if(WhatChange == "maximum pages") {

        }

        else {
            cout << "Invalid selection. Taking user back to main menu" << endl;
        }

        int more_gen;
        cout << "Do you have any more genre's you'd like to add? Press 1 if yes, 0 if no." << endl;
        cin >> more_gen;
    }

    string User_Book() {
        cout << "Hold on....." << endl;

        //limit to books < certain amount of pages
        //limit to

        cout << "Found one!!! :)" << endl;
    }
};

#endif //BOOKPROJECT_USER_H
