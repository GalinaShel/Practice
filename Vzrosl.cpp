#include "Vzrosl.h"
#include <stdlib.h>


Vzrosl::Vzrosl()
{
	int i = rand() % 100; //5% взрослых имеет иммунитет
	if (i < 5)
		vzr_imun = true;
	else
		vzr_imun = false;

	i = rand() % 100; //36% взрослых безответственны
	if (i < 36)
		otv = false;
	else
		otv = true;
}

bool Vzrosl::get_imun()
{
	return vzr_imun;
}

bool Vzrosl::get_otv()
{
	return otv;
}