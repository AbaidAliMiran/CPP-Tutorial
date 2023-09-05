#include <iostream>
using namespace std;
int main() {
	
	char input;
	char vowels[5]={'a','e','i','o','u'};
	bool isVowel = false;

	cout << "Enter a character: ";
	cin >> input;

	for (int i = 0; i < 5; ++i) {
		
		if (input==vowels[i]) {
		isVowel=true;
		break;
		}
	}

	if (isVowel) {
	cout<<input<<" is a vowel."<<endl;
	} else {
	cout<<input<<" is not a vowel."<<endl;
	}
return 0;
}

