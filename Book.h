//
// Created by Rajbi on 6/25/2019.
//

#ifndef BOOKPROJECT_BOOK_H
#define BOOKPROJECT_BOOK_H

class Book {
private:
    string author; string genre; string title;
    int ISBN; int pageLength; float rating;
public:
    Book(string name, string auth, string gen, int ISB, int pages, float rate){
        cout << "What is the name of the book?" << endl;
        title = name;

        cout << "Who is the author?" << endl;
        author = auth;

        cout << "What is the genre?" << endl;
        genre = gen;

        cout << "What is the ISBN?" << endl;
        ISBN = ISB;

        cout << "What is the page length?" << endl;
        pageLength = pages;

        cout << "What is the average rating?" << endl;
        rating = rate;
    }
};

#endif //BOOKPROJECT_BOOK_H
