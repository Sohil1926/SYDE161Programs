#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int computer_score = 0, user_score = 0, winning_score = 3;
    string computer_choice_1 = "rock", computer_choice_2 = "paper", computer_choice_3 = "scissors", computer_choice, user_choice;

    srand(time(0));

    while ((computer_score < winning_score) && (user_score < winning_score)) {
        int random = rand() % 3;
        if (random == 0)
            computer_choice = computer_choice_1;
        else if (random == 1)
            computer_choice = computer_choice_2;
        else
            computer_choice = computer_choice_3;

        cout << "Enter your choice (rock, paper, scissors): ";
        cin >> user_choice;

        cout << "Computer chose: " << computer_choice << endl;
        cout << "You chose: " << user_choice << endl;

        // Compare choices and update scores
        if (user_choice == computer_choice) {
            cout << "It's a tie!" << endl;
        } else if (
            (user_choice == "rock" && computer_choice == "scissors") ||
            (user_choice == "paper" && computer_choice == "rock") ||
            (user_choice == "scissors" && computer_choice == "paper")
        ) {
            cout << "You win this round!" << endl;
            user_score++;
        } else {
            cout << "Computer wins this round!" << endl;
            computer_score++;
        }

        // Display scores
        cout << "Scores: Computer " << computer_score << " - " << user_score << " You" << endl;
        cout << "--------------------------" << endl;
    }

    // Determine the overall winner
    if (computer_score >= winning_score) {
        cout << "Computer wins the game!" << endl;
    } else {
        cout << "You win the game!" << endl;
    }

    return 0;
}
