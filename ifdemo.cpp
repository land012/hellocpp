#include <iostream>
using namespace std;

int int main(int argc, char const *argv[])
{
	int i1 = 5;
	if (i1 < 0) {
		cout << "less 0" << endl;
	} else if (i1 == 0) {
		cout << "equal 0" << endl;
	} else {
		cout << "more 0" << endl;
	}
	return 0;
}