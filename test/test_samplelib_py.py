# Test the mean calculation function

import numpy as np
# from ... import mean as cpp_mean

def test_mean_calc_py(v: np.array) -> float:
    return np.mean(v)

def test_mean_calc_cpp(v: np.array) -> float:
    return cpp_mean(v)

if __name__ == '__main__':
    v = np.array([1, 2, 3, 4, 5])
    print(test_mean_calc_py(v))
    print(test_mean_calc_cpp(v))
