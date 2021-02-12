#ifndef LABINFO_H_INCLUDED
#define LABINFO_H_INCLUDED
#endif // LABINFO_H_INCLUDED
using namespace std;

// Lab 4
class labInfo{      //Class where Lab inoformation is stored
public:
    string name;             //String for name
    string labId;           // String for labId
    void printInfo(){
        cout<<name<<"\n\n"<<labId<<"\n\n"<<day<<"/"<<month<<"/"<<year<<"\n\n";//Date will not display due to information made private.

        }
           private:          // Date has being made private and will not show when program is run
    string day ;             // string for day
    string month ;           // string for month
    string year  ;           // string for year

};

