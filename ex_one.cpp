#include<iostream>
using namespace std;
void roll_the_dice() {
    srand(time(0));
    int i = 0;
    while (i == 0) {

        i = rand() % 7;
        if (i > 0) cout << i << " ";
    }
    i = 0;
    while (i == 0) {

        i = rand() % 7;
        if (i > 0) cout << i << " ";
    }


}

int main() {
    roll_the_dice();

}