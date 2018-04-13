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
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 10) {
		cout << "��� ������ �� ����" << endl;
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