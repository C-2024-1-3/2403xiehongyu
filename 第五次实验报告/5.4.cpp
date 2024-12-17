#include<iostream>
using namespace std;

class student {
private:
	int num;
	int score;
public:
	student(int d_num, int d_score) {
		num = d_num;
		score = d_score;
	}
	int getnum() {
		return num;
	}
	int getscore() {
		return score;
	}
};

int max(student* p) {
	int max = -1;
	int ret;
	for (int i = 0; i < 5; i++) {
		if (p[i].getscore() > max) {
			max = p[i].getscore();
			ret = p[i].getnum();
		}
	}
	return ret;
}

int main() {
	student exp[5] = {
		student(1,56),student(2,91),student(3,77),
		student(4,64),student(5,72)
	};

	cout << "最高分学生的学号为：" << max(exp) << endl;

	system("pause");
	return 0;
}