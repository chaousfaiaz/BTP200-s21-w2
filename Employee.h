//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 06/02/2021
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_

#define DATAFILE "employees.csv"

namespace sdds
{
   struct Employee
   {
      char *m_name;
      int m_empNo;
      double m_salary;
   };

   //sorts the dynamic array of employees based on the GPA of the employees.
   void sort();

   // loads a employee structue with its values from the file
   bool load(Employee &emp);

   // allocates the dyanmic array of employees and loads all the file
   // recoreds into the array
   bool load();

   // the display function that
   // displays a employee record on the screen:
   void display(const Employee &emp);

   //  the display function that
   // first sorts the employees then displays all the employees on the screen
   void display();

   // the deallocateMemory function that
   // will deallocate all the names in the employee elements first,
   // then it will deallocate the employee array
   void deallocateMemory();
}
#endif // SDDS_EMPLOYEE_H_