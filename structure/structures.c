#include <stdio.h>
int main()
{
	struct pokemon{
		int hp;
		int attack;
		int speed;
		char tier;
	};
	struct pokemon charizard;
	charizard.hp = 100;
	charizard.attack = 200;
	charizard.speed = 70;
	charizard.tier = 'A';
	printf("%d ", charizard.hp);
	printf("%d ", charizard.attack);
	printf("%d ", charizard.speed);
	printf("%c \n", charizard.tier);
	struct pokemon pikachu;
	pikachu.hp = 60;
	pikachu.attack = 70;
	pikachu.speed = 120;
	pikachu.tier = 'B';
	printf("%d ", pikachu.hp);
	printf("%d ", pikachu.attack);
	printf("%d ", pikachu.speed);
	printf("%c \n", pikachu.tier);
	return 0;
}