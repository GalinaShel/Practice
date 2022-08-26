#include "Medic.h"
#include <stdlib.h>


Medic::Medic()
{
	int i = rand() % 100; //3% медиков имеет иммунитет
	if (i < 3)
		medic_imun = true;
	else
		medic_imun = false;

	i = rand() % 4; //75% медиков работают в к.з.
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
