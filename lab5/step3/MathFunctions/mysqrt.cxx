#include "MathFunctions.h"
#include <math.h>

double mysqrt(double x){
	if (x < 0)
		return 0;

		int result = sqrt(x);

		// if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
  result = exp(log(x)*0.5);
#else // otherwise use an iterative approach

	return resule;
}
