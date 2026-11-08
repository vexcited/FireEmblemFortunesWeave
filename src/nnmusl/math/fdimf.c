#include <math.h>
#include "../nnmusl_fp_ops.h"

float fdimf(float x, float y)
{
	if (isnan(x))
		return x;
	if (isnan(y))
		return y;
	return x > y ? __nnmusl_fsubf(x, y) : 0;
}
