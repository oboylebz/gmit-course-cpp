#include <iostream>
#include "labInfo.h"
using namespace std;

// Question 1.
void LabInfo (){
cout<< "Brendan O Boyle";
cout<< "\nLab using classes\n" <<endl;
}


int main()
{
    LabInfo();

    labInfo t1;
    t1.name ="Brendan O Boyle";
    t1.labId ="Lab 4";
   /* t1.day ="Friday 12th";   Date info is now private
      t1.month ="Febuary";     Date info is now private
      t1.year ="2021";         Date info is now private */
    t1.printInfo();            // print labInfo








    return 0;
}
