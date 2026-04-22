// Fav game Assignment 


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std; 

int main() {
    vector<string> games;
    string command;

    while (true) {
        cout << "\nAvailable commands:\n";
        cout << "add\n";
        cout << "edit\n"; 
        cout << "remove\n"; 
        cout << "show\n";
        cout << "quit\n"; 
        cout << "Enter command: ";

        cin >> command;

        if (command == "add") {
            cout << "Enter game name to add:";
            cin.ignore(); 
            string game; 
            getline(cin, game); 
            games.push_back(game);
            cout << "Game added.\n";
        }

        else if (command == "edit") {
            cout << "Enter name of the game to edit.:"; 
            cin.ignore(); 
            string oldName; 
            getline(cin, oldName);

            auto it = find(games.begin(), games.end(), oldName);

            if (it != games.end()) {
                cout << "Enter new game name:"; 
                string newName;
                getline(cin, newName);
                *it = newName;
                cout << "Game updated\n";
            } else {
                cout << "Game not found.\n";
            }
        }

        else if (command == "remove") {
            cout << "Enter the name og the game to remove"; 
            cin.ignore(); 
            string name; 
            getline(cin, name);

             auto it = find(games.begin(), games.end(), name);

             if (it !=games.end()) {
                games.erase(it);
                cout << "Game removed.\n";
             } else {
                cout << "Game not found.\n";
             }
        }

        else if (command == "show") {
            if (games.empty()) {
                cout << "No games in the list.\n";
            } else {
                sort(games.begin(), games.end());
                cout << "\nGames (sorted):\n";
                for (auto it = games.begin(); it != games.end(); ++it) {
                    cout << "-" << *it << "\n";
                }
            }
        }

        else if (command == "quit") {
            cout << "Goodbye!!!\n";
            break;
        }
        
        else {
            cout << "Unknown command";
        }
    }

    return 0;
}