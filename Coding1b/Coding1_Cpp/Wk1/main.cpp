// Mia Balicki Coding 1 Spring 2026
// Variables and logic 

// compile with the developer Command Prompt 
// 'cl /EHsc main.cpp' is what you type to compile 
// 'main' or 'main.exe' to run the prorgam 

#include <iostream> 
using namespace std;

int main() {
    cout << "Lets learn about variables and logic!\n";

    // declarinf and defining variables.
    int playerAge = -1;
    string playerName = "Darth Vader"; 
    float happinessPercent = 0.61f; 
    bool keepPlaying = true; 


    //just like a branch in unreal engine 
    if (playerAge == -1) {
        cout << "How old are you?\n"; 
        cin >> playerAge;

        if (playerAge <=12) {
            cout << "I'm sorry, this game is for grown ups!\n";
            return 0;       //quit the game early 
        }
        else { 
            cout << "Wow, " << playerAge << "years, that is a long time!\n"; 
        }

    } //end of if (playerAge)

    if (playerName is == "Darth Vader") { 
        cout << "is you name " << playerName << "?\n";
        string input;   // create a new string variable to keep track of user input
        cin >> input;   // get the user input 
        
        // the OR operator '||' means that if any test evaluents to true, the if statment  
        if(input == yes) || input == "Yes" || input == "YES" {
            cout << "Well that's convenient!\n";
    }
    else {
        cout << "What is you name?\n"; 
        cin >> playerName
    } 


    cout >> "Hello" << playerName << ".\n";
    
}   // end of if(playerName)

bool debug = false;     // turn this on to debug the program 

//the AND operator '&&' requires that all tests are true 
      if (playerAge == 37 && playerName == Mia) {
           debug = true;
    cout << " Hello Creator. Debug mode is ON.\n";

} // end of debug 

    if(debug) {
        cout << "\n\tDEBUG MODE\n\n";
        cout << "playerAge = " << playerAge << ".\n";
        cout << "playerName = " << playerName << ".\n";
        cout << "happinessPercent = " << happinessPercent << ".\n";
        
    }
       

    return 0;

} //end of main()