    // Mia Balicki Week 15 Coding B
    // Classes Assignment 


#include <iostream> 
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime> 

using namespace std;

class Critter {
private: 
    string name; 
    int health;
    int damage;
    int hunger;
    bool isAlive;

public:
    // Constructor
    Critter(string n) {
        name = n;
        health = 20;
        damage = 5;
        hunger = 0;
        isAlive = true;
    }

    // Getters 
    string getName() {return name;}
    int getHealth() {return health;}
    int getDamage() {return damage;}
    int getHunger() {return hunger;}
    bool getAlive() {return isAlive;}

    // Setters 
    void setHealth(int h) {health = h;}
    void setDamage(int d) {damage = d;}
    void setHunger(int h) {hunger = h;}
    void setAlive(bool a) {isAlive = a;}

    // Feed 
    void feed() {
        if (hunger == 0) {
            cout << name << "is full!\n";
            return;
        }
        hunger -= 3;
        if (hunger < 0) hunger = 0;
        cout << name << " happily eats and feels much better!\n";
    }

    // Listen 
    void listen() {
        cout << "\n---" << name << "'s Stats ---\n";
        cout << "Health:" << health << endl;
        cout << "Damage:" << damage << endl;
        cout << "Hunger:" << hunger << "/10\n";
        cout << "Alive:" << (isAlive ? "Yes" : "No") << endl;
        cout << "---------------------\n\n";
    }

    // Train 
    void train() {
        if (hunger > 10) {
            cout << name << "'s too hungry for trianing. Feed 'em first!\n";
            return;
        }

        if (hunger > 5) {
            cout << name << " growls : HunGRYYY!!!\n";
        }

        hunger++; 

        int chance = rand() % 2; 
        if (chance == 0) {
            damage++;
            cout << name << "trained hard! Damage increased.\n";
        } else {
            health++;
            cout << name << " toughened up! Health increased. \n";
        }
    }

    // Battle another Critter 
    void battle(string enemyName, int enemyHealth, int enemyDamage) {
        if (hunger > 10) { 
            cout << name << " is too ready to battle right now! Feed them fisrt though.\n";
            return;
        }
        if (hunger > 5) { 
            cout << name << " whines: \"I'm STARVING...\"\n";
        }
        
        hunger++; 
        cout << "\nA wild" << enemyName << "appears!\n";
        
        while (health > 0 && enemyHealth > 0) {
            cout << "\nChoose action:\n";
            cout << "1. Attack\n";
            cout << "2. Heal\n"; 
            cout << "3. Run\n";
            cout << "> ";

            int choice;
            cin>> choice;

            if (choice == 1) {

                if (choice == 1) {
                    cout << name << "attacks  for" << damage << "damage!\n";
                    enemyHealth -= damage;
                }
                else if (choice == 2 ) {
                    cout << name << "heals for 3 health.\n";
                    health += 3;
                }
                else if (choice == 3) {
                    cout << name << " ran away.\n";
                    return;
                }

                if (enemyHealth > 0) {
                    cout << enemyName << "hit back for" << enemyDamage << "damage!\n";
                    health -= enemyDamage;  
                }

                if (health <= 0) {
                    cout << name << "has fallen...\n";
                    isAlive =false;
                    return;
                }
            }

            cout << "\n" << name << "defeated" << enemyName << "!\n";

    }
};  // end of class Critters 

// Load enemy name from file 
vector<string> loadNames() {
    vector<string> names;
    ifstream file("name.txt");
    string line; 

    while (getline(file, line)) {
        if (!line.empty())
            names.push_back(line); 
        }

        return names;
    }
    
    int main() {
        srand(time(0));

        vector<string> enemyNames= loadNames();
        if (enemyNames.empty()) { 
            cout << "Error: names.txt is empty or missing.\n"; 
            return 1;
        }

        cout << "Name your critter: ";
        string playerName;
        cin >> playerName;

        Critter player(playerName);

        int choice = 0; 

        while (choice != 5 && player.getAlive()) {
            cout << "\n--- Main Menu ---\n";
            cout << "1. Feed\n";
            cout << "2. Train\n";
            cout << "3. Listen\n";
            cout << "4. Battle\n";
            cout << "5. Quit\n";
            cout << ">";
            cin>> choice;

            if (choice == 1) {
                player.feed();
            }
            else if (choice == 2 ) {
                player.train();
            }
            else if (choice == 3) {
                player.listen();
            }
            else if (choice == 4) {
                string enemy = enemyNames[rand() % enemyNames.size()];
                int eHealth = 10 + rand() % 10;
                int eDamage = 2 + rand() % 4;
                player.battle(enemy, eHealth, eDamage);
            }
    }
    cout << "Thanks for playing!\n";
    return 0;
    }
}