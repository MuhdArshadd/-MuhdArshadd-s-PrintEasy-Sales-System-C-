//*****PrintEasy Sales System*****
//MUHAMMAD ARSHAD BIN MOHAMAD DIN

#include <iostream> 
#include <fstream> 
#include <iomanip> 
#include <string>

using namespace std;

//FUNCTION PROTOTYPE
void mainmenu(void);
void addrecord(void); 
void displayrecord(void);
void salescalculation(void); 
void displayaverage(void); 
void displaytotal(void); 
void clear(void);

int main() //FUNCTION HEADER
{
	int option; int k = 0; double total = 0;
	do
	{
		mainmenu();
		cout << "\nEnter your option here : ";
		cin >> option;

		switch (option)
		{
		case 1:
			addrecord(); //FUNCTION CALL 
			salescalculation(); //FUNCTION CALL 
			break;
		case 2:
			displayrecord(); //FUNCTION CALL 
			system("pause");
			break;
		case 3:
			displaytotal();//FUNCTION CALL 
			system("pause");
			break;
		case 4:
			displayaverage();//FUNCTION CALL
			system("pause");
			break; 
		case 5:
			clear();
			cout << "\nData sucessfully cleared !" << endl; system("pause");
			break;
		case 6:
			exit(0); 
			break;
		default: cout << "\nError choice !\n"; system("pause");
		}
	} while (true);
}
void mainmenu(void)
{
	system("CLS");
	cout << "######################################";
	cout << "\nPrintEasy Salespersons and Total Sales" << endl; cout << "######################################\n";
	cout << "\nWelcome , Please make your option based on the menu list below :" << endl;
	cout << "\nMenu Options\n1)Add Record\n2)Display Records\n3)Display Total Sales\n4)Display Average Sales\n5)Clear Data\n6)Exit" << endl;
}
void addrecord(void) //FUNCTION HEADER - TO ADD SALESPERSONS RECORD
{
	double amount; ofstream output;
	output.open("sales.txt", ios_base::app);
	string first, second; char conti;
	do
	{
		cout << "\nEnter the salesperson's First Name : "; cin >> first;
		output << setw(10) << first;
		cout << "\nEnter the salesperson's Second Name : "; cin >> second;
		output << setw(10) << second;
		cout << "\nEnter the sales amount : "; cin >> amount;
		output << setw(10) << fixed << setprecision(2) << amount << endl; cout << "\nDo you want to continue ? Y or y to continue : "; cin >> conti;
		system("cls");
		mainmenu();
	} while ((conti == 'Y') || (conti == 'y')); cout << endl;
	output.close();
}
void displayrecord(void) //FUNCTION HEADER - TO DISPLAY RECORD OF SALESPERSONS
{
	string first, second; double amount;
	ifstream input; input.open("sales.txt");
	cout << "\n" << setw(15) << "First Name" << setw(15) << "Second Name" << setw(15) << "Sales Amount" << endl << endl;
	while (input >> first >> second >> amount)
	{
		cout << setw(15) << first << setw(15) << second << setw(15); cout << fixed << setprecision(2) << amount << endl;
	}
	cout << endl;
}
void salescalculation(void) //FUNCTION HEADER - CALCULATION PROCESS OF TOTAL AND AVERAGE OF SALES
{
	int k = 0;
	double total = 0; double average = 0; string first, second;
	double amount;
	ifstream input; input.open("sales.txt");
	ofstream outputtotal; outputtotal.open("total.txt");
	while (input >> first >> second >> amount)
	{
		total = total + amount; k++;
	}
	average = total / k;
	outputtotal << fixed << showpoint << setprecision(2) << total << setw(10) << average << endl;
	input.close();
	outputtotal.close();
}
void displaytotal(void) //FUNCTION HEADER - TO DISPLAY THE TOTAL SUM OF SALES OF SALESPERSON
{
	double total = 0; double average = 0;
	ifstream inputtotal; inputtotal.open("total.txt");
	inputtotal >> total >> average;
	cout << fixed << setprecision(2);
	cout << "\nThe total sales is RM " << total << endl << endl; inputtotal.close();
}
void displayaverage(void) //FUNCTION HEADER - TO DISPLAY THE AVERAGE SALES
{
	double total = 0; double average = 0;
	ifstream inputtotal; inputtotal.open("total.txt");
	inputtotal >> total >> average;
	cout << fixed << setprecision(2);
	cout << "\nThe average sales is RM " << average << endl << endl; inputtotal.close();
}
void clear(void) // FUNCTION HEADER - TO CLEAR ALL RECORD OF SALESPERSONS
{
	ofstream output; output.open("sales.txt", ios_base::out); output.close();
	ofstream outputtotal; outputtotal.open("total.txt", ios_base::out); outputtotal.close();
}