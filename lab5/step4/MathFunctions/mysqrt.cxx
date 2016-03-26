#include "MathFunctions.h"
#include <math.h>
#include <iostream>

double mysqrt(double x){
	if (x < 0)
		return 0;

	double result = sqrt(x);
	std::cout << "************result = " << result << std::endl;

		// if we have both log and exp then use them
	#if defined (HAVE_LOG) && defined (HAVE_EXP)
	  result = exp(log(x)*0.5);
	#endif


	return result;
}
