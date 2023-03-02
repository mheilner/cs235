#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> lst {23, 14, 65, 3, 19, 2, 71, 12, 8, 61, 5, 25};

    for(int i = 0; i < lst.size() - 1; i++){
        int min = i;
        for(int j = i+1;j < lst.size(); j++){
            if(lst[j] < lst[min]){min = j;}
        }

        int temp = lst[i];
        lst[i] = lst[min];
        lst[min] = temp;
    }

    for(int i = 0; i < lst.size(); i++){
        cout << lst[i] << ", ";
    }
    cout << "" << endl;
}
