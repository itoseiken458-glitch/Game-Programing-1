#include <iostream>
using namespace std;

void show(const Hero* hero);

struct Hero {
	char name[32];
	char working_in_where[64];
	int hp;
	int mp;
	int money;
	int speed;

};

int main() {
	
	Hero hero = { "AAA", "school", 100, 150, 0, 55 };
}
void show(const Hero* hero) {
	cout << "name = " << hero->name << "  working in " << hero->working_in_where << "  hp = " << hero->hp << "  mp = " << hero->mp << "  money amount = " << hero->money << "  speed = " << hero->speed << endl;
}