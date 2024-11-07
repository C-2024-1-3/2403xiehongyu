#include<iostream>
using namespace std;

int main() {
	int x,y;
	cout << "请输入x的值：" << endl;
	//提示输入x的值
	cin >> x;
	//条件语句判断x的数值
	if (0 < x < 1) {
		y = 3 - 2 * x;
	}
	else if (1 <= x < 5) {
		y = 2 / 4 * x + 1;
	}
	else if (5 <= x < 10) {
		y = x * x;
	}
	cout << "y的值为：" << y << endl;
}