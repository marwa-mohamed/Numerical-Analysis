
#include <iostream>
#include <iomanip>
#include "global.h"

using namespace std;
double* iterations = new double[Iterative::number_of_equations];
double* intial_values = new double[Iterative::number_of_equations];
double* constants = new double[Iterative::number_of_equations];
double** coefficients = new double* [Iterative::number_of_equations];

int main()
{
    
    cout << "Enter number of equations : ";
    cin >> Iterative::number_of_equations;
    cout << endl;
    //Coefficients array : 
    double** coefficients = new double* [Iterative::number_of_equations];
    for (int i = 0;i < Iterative::number_of_equations;i++)
        coefficients[i] = new double[Iterative::number_of_equations + 1];
  
    //Reading coefficients : 
    cout << "Enter coefficients of equations : " << endl;
    for (int i = 0;i < Iterative::number_of_equations;i++) {
        for (int j = 0;j < Iterative::number_of_equations;j++) {
            cin >> coefficients[i][j];
        }
    }

    //Reading constants array : 
    cout << "Enter constant values : " << endl;
    for (int i = 0;i < Iterative::number_of_equations;i++) {
        cin >> Iterative::constants[i];
    }

    //Reading initial values : 
    cout << "Enter initial values : " << endl;
    for (int i = 0;i < Iterative::number_of_equations;i++) {
        cin >> Iterative::intial_values[i];
        
    }

    cout << "Enter number of iterations : ";
    cin >> Iterative::num_of_iterations;
    cout << endl;

    //Alogrithm : 
    cout << "Choose method : " << endl;
    cout << "[1] Gauss-Seidal ." << endl;
    Iterative::Seidal();
    for (int i = 0;i < Iterative::number_of_equations;i++)
        cout << Iterative::intial_values[i] << " ";








}

