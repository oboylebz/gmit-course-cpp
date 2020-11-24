#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED



#endif // FUNCTIONS_H_INCLUDED

    void LabInfo (){//function 1 to display Lab info.
    cout <<"BRENDAN O BOYLE\n";
    cout <<"LAB #2\n\n"<<endl;
    }



     void cal(){//function 2 to take in two numbers and print out the largest.
         int a,b;
         cout<<"Question 2\n";
         cout<<"Which is the largest number?\n";
         cout<<"Enter first number:";cin >>a;
         cout<<"Enter second number:";cin>>b;
    if (a>b){
    cout<< "\nThe Largest Value is:"<<a;
    }
    else{
        cout<< "The largest value is:"<<b;
    }


    }




    void check(){//function 3 to check if the number entered is between 1 and 100.
        int x;
    cout<< "\n\n\nQuestion 3:\nIs the following number between 1 and 100\nEnter Number:";
    cin>>x;
    if (x>=1&&x<=100){
        cout<< "\nNumber:"<<x<<" is between 1 and 100.";
    }
    else{
        cout<<"\nNumber :"<<x<<" is not between 1 and 100.";
    }

}


     void AreaOfCircle(){//function 5 area or circle
         cout<<"\n\nQuestion 5\n";

         cout<<"What is the area of a circle with the following radius in mm:";
    //Deceleration of Variables
    float PI = 3.14159;
    float radius;
    float Area;
    cin>>radius;
    Area = PI * radius * radius;
                cout<<"\nAns:" <<Area<<"mm^2";
     }

     void AreaOfRectangle (){//Function 6 area of rectangle
        cout<<"\n\nQuestion 6";
      cout<<"\nCalculate the Area of Rectangle ?\n\n";
    //Deceleration of Variables
    float length;
    float breath;
    float area;
    cout<<"Enter Length in mm:";
    cin>>length;
    cout<<"\n\nEnter Breath in mm:";
    cin>>breath;
    area = length * breath;
    cout<<"\n\nArea of Rectangle is  "<<area<<"mm^2\n\n";
     }

     void TempHumidtyMonitering(){//Function 7
         cout<<"\n\nQuestion 7\n";
         float a;
         float b;
         cout<<"Enter Temperature Value:";
         cin>>a;
         if (a>=95){
            cout<<"\nWARNING HIGH TEMPERATURE\nWARNING HIGH TEMPERATURE\nWARNING HIGH TEMPERATURE\nWARNING HIGH TEMPERATURE\nWARNING HIGH TEMPERATURE\n";
         }
            else {
                cout<<"\nTemperature OK\n\n";
            }
            cout<<"\nEnter Humidity Value:";
            cin>>b;
            if (b>=90){
                cout<<"\nWARNING HUMIDITY LEVEL HIGH\nWARNING HUMIDITY LEVEL HIGH\nWARNING HUMIDITY LEVEL HIGH\nWARNING HUMIDITY LEVEL HIGH\nWARNING HUMIDITY LEVEL HIGH\n";
            }
                else {
                    cout<<"\nHumidity Level OK\n\n";
                }
            }



            void Conversion (){//function 8 Temp conversion
             float fahr, cel;
            char option;
    cout<<"\n\nQuestion 9.";
   cout << "\n\nChoose from following option:\n";
   cout << "1. Celsius to Fahrenheit.\n";
   cout << "2. Fahrenheit to Celsius.\n";
   cin >> option;

   //option for converting celsius into fahernheit
   if (option == '1')
   {
      cout << "Enter the temperature in Celsius: ";
      cin >> cel;

      fahr = (1.8 * cel) + 32.0; //temperature conversion formula
      cout << "\nTemperature in degree Fahrenheit: " << fahr << " F\n";
   }
   //option for converting Fahrenheit into Celsius
   else if (option == '2')
   {
      cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahr;

      cel = (fahr - 32) / 1.8; //temperature conversion formula
      cout << "\nTemperature in degree Celsius: " << cel << " C\n";
   }
   else
      cout << "Error Wrong Input.\n\n";


}




