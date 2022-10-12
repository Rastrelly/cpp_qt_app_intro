#include "stdafx.h"
#include "extCalc.h"

void extCalc::makeCalculation()
{
	err = false;
	c = 0;

	switch (op)
	{
	default:
	case 0: {c = a + b; break; }
	case 1: {c = a - b; break; }
	case 2: {c = a * b; break; }
	case 3: {
		if (b != 0)
		{
			c = a / b;
		}
		else
		{
			c = 0;
			err = true;
		}
		break;
	}
	}

	if (!err)
	{
		res = std::to_string(c);
	}
	else
	{
		res = "Error!";
	}
}