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
	{// Outliner�������룬�򷵻�NULL input
		cout << ("Error Input��NULL input.") << endl;
		return 0;
	}
	else if (*str != NULL)
	{
		// ��λ�����ж�
		if (*str == '-')
		{
			*str++;
			IsMinus = true;
		}
		while (*str != '\0')
		{
			// �ո��ж�
			if (*str == 32)
			{
				*str++;  // ȥ��ǰ׺�ո�Ӱ��
				continue;
			}
			if (*str >= '0' && *str <= '9')
			{
				result = (result * 10) + (long long)(*str - '0'); // ƫ������ʾ���λ����ֵ
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
		{// ������������
			result = 0 - result;
			cout << "Change str into int:" << result << endl;
		}
		else
		{// ����
			cout << "Change str into int:" << result << endl;
		}
	}
	
	return 0;
}