void FindEvenNumbers (){//function 9. find odd numbers

    char z
    ;
    cout << "\n\nQuestion 10\n";
    cout<<"Would you like to see all the evev numbers between 0 and 1000: (y/n)\n";
    cin >>z;
    if (z=='y'){
        int a = 0;
while(a <= 998) {
   a += 2;
   cout << a<<"\n";
}
    }
    else if (z=='n'){
        cout<<"\nNo worries\n";
    }
    else{
        cout<< "Incorrect input";
        cout<<"\nTry again Later\n\n";


    }


}

//Question 11
void FindOddNumbers(){
    int a,b;
    cout<<"\n\nQuestion 11.\n";
cout<<"Find all the odd integer between two numbers:\nEnter first integer: ";
cin>>a;
cout<<"\nEnter second interger: ";
cin>> b;
 for (int c = a;c<=b;c++)
 {
     if(c%2 ==1||c%2==-1)
        cout<<c<<"\n";
 }


}


void OverloadQ11(){//Question 12.
    cout<<"\n\nQuestion 12\n\n";
    int g ={000000} ;
    char q;
    cout<<"Please enter the number of values in the array :";
    cin>>g;
    cout<<"Would you like to see all the odd numbers in that array (y/n)?";
    cin>>q;
    if(q=='y'){



int f[g];

    for(int i=0;i<g;i++)
    {
        if (f[i]%2!=0)
            {
            cout<< f[i] <<" is an odd number!\n";
        }
    }
    }
    else if (q =='n'){
        cout<<"\nYou are missing out\n";
    }
    else {cout<< "\n\nYou Did Not Enter y or n\n\n ERASEING HARDDRIVE \n ERASEING HARDDRIVE\n  ERASEING HARDDRIVE  \nERASEING HARDDRIVE\n  ERASEING HARDDRIVE \n ERASEING HARDDRIVE \n ERASEING HARDDRIVE\n  ERASEING HARDDRIVE  \nERASEING HARDDRIVE  \nERASEING HARDDRIVE \n ERASEING HARDDRIVE\n  ERASEING HARDDRIVE  \nERASEING HARDDRIVE\n  ERASEING HARDDRIVE \n ERASEING HARDDRIVE\n  ERASEING HARDDRIVE\n\nONLY JOKEING  "; }
}







        void Rand(){//Question 13.
            char w;
            cout<< "\n\nQuestion 13\n";
        cout<<"Would you like to see 6 random numbers?(y/n)";
        cin>>w;
        if (w =='y'){

        int  v1=rand()%100+1000;
       int  v2=rand()%100+1;
       int  v3=rand()%30+1985;
       int v4=rand()%30+2015;
       int v5=rand()%30+2045;
       int v6=rand()%30+2075;

       cout<<"\nRandom numbers are:\n";
       cout<<v1<<"\n"<<v2<<"\n"<<v3<<"\n"<<v4<<"\n"<<v5<<"\n"<<v6<<"\n\n";
        }
       else if (w =='n'){
        cout <<"\nYou are missing out\n";}
        else {
            cout << "Wrong Input";
        }
       }


//Question 14.
/* Print the numbers 5 through 9: */

void FixCode(){
    cout<<"\nQuestion 14.\n";
int i=5;
while (i < 10)
{
 cout << "\n"<<i;
 cout << endl;
 i = i + 1;
}
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum = 0;
while (i <= 20)
{
 sum = sum + i;
 i = i + 1;
}
cout << "The sum of 1 + 2 + 3 + ... + 20 = " <<sum;
/* Average a list of grades terminated by -1 */
sum = 0;
int count = 0;
int grade;
cout << "\n\nEnter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "\nEnter grade (-1 to end): ";
 cin >> grade;
}
if (count > 0)
 cout << "\nAverage is " << (double) sum / count;





}





//Question 15.
void Finished3Ways(){
    cout<<"\nQuestion 15.\n";
    cout<<"\nFor Loop\n";
for (int c = 1;c<=10;c++){
    cout <<"Finished   ";
}
cout<<"\nWhile Loop\n";
int i=1;
while(i<=10){
        cout<<"\nFinished\n";
i=i+1;

}


cout<<"\nDo While Loop\n";
int k = 1;
do { k=k+1;
    cout <<"\nFinished Thank God";}
    while (k<=10);


}




