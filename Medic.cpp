#include "Medic.h"
#include <stdlib.h>


Medic::Medic()
{
	int i = rand() % 100; //3% ������� ����� ���������
	if (i < 3)
		medic_imun = true;
	else
		medic_imun = false;

	i = rand() % 4; //75% ������� �������� � �.�.
	if (i == 0)
		work = false;
	else
		work = true;
}

bool Medic::get_imun()
{
	return medic_imun;
}

bool Medic::get_work()
{
	return work;
}
