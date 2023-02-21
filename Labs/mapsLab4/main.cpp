#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    vector<string> tokens;
    set<string> unique;
    string next_line; // Each data line
    ifstream in(argv[1]);
    while (getline(in, next_line)) {
        istringstream iss(next_line);
        string token;
        while (iss >> token) {
            string nopunct = "";
            for (auto &c: token) { // Remove Punctuation
                if (isalpha(c)) {
                    nopunct += c;
                }
            }
            tokens.push_back(nopunct);
            unique.insert(nopunct);
            // cout << token<<endl;
        }
    }
        cout << "Number of words " << tokens.size() << endl;
        cout << "Number of unique words " << unique.size() << endl;
        for (set<string>::iterator it = unique.begin(); it != unique.end(); ++it)
            cout << ' ' << *it;
        cout << endl;
}
