#include <stdio.h>
#include <math.h>

float binary_search_sqrt(float number, float precision) {
  float low = 0.0f;
  float high = number;
  float mid;

  while (high - low > precision) {
    mid = (low + high) / 2.0f;

    if (mid * mid <= number && (mid + 1) * (mid + 1) > number) {
      return mid;
    } else if (mid * mid < number) {
      low = mid + precision;
    } else {
      high = mid - precision;
    }
  }

  return low;
}

int main() {
  float number = 16.0;
  float precision = 0.0001;

  float sqrt = binary_search_sqrt(number, precision);

  if (sqrt == -1) {
    printf("The square root of %f cannot be found with the specified precision.\n", number);
  } else {
    printf("The square root of %.2f is %.2f.\n", number, sqrt);
  }

  return 0;
}

