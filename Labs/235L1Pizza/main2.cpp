const int SFED = 2; const int SD = 14; const double SP = 8.39;
const int MFED = 5; const int MD = 18; const double MP = 13.25;
const int LFED = 9; const int LD = 24; const double LP = 15.78;
const double PI = 3.14159265;

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    //PART 1 Count your many pizzas
    int qty; int sQty = 0; int mQty = 0; int lQty = 0;
    cout << "Please enter how many guests to order for: " << flush;
    cin >> qty;
    //How many of each pizza
    int calcqty = qty;
    while(calcqty > 0){
        //Adding to large needed, medium needed, and small needed
        if(calcqty >=LFED){lQty++;calcqty-=LFED;}
        else if(calcqty >=MFED){mQty++;calcqty-=MFED;}
        else {sQty++;calcqty-=SFED;}
    }
    cout << lQty << " large pizzas, """ << mQty << " medium pizzas, and " << sQty << " small pizzas will be needed." << endl;
    cout << endl;
    //PART 2 - Serving Size
    //Compute the total area of pizza
    double tArea = lQty*PI*pow(LD/2,2) + mQty*PI*pow(MD/2,2) + sQty*PI*pow(SD/2,2);
    double areaPPerson = tArea / qty;
    //print output
    cout << fixed << setprecision(2) << "A total of " << tArea << " square inches of pizza will be ordered (" << areaPPerson << " per guest)." << endl << endl;

    //PART 3 - Paying the Piper
    //what percent tip
    int tip;
    cout << "Please enter the tip as a percentage (i.e. 10 means 10%): " << flush;
    cin >> tip;
    //compute price
    int price = round((lQty*LP + mQty*MP + sQty*SP) * (1.0+(static_cast<double>(tip)/100)));
    cout << "The total cost of the event will be: $" << price << endl;

    return 0;

}
