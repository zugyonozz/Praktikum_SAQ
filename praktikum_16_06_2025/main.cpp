#include <iostream>
using namespace std ;

class Hero {
private :
	string name ;
	string role ;

public :
	Hero() {
		this->name = "" ;
		this->role = "" ;
	}
	Hero(string name, string role) {
		this->name = name ;
		this->role = role ;
	}
	string getName() {
		return this->name ;
	}
	string getRole() {
		return this->role ;
	}
	void print() {
		cout << "Hero\t: " << this->name << "\n" ;
		cout << "Role\t: " << this->role << "\n" ;
	}
} ;

int main() {
	Hero heroes[5] = {
		{
			"Argus", 
			"Fighter"
		}, {
			"Nana",
			"Mage"
		}, {
			"Ling",
			"Hyper"
		}, {
			"Grock",
			"Tank"
		}, {
			"Miya",
			"Marksman"
		}
	};
	Team myDraft(heroes) ;
	myDraft.showDraftPick() ;

	return 0 ;
}





// --------------------------------------------------------------------------//
class Team {
private :
	Hero hero[5] ;

public :
	Team(Hero hero[5]) {
		for(int i = 0; i < 5; i++) {
			this->hero[i] = {
				hero[i].getName(), 
				hero[i].getRole()
			} ;
		}
	}
	void showDraftPick() {
		for(int i = 0; i < 5; i++) {
			cout << "-------------------------------------------------\n" ;
			cout << "Hero\t: " << this->hero[i].getName() << "\n" ;
			cout << "Role\t: " << this->hero[i].getRole() << "\n" ;
		}
		cout << "-------------------------------------------------\n" ;
	}
} ;
// ------------------------------------------------------------------------ //