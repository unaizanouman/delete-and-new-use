#include <iostream>
#include<string.h>
using namespace std;

struct node{
	char info[15];
};

class trial{
	private:
		node obj1, *temp1, *temp2, *temp3;
		int I, length;
		char *p, *q;
	
	public:
		trial(); // constructor
		~trial(); // destructor
		void startIn();
};

main(){
	
	trial lnk; // obj of trial class
	lnk.startIn(); // function call
}

trial::trial(){
	temp1=temp2=temp3=NULL;
	p=q=NULL;
}

trial::~trial(){
	delete temp1;
    delete temp2;
    delete temp3;
	delete []p;
}

void trial::startIn(){
	cout<<"\nMaking use of new and delete keywords";
	cout<<"\n--------------------------------------------------------\n";
	temp1= new node;
	temp2= new node; // new nodes created dynamically
	
	cout<<"\nEnter info about temp1: ";
	cin>>temp1->info; // info array created
	cout<<"\nEnter info about temp2: ";
	cin>>temp2->info; // info array created
	
	temp3=&obj1; // compile time memory allocation.
	
	cout<<"\nEnter info about temp3: ";
	cin>>temp3->info;
	
	cout<<"\nShowing info: ";
	cout<<"\ntemp1= "<<temp1->info<<"\ntemp2= "<<temp2->info<<"\ntemp3= "<<temp3->info;
	
	cout<<"\nEnter length of the array: ";
	cin>>length;
	
	p=new char[length];
	q=p;
	
	cout<<"\nNow enter elements of "<<length<<" in the array: ";
	for(int i=0; i<length; i++)
	{
		cout<<"\nElement at index "<<i<<" of the array= ";
		cin>>p[i];
	}

	cout<<"\nelements in the array are: ";
	for(int i=0; i<length; i++){
        cout<<p[i];
	}
} // end of startIn()
