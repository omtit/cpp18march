// z7 dz.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	char a[100];
	scanf("%s", a);
	printf("SELECT first_name, last_name, group \nFROM students WHERE student_id = '%s';", a);
    return 0;
}

