#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
//************************************************************
//               CLASS NAME: DOCTOR
//*******************************************************
class doctor{
	private:
		string registerno;
		string firstname;
		string lastname;
		string city;
		string joiningdate;
		string specialty;
		string department;
		string salary;
		public:
			void input();
			void output();
			void sfname();
			
};
//*************************************************************
//             FUNCTION TO GET DATA USING FILE HANDLING
//************************************************************
	void doctor::input(){
		ofstream b("cba.txt",ios::app);
		if(!b){
			cout<<"the file cannot open\n";
		}
		cout<<"enter your register number";
		cin>>registerno;
		cout<<"enter your first name";
		cin>>firstname;
		cout<<"enter your last name";
		cin>>lastname;
		cout<<"enter your city name";
		cin>>city;
		cout<<"enter your joining date";
		cin>>joiningdate;
		cout<<"enter your name of department";
		cin>>department;
		cout<<"enter you specialty in field";
		cin>>specialty;
		cout<<"enter your salary";
		cin>>salary;
		b<<registerno<<"\t"<<firstname<<"\t"<<lastname<<"\t"<<city<<"\t"<<joiningdate<<"\t"<<department<<"\t"<<specialty<<"\t"<<salary<<endl;	
	}
//***********************************************************************
//            FUNCTION SHOW DATA USING FILE HANDLING
//***********************************************************************	
	void doctor::output(){
		ifstream b("cba.txt");
		if(!b){
			cout<<"the file cannot open\n";
		}
		while(b>>registerno>>firstname>>lastname>>city>>joiningdate>>department>>specialty>>salary)
		cout<<registerno<<"\t"<<firstname<<"\t"<<lastname<<"\t"<<city<<"\t"<<joiningdate<<"\t"<<department<<"\t"<<specialty<<"\t"<<salary<<endl;	
	}
//***********************************************************************
//          FUNCTION UNING FOR SEARCHING
//*********************************************************************** 
		void doctor::sfname(){
		ifstream b("cba.txt");
		if(!b){
			cout<<"the file cannot open\n";
		}
		string i;
		cout<<"\nenter first name--->";
		cin>>i;
		while(b>>registerno>>firstname>>lastname>>city>>joiningdate>>department>>specialty>>salary){
			if(i.compare(firstname)==0)
			cout<<registerno<<"\t"<<firstname<<"\t"<<lastname<<"\t"<<city<<"\t"<<joiningdate<<"\t"<<department<<"\t"<<specialty<<"\t"<<salary;
		}
	}
//********************************************************************
//            CLASS  NAME	: PATIENT
//********************************************************************
	class patient{
		private:
		string patientnumber;
		string firstname;
		string lastname;
		string city;
		string typeofdieases;
		string visiting;
		string discharging;
		public:
			void input();
			void output();
			void sfname();
	};
//**********************************************************************
//           FUNCTION GET DATA
//**********************************************************************	
	void patient::input(){
		ofstream a("xyz.txt",ios::app);
		if(!a){
			cout<<"the file cannot open\n";
		}
		cout<<"enter patient number";
		cin>>patientnumber;
		cout<<"enter first name";
		cin>>firstname;
		cout<<"enter last name";
		cin>>lastname;
		cout<<"enter city name";
		cin>>city;
		cout<<"enter type of dieases";
		cin>>typeofdieases;
		cout<<"enter date of visiting";
		cin>>visiting;
		cout<<"enter date of dischareging";
		cin>>discharging;
		a<<patientnumber<<"\t"<<firstname<<"\t"<<lastname<<"\t"<<city<<"\t"<<typeofdieases<<"\t"<<visiting<<"\t"<<discharging<<"\n";
	}
//************************************************************************
//             FUNCTION SHOW DATA
//************************************************************************	
	void patient::output(){
		ifstream a("xyz.txt");
		if(!a){
			cout<<"the cannot open";
		}
		while(a>>patientnumber>>firstname>>lastname>>city>>typeofdieases>>visiting>>discharging)
		cout<<patientnumber<<"\t"<<firstname<<"\t"<<lastname<<"\t"<<city<<"\t"<<typeofdieases<<"\t"<<visiting<<"\t"<<discharging;
	}
//*********************************************************************
//          FUNCTION FOR SEARCHING
//*******************************************************************	
	void patient::sfname(){
		ifstream a("xyz.txt");
		if(!a){
			cout<<"the file cannot open\n";
		}
		string s;
		cout<<"\nenter first name--->";
		cin>>s;
		while(a>>patientnumber>>firstname>>lastname>>city>>typeofdieases>>visiting>>discharging){
			if(s.compare(firstname)==0)
			cout<<patientnumber<<"\t"<<firstname<<"\t"<<lastname<<"\t"<<city<<"\t"<<typeofdieases<<"\t"<<visiting<<"\t"<<discharging;
		}
		
	}
//***********************************************************************
//                  MAIN FUNCTION
//***********************************************************************	
int main()
{
	int choice;
	doctor d;
	patient p;
	cout<<"\t\t------------------------------------------"<<endl;
	cout<<"\t\t                   MENU                   "<<endl;
	cout<<"\t\t------------------------------------------"<<endl;
	cout<<"\t\t1----------For doctor record---------"<<endl;
	cout<<"\t\t2----------For patient record---------"<<endl;
	cout<<"\t\t3----------For Exist record-----------"<<endl;
	while(1)
	{	
	cout<<"Enter your choice------------>"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			int choice1;
		cout<<"\n\t\t1------------------------>Input\n\n";
	    cout<<"\t\t2------------------------>output\n\n";
	    cout<<"\t\t3------------------------>search with first name\n\n";
		cout<<"\t\t4------------------------->Exist\n";
		while(1)
		{
				cout<<"Enter your choice------------>"<<endl;
	    cin>>choice1;
	    switch(choice1)
	    {
	    	case 1:d.input();break;
	    	case 2:d.output();break;
	    	case 3:d.sfname();break;
	    	case 4:return 0;
	    	default:cout<<"you enter wrong choice";
		}
		}
		break;
		case 2:
			int choice2;
				cout<<"\n\t\t1------------------------>Input\n\n";
	    cout<<"\t\t2------------------------>output\n\n";
	    cout<<"\t\t3------------------------>search with first name\n\n";
		cout<<"\t\t4------------------------->Exist\n";
		while(1)
		{
				cout<<"Enter your choice------------>"<<endl;
	    cin>>choice2;
	    switch(choice2)
	    {
	    	case 1:p.input();break;
	    	case 2:p.output();break;
	    	case 3:p.sfname();break;
	    	case 4:return 0;
	    	default:cout<<"you enter wrong choice";
		}
		}
		break;
		case 3:cout<<"program ended\nthanks for using"<<endl;
		return 0;
			
	}
	


system("pause");
return 0;
}
}
