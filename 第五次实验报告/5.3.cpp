#include<iostream>
using namespace std;

class cube {
private:
	int len;
	int wid;
	int hei;
public:
	void set() {
		cout << "the length of the cube is: ";
		cin >> len;
		cout << "the width of the cube is: ";
		cin >> wid;
		cout << "the height of the cube is: ";
		cin >> hei;
	}
	int volume() {
		return len * wid * hei;
	}
};

int main() {
	cube a1;
	cout << "for a1:" << endl;
	a1.set();
	cout << "the volume of a1 is: " << a1.volume() << endl;
	cout << endl;

	cube a2;
	cout << "for a2:" << endl;
	a2.set();
	cout << "the volume of a2 is: " << a2.volume() << endl;
	cout << endl;

	cube a3;
	cout << "for a3:" << endl;
	a3.set();
	cout << "the volume of a3 is: " << a3.volume() << endl;
	cout << endl;

	system("pause");
	return 0;
}