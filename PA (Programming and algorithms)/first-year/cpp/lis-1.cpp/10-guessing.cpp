/*
* Date: 01/05/2026
* Description:
* Simulate a guessing game. The program must generate a random number
* and the player needs to guess it.
* Each time the player enters a number, it must display whether the
* guess is too high, too low, or correct. When it is correct,
* display the number of guesses made.
* (That was hell to do.)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main() {
    srand(time(NULL));

    char choice = 'Y'; 

    cout << " Guessing Game [1 to 100] " << endl << endl;

    // get a secret number and starts the game
    while (choice == 'Y') {
        int secretnumber = 1 + (rand() % 100);
        int maxattempts = 6;
        bool correct = false;

        cout << "A number between 1 and 100 was drawn." << endl;
        cout << "You have " << maxattempts << " attempts to guess it." << endl << endl;

        // attempt system
        for (int attempt = 1; attempt <= maxattempts; attempt++) {
            int guess;

            cout << "Attempt " << attempt << " of " << maxattempts << ". Your guess: ";

            // if a invalid numer is write
            if (!(cin >> guess)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Please enter a valid number." << endl;
                attempt--;
                continue;
            }

            // if the player won
            if (guess == secretnumber) {
                cout << "Correct! The number was " << secretnumber
                     << ". You got it in " << attempt << " guess(es)!" << endl;
                correct = true;
                break;
            // if the number is too low    
            } else if (guess < secretnumber) {
                cout << "Too low! Try a bigger number." << endl;
            // if the number is too high
            } else {
                cout << "Too high! Try a smaller number." << endl;
            }
        }

        //if the player loses
        if (!correct) {
            cout << endl << "Out of attempts! The number was: " << secretnumber << "." << endl;
        }

        // after the game ends it will asks if the player wants to play another round
        cout << endl << "Play again? (Y/N): ";
        cin >> choice;
        choice = toupper(choice);

        if (choice != 'Y') {
            cout << endl << "Thanks for playing!" << endl;
        }
    }

    return 0;
}
