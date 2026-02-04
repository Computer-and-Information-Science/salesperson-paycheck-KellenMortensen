// Kellen Mortensen

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  string firstName, lastName;
  string filename;

  double baseSalary;
  double commissionPercent;
  double totalSales;
  double employeeExpenses;

  cout << "Please enter input file name: ";
  cin >> filename;

  ifstream inputFile(filename);

  inputFile >> firstName >> lastName;
  inputFile >> baseSalary >> commissionPercent;
  inputFile >> totalSales;
  inputFile >> employeeExpenses; 
  inputFile.close();

  double commissionAmount = totalSales*(commissionPercent/100.0);
  double payAmount = baseSalary + commissionAmount - employeeExpenses;

  cout << setprecision(2);

  cout << endl;
  cout << "Payroll data for " << firstName << " " << lastName << endl;

  cout  << "Base Salary: " << endl;



  cout << "Commission: " << endl;



  cout << "Expenses: " << endl;

  

  cout << "Total: " << endl;

  return 0;



  











  
 
}
