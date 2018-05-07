#include <iostream>
#include "robot.h"
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

robot::robot(int init_dmg) {
	dmg = init_dmg;
}

string robot::getName() {
 	return name;
}

int robot::getHealth() {
	return health;
}

int robot::getDmg() {
	return dmg;
}

int robot::checkLife() {
	if(health > 0) {
		return 1;
	}
	if(health <= 0) {
		return 0;
	}
}

void robot::setName() {
	cout << "Enter a name: ";
	cin >> name;
}

void robot::setHealth() {
	cout << "Enter an amount: ";
	cin >> health;
}
void robot::attack(robot& other_robot) {
	other_robot.loseHealth(dmg);
}
void robot::loseHealth(int health_lost) {
	health = health - health_lost;
}

int main() {
/* team1.at(0).getHealth(); 'chain methods' */

	srand((unsigned)time(0));
	int random_integer = rand();
	robot t1(rand() % 10 + 1);
	robot t2(rand() % 10 + 1);
	robot t3(rand() % 10 + 1);
	robot t4(rand() % 10 + 1);
	robot t5(rand() % 10 + 1);
	robot t6(rand() % 10 + 1);
	robot t7(rand() % 10 + 1);
	robot t8(rand() % 10 + 1);

	t1.setName();
	t1.setHealth();

	t2.setName();
	t2.setHealth();

        t3.setName();
        t3.setHealth();

        t4.setName();
        t4.setHealth();

        t5.setName();
        t5.setHealth();

        t6.setName();
        t6.setHealth();

        t7.setName();
        t7.setHealth();

        t8.setName();
        t8.setHealth();

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

if((t1.getHealth() + t2.getHealth() + t3.getHealth() + t4.getHealth()) > 30) {
	cout << endl << "Your team health exceeds 30, you are disqualified, team 2 wins" << endl << endl;
	return 0;
}
if((t5.getHealth() + t6.getHealth() + t7.getHealth() + t8.getHealth()) > 30) {
	cout << endl << "Your team health exceeds 30, you are disqualified, team 1 wins." << endl << endl;
	return 0;
}





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
	int fighter_t3;
	int fighter_t4;


	cout << endl << "Choose a fighter from team 1 (0-3)" << endl;
	cin >> fighter_t1;
	cout << endl << "Choose a fighter from team 2 (0-3) that will be attacked by your previous choice" << endl;
	cin >> fighter_t2;

	cout << endl << "Now choose a fighter from team 2 (0-3)" << endl;
	cin >> fighter_t4;
	cout << endl << "Choose a fighter from team 1 (0-3) that will be attacked by your previous choice" << endl;
	cin >> fighter_t3;



	team1.at(fighter_t1).attack(team2.at(fighter_t2));
	team2.at(fighter_t2).attack(team1.at(fighter_t1));
	cout << "" << team1.at(fighter_t1).getName() << " attacked " << team2.at(fighter_t2).getName() << " for " << team1.at(fighter_t1).getDmg() << endl;
	cout << "" << team2.at(fighter_t2).getName() << " attacked " << team1.at(fighter_t1).getName() << " for " << team2.at(fighter_t2).getDmg() << endl;


        if(team2.at(fighter_t2).checkLife() == 1) {
                cout << "Team 2's robot is alive" << endl;
        } else {
                cout << "Team 2's robot is dead" << endl;
        }
	if(team1.at(fighter_t1).checkLife() == 1) {
		cout << "Team 1's robot is still alive" << endl;
	} else {
		cout << "Team 1's robot is dead" << endl;
	}






	return 0;
}
