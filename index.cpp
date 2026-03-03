#include <iostream>
using namespace std;
#include <string>

struct myHeart {
    int ourNumber;
    string fact = "You and I Will Always Be With Each Other";
    string shatteredHeart = " I would be broken without you";
    string MyHeart = "I Love You, You complete me, You Will Alwyas Be A Part Of My Heart,";
    string notFact = "Wha do you mean Error?, We Ain't Ever Lettin Go Of Each Other :3";
};

int main () {
    myHeart Heart;

    cout << "To Melany: " << endl;

    cout << Heart.fact << endl;

    cout << "Enter 2110 or 404:" << endl;
    cin >> Heart.ourNumber;
    
    
    if(Heart.ourNumber == 2110) {
        cout << Heart.MyHeart << Heart.shatteredHeart << endl;
    } else if (Heart.ourNumber = 404) {
        cout << Heart.notFact << endl;
    } else {
        cout << "What the fuck are you typin" << endl;
    }
}