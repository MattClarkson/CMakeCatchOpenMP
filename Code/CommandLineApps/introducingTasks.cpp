/*=============================================================================

  CMAKECATCHOPENMP: Demo project for OpenMP examples.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include <iostream>
#ifdef _OPENMP
#include <omp.h>
#endif

int fib(int n)
{
    if (n < 2)
      return n;
    int x;
    int y;
    const int tune = 40;
    #pragma omp task firstprivate(n) shared(x)
    {
        x = fib(n-1);
    }
    #pragma omp task firstprivate(n) shared(y)
    {
       y = fib(n-2);
    }
    #pragma omp taskwait

    return x + y;
}

int main(int argc, char ** argv)
{
    #ifdef _OPENMP
    omp_set_dynamic(0);
    #endif
    const int num = 20;
    int a;
    #pragma omp parallel shared(a)
    {
        #pragma omp single nowait
        {
          a = fib(num);
        }
    }
    std::cout << "fib " << num << " is " << a << std::endl;
}