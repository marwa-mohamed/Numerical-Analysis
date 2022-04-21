
#ifndef GLOBAL_H
#define GLOBAL_H
class global_variables {
public:
    int number_of_equations;
    int num_of_iterations;
    double* iterations = new double[number_of_equations];
    double* intial_values = new double[number_of_equations];
    double* constants = new double[number_of_equations];
    double** coefficients = new double* [number_of_equations];

    void Seidal();
    
};

#endif 
