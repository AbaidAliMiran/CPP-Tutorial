#include<iostream>
#include<stdlib.h>
using namespace std;

void Name();
void PartyChoice();
void VotingDetails();
void WinnerDetails();
void user_choice();
int flag = 0;

int Parties[3];
string PartyNames[3] = {"PTI","PMLN","PPP"};

int main()
{
	do
	{
		Name();
        PartyChoice();  
        cout<<"Do you like to Continue Press 1 to continue and O to exit."<<endl;
        cin>>flag;
        user_choice();
	}
	while(flag==1);
	VotingDetails();
}

void Name()
{
	string name;
	cout<<"Please enter your Name:"<<endl;
	cin>>name;
}

void PartyChoice()
{
    int choice;
    cout << "For which party you want to vote: \n1. PTI\n2. PMLN\n3. PPP" << endl;
    cin >> choice;

    if (choice >= 1 && choice <= 3)
    {
        Parties[choice - 1]++; 
        cout<<"Thanks vote casted for "<<PartyNames[choice-1]<<endl;
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }
}
void VotingDetails()
{
	cout<<"Voting Details"<<endl;
	for(int i = 0; i<=2;i++)
	{
		cout<<"Total Vote for "<<PartyNames[i]<<" are "<<Parties[i]<<endl;
	}
	WinnerDetails();
}

void WinnerDetails()
{
	int temp = 0;
	int index = 0;
	bool flag = false;
	bool equalityflag = false;
	cout<<"Voting Details"<<endl;
	for(int i=0; i<=2; i++)
	{
		if(Parties[0]<Parties[i] && flag!=true)
		{
			temp = Parties[i];
			index = i;
			flag = true;
		}
		else if(temp<Parties[i])
		{
			temp =  Parties[i];
			index = i;
		}
		else if (Parties[i] == temp)
		{
			cout<<"Votes for "<<PartyNames[i]<<" and "<<PartyNames[index]<<" are same"<<endl;
			equalityflag = true;
		}
	}
	if(equalityflag != true)
	cout<<"Winner is "<<PartyNames[index];
}

void user_choice()
{
	        if (flag == 1)
        {
            system("cls");
        }
        else if (flag != 0 && flag!=1)
        { 
            do{
            	    cout << "Invalid choice. Please enter 0 or 1." << endl;
                    cin>>flag;
                    
			}while(flag!=0 && flag!=1);
        system("cls");
        }
}
