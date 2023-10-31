#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class RockPaperScissors{
	private:
		char comp, you;
		int result;
	public:
		RockPaperScissors(){
			srand(time(0));
    		int randNo = rand() % 3 + 1;

    		if (randNo == 1) {
        		comp = 's';
    		} else if (randNo == 2) {
        		comp = 'w';
    		} else if (randNo == 3) {
        		comp = 'g';
    		}
		}
		void user_choice(){
			cout << "Your Turn: Snake(s), Water(w) or Gun(g)?";
    		cin >> you;
		}
		bool gameWin(char comp, char you) {
			if (comp == 's') {
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
     void printResult() {
     	result = gameWin(comp,you);
        if (you == 's' || you == 'w' || you == 'g') {
        	cout << "Computer Choose: " << comp << endl;
        	cout << "You choose: " << you << endl;
        	if (comp == you){
    			cout << "The Game is Tie!" << endl;
			}else if (result) {
       	  		cout << "You Win!" << endl;
        	} else if (result == false) {
            	cout << "You Lose!" << endl;
       		} 
        } else {
        	cout << "Wrong Choice!" << endl;
    }
}

		
};


int main() {
	RockPaperScissors rps;
    cout << "Comp Turn: Snake(s), Water(w) or Gun(g)?" << endl;
    rps.user_choice();
    rps.printResult();
    return 0;
}

