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

  cout << fixed << setprecision(2);

  cout << endl;
  cout << "Payroll data for " << firstName << " " << lastName << endl << endl;

  cout  << left << setw(15) << "Base Salary: " << right << setw(10) << baseSalary << endl;

  cout << left << setw(15) << "Commission: "
  << right << setw(10) << commissionAmount 
  << " (" << setprecision(1) << commissionPercent << "% of "
  << setprecision(2) << totalSales << ")" << endl;

  cout << left << setw(15) << "Expenses: " << right << setw(10) << employeeExpenses << endl;

  cout << left << setw(15) << "" << right << setw(10) << "--------" << endl;

  cout << left << setw(15) << "Total: " << right << setw(10) << payAmount << endl;



  return 0;


}
  











  
 

