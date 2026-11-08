#include <math.h>
#include "../nnmusl_fp_ops.h"

double fdim(double x, double y)
{
	if (isnan(x))
		return x;
	if (isnan(y))
		return y;
	return x > y ? __nnmusl_fsub(x, y) : 0;
}
