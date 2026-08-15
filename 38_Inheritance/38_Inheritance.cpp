#include <iostream>
using namespace std;

class Enemy {
	// private   public   protected
protected:
	string name;
	int health;
	float strenght;
	static const int maxHealth = 100;
public:
	Enemy():name("no name"), health(maxHealth), strenght(0){}
	Enemy(string n, float s) :name(n), health(maxHealth), strenght(s) {}
	
	void Print()const
	{
		cout << "Name : " << name << endl;
		cout << "Health : " << health <<" % " << endl;
		cout << "Strength : " << strenght << " % " << endl;
	}
	bool IsAlive()const 
	{
		return health > 0;
	}
	void DecreaseHealth(int damage)
	{
		if (health - damage < 0)
			health = 0;
		else
			health -= damage;
	}
	
};
//class Child : [spetificator] Parent  --> [spetificator] public private protected
class Dragon: public Enemy
{
	float armor;
public:
	Dragon() :armor(0), Enemy() {}
	Dragon(string name, float s, float a) : armor(a), Enemy(name, s) {}
	
	float Attack()
	{
		cout << "Attacking with strength : " << strenght << endl;
		return strenght;
	}
	void Fight(int damage)
	{
		cout << "Getting damage : " << damage << endl;
		DecreaseHealth(damage-armor);
		cout << "Health after fight  : " << health << " % " << endl;
	}
	void Print()
	{
		cout << "------------- Dragon -----------" << endl;
		Enemy::Print();
	}


};

class Enderman : public Enemy
{
	float superHp;
public:
	Enderman(): superHp(0), Enemy(){}
	Enderman(string n, float s, float sh ): superHp(sh), Enemy(n, s){}

	void Teleport()
	{
		cout << "I am teleporting." << endl;
	}
	void SuperHPAdded()
	{
		health += superHp;
	}
	void Print()
	{
		cout << "------------- Enderman -----------" << endl;
		Enemy::Print();
		cout << "Super strenght : " << superHp << " % " << endl;
	}


};

int main()
{
	Enemy e;
	Dragon dragon("Tom", 5,2);
	dragon.Print();

	Dragon boss("Boss", 6, 4);
	boss.Print();


	Enderman ender("Man", 15, 500);
	ender.Print();
	ender.SuperHPAdded();
	ender.SuperHPAdded();
	ender.Print();

	int round = 1;
	/*do
	{
		cout << "-------------- Round" << round << "----------------" << endl;
		boss.Fight(dragon.Attack());
		dragon.Fight(boss.Attack());
		boss.Print();
		dragon.Print();
		round++;

	} while (dragon.IsAlive() and boss.IsAlive());*/

	





}

