// Coding 1b Fav game assignment 



#include <iostream> 
#include <vector>
#include <alglorithm>
#include <string>

using namespace std;

int main() {
    vecotr<string> games;
    string command;

    while (true) {
        cout << "\nAvailable commands:\n"; 
        cout << "add\n";
        cout << "edit\n"; 
        cout << "remove\n";
        cout << "show\n"
        cout << "quit\n"
        cout << "Enter command:";

        cin >> command;

        if (command == "add") {
            cout << "Enter game name to add ";
            cin.ignore ();
            string game; 
            getline(cin, game);
            games.pushback(game);
            cout << "Game added.\n";
        }
    
    else if (command == "edit") {
        cout << "Enter the name your game to edit"; 
        cin.ignore();
        string oldName; 
        getline(cin, oldName); 
        
        auto it ! = find(game.begin(), games.end(), oldName)

        if (it != games.end()) {
            cout << "Enter the new game:";
            string newName; 
            getline(cin, newName);
            *it = newName;
            cout << "Game updated.\n"
        } else {
            cout << "Game not found.\n"
        }
    }

    else if (command == "remove") {
        cout << "Enter the name of the game to remove";
        cin.ignore();
        string name;
        getline(cin, name);

        auto it = find(games.begin(), game.end(), name);
        
        if (it != game.end()) {
            game.end(it);
            cout << "Game removed.\n"
        } else {
            cout << "Game not found.\n";
        }
    }

    else if (command == "show") {
        if (games.empty()) {
            cout << "No games in the list.\n";
        } else {
            sort(games.begin(), games.end());
            cout "\nGames (sorted):\n";
            for (auto it = gamews.begin(); it != games.end(); ++it ) {
                cout << " - " << *it << "\n" 
            }
        }
    }
}

