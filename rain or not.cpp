#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time() {
		hour = 0;
		min = 0;
		sec = 0;
	}
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
	void Display() {
		cout << hour << ":" << min << ":" << sec;
	}
};

int main() {
	Time t(11, 59, 59);
	t.Display();

	return 0;
}
