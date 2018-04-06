#include<iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Point pos1;
	Point pos2;
	pos1.SetX(1); pos1.SetY(10);
	pos2.SetX(2); pos2.SetY(10);
	Rectangle rec;
	rec.InitMembers(pos1, pos2);
	rec.ShowRecInfo();
	
	return 0;
}