/*
Author: Eli Keli
Date: October 24
Description: Inheritance Excercise
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

class Movie {
    public:
        string title;
        string director;
        int duration; // in minutes
        float rating;

        Movie(string title, string director, int duration, float rating) {
            this->title = title;
            this->director = director;
            this->duration = duration;
            this->rating = rating;
        }

        void display() {
            cout << "Title: " << title << endl;
            cout << "Director: " << director << endl;
            cout << "Duration: " << duration << endl;
            cout << "Rating: " << rating << endl;
        }

        void rateMovie(float newRating) {
            if (newRating >= 1 && newRating <= 5) {
                rating = newRating;
                cout << "New Rating: " << rating << endl;
            } else {
                cout << "Invalid rating" << endl;
            }
        }
};

int main() {
    Movie movie("Inception", "Christopher Nolan", 148, 4.8);

    movie.display();
    movie.rateMovie(5.0);
    movie.rateMovie(6.0);

    return 0;
}