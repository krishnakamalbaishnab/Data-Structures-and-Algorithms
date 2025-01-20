#include<iostream>
#include<cstdlib>  // For rand() and srand()
#include<ctime>    // For time()
using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator with the current time
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    // Start guessing loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too High! Try again." << endl;
        } else if (guess < number) {
            cout << "Too Low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != number);

    return 0;
}
