#pragma once
#include "Point.h"
using namespace std;
class Rectangle {
private:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo();
	bool InitMembers(const Point &ul, const Point &lr);
};

void Rectangle::ShowRecInfo() {
	cout << "좌 상단 : " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}

bool Rectangle::InitMembers(const Point &ul, const Point &lr) {
	if (ul.GetX() > lr.GetX() || ul.GetY() > ul.GetY()) {
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}