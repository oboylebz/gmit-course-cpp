#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED



#endif // FUNCTIONS_H_INCLUDED

// Question 1.
void LabInfo (){
    cout << "Brendan O Boyle\n";
    cout<<"Lab #3"<< endl;
}



void pyramid(int start, int end)
{
	for(int i=start; i<=end; i++)
	{
		for(int spaces=1; spaces<=end-i; spaces++) cout<<" "; //spaces
		for(int j=1; j<=(2*i)-1; j++) cout<<"B"; //pyramid
		cout<<endl;
	}
}

void base(int rows)
{
	for(int i=0; i<=rows*0.3; i++)
	{
		for(int spaces=1; spaces<=rows*0.75; spaces++) cout<<" ";
		for(int j=1; j<=rows*0.5; j++) cout<<"| ";
		cout<<endl;

	}
	cout<< "\n MERRY CHRISTMASS STEPHEN\n";
}

