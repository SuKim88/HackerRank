
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include "Main.h"

using namespace std;


int main()
{
	int res, t, i;

	scanf_s("%d", &t);

	char a[100001];

	for (i = 0; i < t; i++) {
		//memset(a, '\0', sizeof(char) * 100001);
		scanf_s("%s", a, (unsigned)_countof(a));
		res = stringReduction(a);
		printf("%d\n", res);
		
	}
	system("pause");
	return 0;
}

int stringReduction(char a[])
{
	int iAnswer = 0;
	int iCount[3] = {0};
	int iCountForNotZero = 0;
	int iSaveIndex = 0;
	int iOddCounter = 0;
	int iEvenCounter = 0;
	
	while ( *a != '\0')
	{
		switch (*a)
		{
		case 'a':
			iCount[0]++;
			break;
		case 'b':
			iCount[1]++;
			break;
		case 'c':
			iCount[2]++;
			break;
		}

		++a;
	}

	for (int i = 0; i < 3; ++i)
	{
		if (iCount[i] != 0)
		{ 
			++iCountForNotZero;
			iSaveIndex = i;
		}
		
		if (iCount[i] % 2 == 0)
		{
			++iEvenCounter;
		}
		else
			++iOddCounter;

	}

	if (iCountForNotZero == 0)
		return 0;

	if (iCountForNotZero == 1)
		return iCount[iSaveIndex];
	
	if (iEvenCounter == 3 || iOddCounter == 3)
		return 2;


	return 1;
	
}
