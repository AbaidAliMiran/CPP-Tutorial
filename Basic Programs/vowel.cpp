#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        switch(ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << ch << " is a vowel";
                break;
            default:
                cout << ch << " is a consonant";
        }
    } else {
        cout << "Error: Please enter a lowercase alphabet (a-z)"<<endl;
        main();
    }

    return 0;
}

