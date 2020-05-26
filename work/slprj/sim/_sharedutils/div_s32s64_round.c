#include "rtwtypes.h"
#include "multiword_types.h"
#include "div_s32s64_round.h"

int32_T div_s32s64_round(int64_T numerator, int64_T denominator)
{
  int32_T quotient;
  uint64_T absNumerator;
  uint64_T absDenominator;
  uint64_T tempAbsQuotient;
  if (denominator == 0L) {
    quotient = numerator >= 0L ? MAX_int32_T : MIN_int32_T;
  } else {
    absNumerator = numerator < 0L ? ~(uint64_T)numerator + 1UL : (uint64_T)
      numerator;
    absDenominator = denominator < 0L ? ~(uint64_T)denominator + 1UL : (uint64_T)
      denominator;
    tempAbsQuotient = absNumerator / absDenominator;
    absNumerator %= absDenominator;
    absNumerator <<= 1UL;
    if (absNumerator >= absDenominator) {
      tempAbsQuotient++;
    }

    quotient = (numerator < 0L) != (denominator < 0L) ? (int32_T)-(int64_T)
      tempAbsQuotient : (int32_T)tempAbsQuotient;
  }

  return quotient;
}
