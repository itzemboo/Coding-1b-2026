// Mia Balicki Coding 1B Spring 2026
// Random Numbers, Switch Statements & While Loops 


#include <iostream>
#include <cstdlib>          // for strand and ran
#include <ctime>            // for time 

using namespace std; 

int main() {
    // only once, at the beginning of the program 
    // seed the random number generator 
    srand(time(0)); 

    cout << "Random numbers. \n";

    cout << "Here is our first random number: " << rand() << ".\n";

    int counter = 0;
    while(counter++ <10) {
        int number = rand();
        int min =50;
        int max = 100; 
        int range = max - min;      // 50
        int  clampNumber = (number % range) + min;

        cout << clampNumber << endl; 
    }

    // Set Variables 
        // the random number 
        int number = (rand() % 10 ) + 1; 
        
        // the guess/input 
        int guess = -1; 

    // start loop 
    while(true) {
    // ask for the player's guess between 1 and 10 (inclusive)
    cout << "I'm thinking of a number between 1 and 10. Can you guess is?\n>>";
    // get player's guess 
        cin >> guess;
    // evaluate the player's guess for
        // too high
        if(guess > number){ 
            cout << "Too high!\n";
        } 
        // too low 
        else if(guess < number) {
            cout << "Too low!\n"; 
        }
        // correct!
        else {
            cout << "That's right! Congrats!\n";
            // break loop 
            break;
        }
    }// if incorrect guess, keep looking!
    return 0;


}