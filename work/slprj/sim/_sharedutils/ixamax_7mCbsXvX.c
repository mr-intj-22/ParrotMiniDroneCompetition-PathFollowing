#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "ixamax_7mCbsXvX.h"

int32_T ixamax_7mCbsXvX(int32_T n, const real_T x[2], int32_T ix0)
{
  int32_T idxmax;
  idxmax = 1;
  if ((n > 1) && (muDoubleScalarAbs(x[1]) > muDoubleScalarAbs(x[ix0 - 1]))) {
    idxmax = 2;
  }

  return idxmax;
}
