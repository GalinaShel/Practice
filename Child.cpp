#include "Child.h"
#include <stdlib.h>


Child::Child()
{
	int i = rand() % 2;
	if (i == 0)
		child_imun = false;
	else
		child_imun = true;
}

bool Child::get_imun()
{
	return child_imun;
}
