#include<Turboc.h>
#include<iostream>
#include<time.h>
using namespace std;

struct Star {
	int x;
	int y;
	char ch;
	void OutPosition();
};

void Star::OutPosition() {
	gotoxy(x, y);
	putch(ch);
}


int main() {
	int LocationY = 0;
	Star *myStar = new Star[15];
	srand(time(NULL));

	int i = 0;
	for (int i=0; i<15; i++) myStar[i].x = rand() % 40;
	while (true) {
		
		for (int i = 0; i < 15; i++) {
			
			myStar[i].y = LocationY;
			myStar[i].ch = '*';
			myStar[i].OutPosition();
			myStar[i].y++;
		}

		



		LocationY++;
		if (LocationY == 30) LocationY = 0;
		
		Sleep(1000);
		clrscr();
	}
	


}