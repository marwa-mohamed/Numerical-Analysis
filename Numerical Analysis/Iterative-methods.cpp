#include "Iterative-methods.h"

void global_variables::Seidal() {
    while (num_of_iterations > 0)
    {
        for (int i = 0;i < number_of_equations;i++) {
            iterations[i] = (constants[i] / coefficients[i][i]);
            for (int j = 0;j < number_of_equations;j++) {
                if (i == j)
                    continue;
                iterations[i] = iterations[i] - ((coefficients[i][j] / coefficients[i][i]) * intial_values[j]);
                intial_values[i] = iterations[i];
            }
        }
        num_of_iterations--;

    }
}

