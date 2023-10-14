#include <iostream>
#include <cstdlib>

using namespace std;
bool gameWin(char comp, char you) {
    if (comp == you) {
        return false;
    } else if (comp == 's') {
        if (you == 'w') {
            return false;
        } else if (you == 'g') {
            return true;
        }
    } else if (comp == 'w') {
        if (you == 'g') {
            return false;
        } else if (you == 's') {
            return true;
        }
    } else if (comp == 'g') {
        if (you == 's') {
            return false;
        } else if (you == 'w') {
            return true;
        }
   }
}

int main() {
    char comp, you;
    int randNo = rand() % 3 + 1;

    if (randNo == 1) {
        comp = 's';
    } else if (randNo == 2) {
        comp = 'w';
    } else if (randNo == 3) {
        comp = 'g';
    }

    cout << "Comp Turn: Snake(s), Water(w) or Gun(g)?" << endl;
    cout << "Your Turn: Snake(s), Water(w) or Gun(g)?";
    cin >> you;

    if (you == 's' || you == 'w' || you == 'g') {
        bool result = gameWin(comp, you);
        cout << "Computer Choose: " << comp << endl;
        cout << "You choose: " << you << endl;

        if (result) {
            cout << "You Win!" << endl;
        } else if (result == false) {
            cout << "You Lose!" << endl;
        } else {
            cout << "The Game is Tie!" << endl;
        }
    } else {
        cout << "Wrong Choice!" << endl;
    }

    return 0;
}

