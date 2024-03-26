#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Welcome to the rock-paper-scissors game!"
         << "\nChoose between rock, paper, and scissors to compete against a computer."
         << "\n\nYour move: ";
    string a;
    int b, c = 3;
    cin >> a;
    if(a != "rock" && a != "paper" && a != "scissors") {
        cout << "You are an idiot, ha haha ha ha-ha-ha!";
        return 0;
    }
    srand(time(NULL));
    while(c == 3) {
        b = rand() % 3;
        cout << "Computer's move: ";
        if(b == 0) {
            cout << "rock\n";
            if(a == "paper") {
                c = 1;
            } else if(a == "scissors") {
                c = 2;
            }
        } else if(b == 1) {
            cout << "paper\n";
            if(a == "rock") {
                c = 2;
            } else if(a == "scissors") {
                c = 1;
            }
        } else {
            cout << "scissors\n";
            if(a == "rock") {
               c = 1;
            } else if(a == "paper") {
               c = 2;
            }
        }
        if(c != 3) {
            if(c == 1) {
                cout << "You won!";
            } else {
                cout << "You lost! Better luck next time";
            }
            return 0;
        }
        cout << "It's a tie! Try again"
             << "\n\nYour choice: ";
        cin >> a;
    }
}
