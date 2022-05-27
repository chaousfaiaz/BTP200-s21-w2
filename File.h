//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2022
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds
{
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();
   bool read(char *studName);
   bool read(int &studNum);
   bool read(double &studGrade);
}
#endif 
//------------------------------------------------------- !SDDS_FILE_H_
