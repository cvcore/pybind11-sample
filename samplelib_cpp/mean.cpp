#include "mean.h"

double mean(const std::vector<double>& v) {
    double sum = 0;
    for (double x : v) {
        sum += x;
    }
    return sum / v.size();
}
