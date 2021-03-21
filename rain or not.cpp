#include <iostream>
using namespace std;

int main() {
	cout << " 外面正在下雨吗？(Y or N)" << endl;
	char c;
repeat: cin >> c;
	if (c=='y' || c == 'Y')cout << "外面正在下雨。" << endl;
	else if (c=='N'||c=='n')cout << "良" << endl;
	else {
		cout << "ERROR!" << endl;
		goto repeat;
	}

	return 0;
}
