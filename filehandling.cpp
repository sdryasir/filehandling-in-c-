#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void line()
{
	for(int i=0; i<=40; i++)
	{
		cout<<"*";
	}
}
void addStudent(int r, string sname)
{
	ofstream writeToFile;
	writeToFile.open("e:\\db.txt", ios::app);
	writeToFile<<"\n"<<r<<"\t\t"<<sname;
	line();
	cout<<"\n\nThe data has been saved permanantly\n\n";
}
void displayStudent()
{
	ifstream readFromFile;
	readFromFile.open("e:\\db.txt");
	string line;
	
	while(getline(readFromFile, line))
	{
		cout<<line<<"\n";
	}
	
	cout<<"\n\nDisplay Student\n\n";
}
void addTeacher()
{
	cout<<"\n\nAdd Teacher\n\n";
}
void displayTeacher()
{
	cout<<"\n\nDisplay Teacher\n\n";
}
int main()
{	
	int choice, roll;
	string studentName;
	char ch;
	do{
		line();
		cout<<"\n\n1 - Add new Student\n2 - Display list of All Students\n3 - Add New Teacher\n4 - Display All Teachers\n\n";	
		line();
		cout<<"\n\nEnter your choice\t";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter Roll Number";
				cin>>roll;
				cout<<"Student Name";
				cin>>studentName;
				addStudent(roll, studentName);
				break;
			case 2:
				displayStudent();
				break;
			case 3:
				addTeacher();
				break;
			case 4:
				displayTeacher();
				break;
			default:
				cout<<"You have entered an invalid choice";
		}
		line();
		cout<<"\n\nDo you want to run this program again?(Y/N)\n\n";
		cin>>ch;
	}while(ch != 'n');
	
}
