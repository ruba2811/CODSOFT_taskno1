#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    srand(time(0));  
    int randomNumber = rand() % 100 + 1; 
    int guess;
    bool correct = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    while (!correct) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            correct = true;
        }
    }

    return 0;
}