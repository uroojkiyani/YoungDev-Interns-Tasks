#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing user input to a file
    ofstream out("output.txt");
    cout << "Enter text to write into file: ";
    string text;
    getline(cin, text);
    out << text;
    out.close();

    // Reading from the file and printing it
    ifstream in("output.txt");
    string line;
    cout << "\nReading from file:\n";
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();

    return 0;
}