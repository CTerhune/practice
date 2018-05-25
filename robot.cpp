
#include <iostream>
#include "robot.h"
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

robot::robot(int init_dmg) {
	dmg = init_dmg;
};
robot::robot() {
};

string robot::getName() {
 	return name;
};

int robot::getHealth() {
	return health;
};

int robot::getDmg() {
	return dmg;
};
int robot::getType() {
	return type;
};

int robot::checkLife() {
	if(health > 0) {
		return 0;
	}
	if(health <= 0) {
		return 1;
	}
};

void robot::setName() {
	cout << "Enter a name: ";
	cin >> name;
};

void robot::setHealth() {
	cout << "Enter an amount: ";
	cin >> health;
};
void robot::setType() {
	cout << "Choose a class for this fighter: ";
	cin >> type;
};
void robot::attack(robot& other_robot) {
	other_robot.loseHealth(dmg);
};
void robot::loseHealth(int health_lost) {
	health = health - health_lost;
};
tank::tank(int init_health) {
};
void tank::extraHealth(int health_add) {
	health_add = health + 3;
};
mage::mage(int init_dmg) {
};
void mage::extraDmg(int dmg_add) {
	dmg_add = dmg + 3;
};
chad::chad(int init_dmg, int init_health) {
};
void chad::extraDmg(int dmg_add) {
	dmg_add = dmg + 3;
};
void chad::extraHealth(int health_add) {
	health_add = health + 3;
};

