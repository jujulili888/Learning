#include <iostream>
using namespace std;

int main() {
	cout << "�㿼�Կ��˶��ٷ�(0-100)��" << endl;
	int score;
repeat: cin >> score;
	if (score <= 100 && score >= 90)cout << "��" << endl;
	else if (score < 90 && score >= 80)cout << "��" << endl;
	else if (score < 80 && score >= 60)cout << "��" << endl;
	else if (score <= 60 && score >= 0)cout << "��" << endl;
	else {
		cout << "ERROR!" << endl;
		goto repeat;
	}

	return 0;
}