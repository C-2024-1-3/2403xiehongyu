#include<iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int a, int b) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "( " << x << " , " << y << " )" << endl;
	}
};

int main() {
	Point point(60, 80);
	point.setPoint(15, 31);
	point.display();

	system("pause");
	return 0;
}