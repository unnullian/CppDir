#pragma once
using namespace std;
class Point {
private:
	int x;
	int y;

public :
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

bool Point::SetX(int xpos) {
	if (0 > xpos || xpos > 10) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 10) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}

int Point::GetX() const {
	return x;
}

int Point::GetY() const {
	return y;
}