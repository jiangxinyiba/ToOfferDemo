#include "Section1.h"

int	Section1::StrToInt(char* str)
{
	//int len = strlen(str);
	//int strInt=0;
	//for (int i = 0; i < len; i++) 
	//{
	//	int str0 = str[i] - '0';
	//	printf("%d", str0);
	//}
	int result = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0'); // 偏移量表示这个位的数值
		}
		else
		{// Outlier
			cout << ("  Error Input!  ");
			return 0;
		}
		*str++;
	}

	cout << result <<endl;

	return 0;
}