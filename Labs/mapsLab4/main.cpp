#include <set>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>
#include <iostream>
#include <utility>
#include <list>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) {

//// PART 1
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
    //making the new file name
    string st = argv[1];
    for (int i = 0; i < 4; i++) {
        st.pop_back();
    }
    //make the _set.txt file
    ofstream setFile(st + "_set.txt");

    for (set<string>::iterator it = unique.begin(); it != unique.end(); ++it) {
        setFile << ' ' << *it;
    }
    setFile.close();
//    cout << "arg name: " << st << endl;
    cout << "Number of word " << tokens.size() << endl;
    cout << "Number of unique words " << unique.size() << endl;
    cout << endl;

////Part 2
    ofstream vFile(st + "_vector.txt");
    for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++) {
        vFile << ' ' << *it;
    }
    vFile.close();
////Part 3
//    ofstream mFile(st + "_map.txt");
//    map<string, vector<string>> wordmap;
//    string last = "";
//    for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++) {
//        wordmap[last].push_back(*it);
//        last = *it;
//    }
//    for(map<string, vector<string>>::iterator it = wordmap.begin();it!=wordmap.end();it++){
//        mFile << it->first;
//        for(int i = 0;i<it->second.size();i++){
//            mFile << ", " << it->second[i];
//        }
//        mFile<< endl;
//    }mFile.close();
////Part 4
//    string state = "";
//    for(int i = 0; i < 100; i++){
//        cout << wordmap[state] << " ";
//        state = wordmap[state];
//    }
//    cout << endl;
////Part 5
//    map<string, vector<string>>::iterator it5= wordmap.begin();
//    for(int i =0; i<5 ;i++) {
//        it5++;
//    }
//    for(int i=0;i<it5->second.size();i++){
//        cout << it5->second[i];
//    }cout<<endl;
//
//    //Better sermon
//    srand(time(NULL)); // this line initializes the random number generated
//    // so you dont get the same thing every time
//    last = "";
//    for (int i = 0; i < 100; i++) {
//        int ind = rand() % wordmap[last].size();
//        cout << wordmap[last][ind] << " ";
//        last = wordmap[last][ind];
//    }
//    cout << endl;

////Part 6
    int M=2;
    map<list<string>, vector<string>> wordmap;
    list<string> state;
    for (int i = 0; i < M; i++) {
        state.push_back("");
    }

    for (vector<string>::iterator it=tokens.begin(); it!=tokens.end(); it++) {
        wordmap[state].push_back(*it);
        state.push_back(*it);
        state.pop_front();
    }

    //Generate the code
    state.clear();
    for (int i = 0; i < M; i++) {
        state.push_back("");
    }
    for (int i = 0; i < 100; i++) {
        int ind = 1;
        if (wordmap[state].size() != 0){ind = rand() % wordmap[state].size();}
        else{ind = rand() % 2;}
        cout << wordmap[state][ind]<<" ";
        state.push_back(wordmap[state][ind]);
        state.pop_front();
    }


}