
#include <iostream>
#include <iomanip>

class global_variables {
public :
     int number_of_equations;
     int num_of_iterations;
     double* iterations = new double[number_of_equations];
     double* intial_values = new double[number_of_equations];
     double* constants = new double[number_of_equations];
     double** coefficients = new double* [number_of_equations];

     void Seidal() {
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
};

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
    cin >> choice;
    switch (choice)
    {
    case 1 : 
        user.Seidal();
    }
 
    for (int i = 0;i < user.number_of_equations;i++)
        cout << user.intial_values[i] << " ";

    return 0;






}

