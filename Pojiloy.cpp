#include "Pojiloy.h"
#include <stdlib.h>


Pojiloy::Pojiloy()
{
	int i = rand() % 100; //1% ������� ����� ���������
	if (i == 0)
		poj_imun = true;
	else
		poj_imun = false;

	i = rand() % 3; //66% ������� ����� ����.�����������
	if (i == 0)
		bol = false;
	else
		bol = true;
}

bool Pojiloy::get_imun()
{
	return poj_imun;
}

bool Pojiloy::get_bol()
{
	return bol;
}
