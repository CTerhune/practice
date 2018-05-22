/*Robot*/
using namespace std;

class robot {
	public:
		robot(int init_dmg);
		string getName();
		int getHealth();
		int getDmg();
		int checkLife();

		void attack(robot& other_robot);
		void loseHealth(int health_lost);
		void setName();
		void setHealth();

	protected:
		string name;
		int health;
		int dmg;
};
//add 3 health, worth $15
class tank:public robot {
	public:
		tank(int init_dmg);
	protected:
		void extraHealth(int health_add);
};
//add 3 damage, worth $15
class mage:public robot {
		mage(int init_dmg);
	protected:
		void extraDmg(int dmg_add);
};
//add 3 health and 3 dmg, worth $25
class chad:public robot {
		chad(int init_dmg);
	protected:
		void extraDmg(int dmg_add);
		void extraHealth(int health_add);
};
