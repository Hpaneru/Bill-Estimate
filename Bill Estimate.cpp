#include<iostream>
#include<iomanip>
#include<conio.h>
#include<ctime>
using namespace std;
int main()
{
	int n, i, qitem[i], price[i], total[i], grandtotal=0, money, cal;
	string name, h[100];
	cout<<endl<<setw(75)<<"WELCOME TO BILL ESTIMATE PROGRAM"<<endl;
	cout<<"ENTER THE NAME OF CUSTOMER:- ";
	getline(cin, name);	
	cout<<endl<<endl<<"ENTER THE TOTAL NUMBER OF ITEMS CUSTOMER HAD BUYED:- ";
	cin>>n;


	for(i=0;i<n;i++)
	{
		cout<<endl<<"ENTER THE NAME OF ITEM:- ";
		cin>>h[i];	
		cout<<"ENTER THE QUANTITY:- ";
		cin>>qitem[i];
		cout<<"ENTER THE PRICE FOR 1:- ";
		cin>>price[i];
		total[i]=qitem[i]*price[i];

	}
	cout<<"__________________________________________________________________________________________________________________"<<endl;
	cout<<setw(65)<<"HP ENTERPRIZES"<<endl<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
		time_t now=time(0);
		char*dt=ctime(&now);
		cout<<"COSTUMER NAME:- "<<name<<endl;
		cout<<endl<<endl<<left<<"                                                                                         DATE AND TIME :- " <<setw(50)<<dt;
		cout<<endl<<left<<setw(30)<<"NAME OF ITEMS";	cout<<left<<setw(35)<<"QUANTITY";	cout<<left<<setw(45)<<"PRICE FOR 1";			cout<<left<<setw(55)<<"TOTAL"<<endl;
		for(i=0;i<n;i++)
	{
		cout<<endl<<left<<setw(30)<<h[i];			cout<<left<<setw(35)<<qitem[i]; 	cout<<left<<setw(45)<<price[i];     			cout<<left<<setw(55)<<total[i];
		grandtotal=grandtotal+total[i];
	}
	cout<<setfill('.')<<endl;
	cout<<setw(130)<<" "<<endl;
	cout<<setfill(' ');
	cout<<endl<<right<<setw(120)<<"GRAND TOTAL ="<<grandtotal;
	cout<<endl<<endl<<"ENTER THE AMOUNT OF MONEY GIVEN BY "<<name<<":- ";
	cin>>money;
	cal=money-grandtotal;
	cout<<endl<<"THE AMOUNT OF MONEY TO RETURN TO "<<name<<":- "<<cal;
	cout<<endl<<endl<<endl<<"CREATED BY:-HEMANT HP";
	cout<<endl<<"ALL RIGHTS RESERVED, HP, 2018";
	getch();
	return 0;
}
