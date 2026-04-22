// Mia Balicki Week 4 
// Writing to and reading from files

#include <iostream>
#include <string> 
#include <vector> 
#include <fstream>      // file stream

using namespace std;


void read(string path = save.txt) {


    //create a new var, and try to open a file
    string line; 
    ifstream readFile(path); 
    if (readsFile.is_open()) {
        cout << "The file is open.\n"
        while (getline(readFile, line)) {
            cout << line << endl;
        }
    }
    else { 
        cout << "Couldn't open that file.\n"
    
    }

    // after we are done we need to close the file 
    readFile.close();
}

void read(vetor<string>& vec, string path = save.txt);
     string line; 
    ifstream readFile(path); 
    if (readsFile.is_open()) {
        cout << "The file is open.\n"
        while (getline(readFile, line)) {
           vec.pushback(line);
        }
    }

else {
    cout << "Couldn't open that file.\n"; 

    
void write (vector<string& vec, string path = "save.txt") {
        cout <<
    ofstream writeFile(path);

        if(writeFile.is_open()) {
            for(int i = 0; i <vec.size)
                writeFile << vec[i] <<endl; 
        }

}

int main() {
    cout << "Let's write to a file!\n"
    vector<string> favs; 
    
    string path = "save.txt";

    cout << "What file would you like to open.\n"; 
    getline(cin, input); 
     if(input != "") { 
        path = input;       // this lets us open different files!
    }


        read(path);           // show current names 
        read(favs, path);       //add the names to the vector
    
    

    cout << "What names would you like to add?\n";
    cout << "enter an empty line to stop.\n";


    while (input != "") {
        cout << ">"; 
        getline =(cin, input);
        if(input == "") {
            break; 
        }


        //send to file 
        // writeFile << input << endl; 
        favs.push_back(input);
    
    }
    
    write(favs, path);

    return 0;
}