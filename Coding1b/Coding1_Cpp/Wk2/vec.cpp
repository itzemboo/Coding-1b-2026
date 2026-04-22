// Mia Balicki CCoding 1B
// Vectors, Iterators and Algorithims 

#include <iostream> 
#include <string>       // for getline()
#include <vector>       // for vectors and iterators 
#include <algorithm>   // for find(), sort(), random_shuffel()

using namespace std;

int main() {
    cout << "Let's learn about vectors!\n";

    string input;

    do{
        cout << "What would you like to do?\n";
        cout << "You can type 'push'.\n";

        getline(cin, input);    //get input from the player 

        if(input == "push") {
        }
            cout << "Let's make our first vector of strings.\n";
        
            vector<string> names;

            //add names with names.pushback 
            names.pushback("Mia");
            names.pushback("Ari");
            names.pushback("Joe");
            names.pushback("Elah");
            names.pushback("Kristina");

            cout << "here are your names!\n";
            for(int i = 0; i < names.size(); i++) {
                cout << "   " names[i] << "\n";
            }

            cout << "There are" << name.size() << "names.\n\n";

            cout << *(name.end() -1 ) << "is sour. Lest get rid of him.\n";
            
            names.pop_back();       // pop_back() removes the last element from the vector

            cout << "Here are your names!\n"; 
            for(int i = 0; i < names.size(); i++) {
                cout << "   " names[i] << "\n";
        }
        } //end of push 
        else if(input == "find"){
            cout << "Let's try to use the find algorithm.\n";

            vector<string> favs ={"Star Wars", "Kill Bill", "Ponyo"};

            //building an iterator, it points to a spot in a vector 
            vector,string>::iterator iter;

            cout ,, "here are you favs!\n";
            for(int i = 0; i < favs.size(); i++){
                cout << "   " << favs[i] << "\n"; 
            }
            
            // make iter point at the first element in vector 
            iter = favs.begin();

            //the astric 
            cout ,, "inter is pointing at" << *iter << "\n";

            iter += 1;

            cout << "Now iter is pointing at" << *iter << "\n";

            cout << "What name would you like to select. \n";
            getline(cin, input);
            // use the find algorithim

            find(favs.begin(), favs.end(), "Ponyo"); 

            if(iter != favs.end()) {
                cout << "We've found" << *iter << "\n";
                cout << "Would you like to change fav.\n";
                getline(cin, input);
                if (input == "yes") { 
                    cout << "What would you like to change fav to\n"; 
                    getline(cin, input); 

                    *iter = input;      //change the fav
                }

                cout << "Here are your updated favs!\n"; 
                for(int i = 0; < favs.size(); i++) {
                    cout << "   " favs[i] << "\n"; 
                }
            }

            else{
                cout << "We couldn't find that name.\n";

            }


        }
        else if(input == 'quit'); {
            cout << "Thanks for playing.\n";
            break;
        }
        else {
            cout << "I didn't recognise that command. \n";

            
        }

    }while(true);

    //  create a new vector of strings 

    return 0;

}