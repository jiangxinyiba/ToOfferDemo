#include "Section1.h"
using namespace std;
int	Section1::StrToInt( char* str)
{
	long long result = 0;
	bool IsMinus = false;
	//cout << numeric_limits<int>::max() << endl;
	//cout << numeric_limits<long>::max() << endl;
	//cout << numeric_limits<long long>::max() << endl;
	if (*str == NULL)
	{// Outliner：无输入，则返回NULL input
		cout << ("Error Input：NULL input.") << endl;
		return 0;
	}
	else if (*str != NULL)
	{
		// 首位正负判断
		if (*str == '-')
		{
			*str++;
			IsMinus = true;
		}
		while (*str != '\0')
		{
			// 空格判断
			if (*str == 32)
			{
				*str++;  // 去除前缀空格影响
				continue;
			}
			if (*str >= '0' && *str <= '9')
			{
				result = (result * 10) + (long long)(*str - '0'); // 偏移量表示这个位的数值
				if ((result > numeric_limits<int>::max()) || (-result < numeric_limits<int>::min()))
				{// Outlier
					cout << ("Error Input: out of input range.") << endl;
					return 0;
				}
				*str++;
			}
			else
			{// Outlier
				cout << ("Error Input: unvaild inputs.") << endl;
				return 0;
			}

		}
		if (IsMinus)
		{// 负数，则求负数
			result = 0 - result;
			cout << "Change str into int:" << result << endl;
		}
		else
		{// 正数
			cout << "Change str into int:" << result << endl;
		}
	}
	
	return 0;
}