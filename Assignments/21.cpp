/* Write a program to input basic salary of an employee and calculate its Gross
salary according to following:

Basic Salary &lt;= 10000 : HRA = 20%, DA = 80%
Basic Salary &lt;= 20000 : HRA = 25%, DA = 90%
Basic Salary &gt; 20000 : HRA = 30%, DA = 95%  */

#include <iostream>
using namespace std;
int main() {
    float basic_salary, hra, da, gross_salary;
    cout << "Enter basic salary:-  ";
    cin >> basic_salary;
    if (basic_salary <= 10000) {
        hra = 0.2 * basic_salary;
        da = 0.8 * basic_salary;
    } else if (basic_salary <= 20000) {
        hra = 0.25 * basic_salary;
        da = 0.9 * basic_salary;
    } else 
    {
        hra = 0.3 * basic_salary;
        da = 0.95 * basic_salary;
    }
    gross_salary = basic_salary + hra + da;
    cout << "Gross salary: " << gross_salary << endl;
    return 0;
}