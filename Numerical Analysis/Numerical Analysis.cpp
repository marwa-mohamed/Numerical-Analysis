
#include <iostream>
#include <iomanip>
#include "Iterative-methods.h"



using namespace std;


int main()
{
    int choice;
    global_variables user;
    
    cout << "Enter number of equations : ";
    cin >> user.number_of_equations;
    cout << endl;
    //Coefficients array : 
    for (int i = 0;i < user.number_of_equations;i++)
        user.coefficients[i] = new double[user.number_of_equations + 1];
  
    //Reading coefficients : 
    cout << "Enter coefficients of equations : " << endl;
    for (int i = 0;i < user.number_of_equations;i++) {
        for (int j = 0;j < user.number_of_equations;j++) {
            cin >> user.coefficients[i][j];
        }
    }

    //Reading constants array : 
    cout << "Enter constant values : " << endl;
    for (int i = 0;i < user.number_of_equations;i++) {
        cin >> user.constants[i];
    }

    //Reading initial values : 
    cout << "Enter initial values : " << endl;
    for (int i = 0;i < user.number_of_equations;i++) {
        cin >> user.intial_values[i];
        
    }

    cout << "Enter number of iterations : ";
    cin >> user.num_of_iterations;
    cout << endl;

    //Alogrithm : 
    cout << "Choose method : " << endl;
    cout << "[1] Gauss-Seidal ." << endl;
    
     user.Seidal();
   
  
    for (int i = 0;i < user.number_of_equations;i++)
        cout << user.intial_values[i] << " ";
        

    return 0;






}

