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

	private:
		string name;
		int health;
		int dmg;
};