int main() {
// team1.at(0).getHealth(); 'chain methods' 
        vector <robot> team1;
        team1.push_back(t1);
        team1.push_back(t2);
        team1.push_back(t3);
        team1.push_back(t4);

        vector <robot> team2;
        team2.push_back(t5);
        team2.push_back(t6);
        team2.push_back(t7);
        team2.push_back(t8);

	cout << "1. Normal $5" << endl << "2. Tank $15" << endl << "3. Mage $15" << endl << "4. Chad $25" << endl;
	srand((unsigned)time(0));
	int random_integer = rand();

	if (type == 2) {
		team1.push_back(new tank());
	}
	if(type == 1) {
		team1.push_back(new robot());
	}
	if(type == 3) {
		team1.push_back(new mage());
	}
	if(type == 4) {
		team1.push_back(new chad());
	}
        if (type == 2) {
                team2.push_back(new tank());
        }
        if(type == 1) {
                team2.push_back(new robot());
        }
        if(type == 3) {
                team2.push_back(new mage());
        }
        if(type == 4) {
                team2.push_back(new chad());
        }


	team1.at(0).setName();
	team1.at(0).setDmg();
	team1.at(0).setType();

	team1.at(1).setName();
	team1.at(1).setDmg();
	team1.at(1).setType();

	team1.at(2).setName();
	team1.at(2).setDmg();
	team1.at(2).setType();

	team1.at(3).setName();
	team1.at(3).setDmg();
	team1.at(3).setType();

	team1.at(4).setName();
	team1.at(4).setDmg();
	team1.at(4).setType();

	team1.at(5).setName();
	team1.at(5).setDmg();
	team1.at(5).setType();

	team1.at(5).setName();
	team1.at(5).setDmg();
	team1.at(5).setType();

	team1.at(6).setName();
	team1.at(6).setDmg();
	team1.at(6).setType();

	team1.at(7).setName();
	team1.at(7).setDmg();
	team1.at(7).setType();

	team1.at(8).setName();
	team1.at(8).setDmg();
	team1.at(8).setType();



if((t1.getHealth() + t2.getHealth() + t3.getHealth() + t4.getHealth()) > 30) {
	cout << endl << "Your team health exceeds 30, you are disqualified, team 2 wins" << endl << endl;
	return 0;
}
if((t5.getHealth() + t6.getHealth() + t7.getHealth() + t8.getHealth()) > 30) {
	cout << endl << "Your team health exceeds 30, you are disqualified, team 1 wins." << endl << endl;
	return 0;
}


	cout << endl << "Type for robot 1 is: " << t1.getType() << endl;
	cout << "Type for robot 2 is: " << t2.getType() << endl;
	cout << "Type for robot 3 is: " << t3.getType() << endl;
	cout << "Type for robot 4 is: " << t4.getType() << endl;
	cout << "Type for robot 5 is: " << t5.getType() << endl;
	cout << "Type for robot 6 is: " << t6.getType() << endl;
	cout << "Type for robot 7 is: " << t7.getType() << endl;
	cout << endl << "Type for robot 8 is: " << t8.getType() << endl;

	cout << endl << "Name for Robot 1 is: " << t1.getName() << endl;
	cout << "Name for Robot 2 is: " << t2.getName() << endl;
	cout << "Name for Robot 3 is: " << t3.getName() << endl;
	cout << "Name for Robot 4 is: " << t4.getName() << endl;
	cout << "Name for Robot 5 is: " << t5.getName() << endl;
	cout << "Name for Robot 6 is: " << t6.getName() << endl;
	cout << "Name for Robot 7 is: " << t7.getName() << endl;
	cout << "Name for Robot 8 is: " << t8.getName() << endl << endl;



	cout << "Health for " << t1.getName()  << " is: " << t1.getHealth() << endl;
	cout << "Health for " << t2.getName()  << " is: " << t2.getHealth() << endl;
	cout << "Health for " << t3.getName()  << " is: " << t3.getHealth() << endl;
	cout << "Health for " << t4.getName()  << " is: " << t4.getHealth() << endl;
	cout <<  endl << "Health for team 1 is: " << t1.getHealth() + t2.getHealth() + t3.getHealth() + t4.getHealth() << endl << endl;
	cout << "Health for " << t5.getName()  << " is: " << t5.getHealth() << endl;
	cout << "Health for " << t6.getName()  << " is: " << t6.getHealth() << endl;
	cout << "Health for " << t7.getName()  << " is: " << t7.getHealth() << endl;
	cout << "Health for " << t8.getName()  << " is: " << t8.getHealth() << endl << endl;
	cout <<  endl << "Health for team 2 is: " << t5.getHealth() + t6.getHealth() + t7.getHealth() + t8.getHealth() << endl << endl;


	cout << "Damage for " << t1.getName()  << " is: " << t1.getDmg() << endl;
	cout << "Damage for " << t2.getName()  << " is: " << t2.getDmg() << endl;
	cout << "Damage for " << t3.getName()  << " is: " << t3.getDmg() << endl;
	cout << "Damage for " << t4.getName()  << " is: " << t4.getDmg() << endl;
	cout << "Damage for " << t5.getName()  << " is: " << t5.getDmg() << endl;
	cout << "Damage for " << t6.getName()  << " is: " << t6.getDmg() << endl;
	cout << "Damage for " << t7.getName()  << " is: " << t7.getDmg() << endl;
	cout << "Damage for " << t8.getName()  << " is: " << t8.getDmg() << endl << endl;

	int fighter_t1;
	int fighter_t2;
while(team1.at(0).getHealth() + team1.at(1).getHealth() + team1.at(2).getHealth() + team1.at(3).getHealth() > 0 && team2.at(0).getHealth() + team2.at(1).getHealth() + team2.at(2).getHealth() + team2.at(3).getHealth() > 0) {
	cout << endl << "Choose a fighter from team 1 (0-3)" << endl;
	cin >> fighter_t1;
	cout << endl << "Choose a fighter from team 2 (0-3) that will be attacked by your previous choice" << endl;
	cin >> fighter_t2;

	team1.at(fighter_t1).attack(team2.at(fighter_t2));
	team1.at(fighter_t2).attack(team1.at(fighter_t1));
	cout << "" << team1.at(fighter_t1).getName() << " attacked " << team2.at(fighter_t2).getName() << " for " << team1.at(fighter_t1).getDmg() << endl;
	cout << "" << team2.at(fighter_t2).getName() << " attacked " << team1.at(fighter_t1).getName() << " for " << team2.at(fighter_t2).getDmg() << endl;


        if(team1.at(fighter_t1).checkLife() == 0) {
                cout << "Team 1's robot is alive" << endl;
        } else {
                cout << "Team 1's robot is dead" << endl;
        }
	if(team2.at(fighter_t2).checkLife() == 0) {
		cout << "Team 2's robot is still alive" << endl;
	} else {
		cout << "Team 2's robot is dead" << endl;
	}
}

if(t5.getHealth() + t6.getHealth() + t7.getHealth() + t8.getHealth() < 0) {
	cout << "Team 1 wins!" << endl;
	return 0;
}
if(t1.getHealth() + t2.getHealth() + t3.getHealth() + t4.getHealth() < 0) {
	cout << "Team 2 wins!" << endl;
	return 0;
}




	return 0;
}
