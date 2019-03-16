#include "Section1.h"
using namespace std;
int	Section1::StrToInt(char* str)
{
	long long result = 0;
	//cout << numeric_limits<int>::max() << endl;
	//cout << numeric_limits<long>::max() << endl;
	//cout << numeric_limits<long long>::max() << endl;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + (long long)(*str - '0'); // 偏移量表示这个位的数值
			if ((result > numeric_limits<int>::max()) || (-result < numeric_limits<int>::min()) )
			{// Outlier
				cout << ("Error Input: out of input range.");
				return 0;
			}
			*str++;
		}
		else
		{// Outlier
			cout << ("Error Input: unvaild inputs.");
			return 0;
		}
		
	}
	cout <<"Change str into int:"<< result <<endl;
	return 0;
}