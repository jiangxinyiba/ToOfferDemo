#include "Section1.h"
 
using namespace std;
int main()
{
	///////////////////////////////////////////////////////////////////////////
	/////////////////////////// Section 1 /////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////
	Section1 *s1 = new Section1();
	int result;
	// change Str into int
	cout << "[1.0] Change Str into Int" << endl;
	cout << "Input a str:" ;
	char* str = new char[100];
	//cin >> str;
	cin.get(str, 100);
	s1->StrToInt(str);


	system("pause");
	return 0;
}