/*Robot*/
using namespace std;

class robot {
	public:
		robot(int init_dmg);
		robot();
		string getName();
		int getHealth();
		int getDmg();
		int checkLife();
		int getType();

		void attack(robot& other_robot);
		void loseHealth(int health_lost);
		void setName();
		void setHealth();
		void setType();

	protected:
		string name;
		int health;
		int dmg;
		int type;
};
//add 3 health, worth $15
class tank:public robot {
	public:
		tank(int init_health);
		void extraHealth(int health_add);
	protected:
};
//add 3 damage, worth $15
class mage:public robot {
		mage(int init_dmg);
		void extraDmg(int dmg_add);
	protected:
};
//add 3 health and 3 dmg, worth $25
class chad:public robot {
		chad(int init_dmg, int init_health);
		void extraHealth(int health_add);
		void extraDmg(int dmg_add);
	protected:
};
