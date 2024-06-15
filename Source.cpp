#include<iostream>
#include<string>
#include<cstdio>
#include<fstream>
#include<cstdio>
#include "Header.h"
int fun_check()
{
	int a1 = 0;
	string str1;
	cin >> str1;
	if (str1 == "1" || str1 == "2" || str1 == "3" || str1 == "4")
	{
		a1 = stoi(str1);
		return a1;
	}
	else
	{
		cout << "Invalid Input.\nPlease input again:";
		return 0;
	}
}
using namespace std;
int main()
{
	Portal P;
	int a =0;
	string str;
	while (1 == 1)
	{
		for (int i = 0; i < 49; i++)
		{
			cout << "-";
		}
		cout << endl;
		for (int i = 0; i < 48; i++)
		{
			if (i == 0)
				cout << "|";
			else
			cout << "-";
		}
		cout <<"|"<< endl;
		cout << "|" << "\t\t\t\t\t\t" << "|"<<endl;
		cout << "|" << "\t\t\t\t\t\t" << "|"<<endl;
		cout << "|" << "\t  Do You Want to Log In As: \t\t" << "|" << endl;
		//cout<<"|";
		for (int i = 0; i < 49; i++)
		{
			if (i == 0)
				cout << "|";
			else if (i == 48)
				cout << "|";
			else
				cout << "_";
		}
		cout << "\n|1| Admin \t\t\t\t\t"<<"|" << endl;
		for (int i = 0; i < 49; i++)
		{
			if (i == 0)
				cout << "|";
			else if (i == 48)
				cout << "|";
			else
				cout << "_";
		}
		cout << "\n|2| Teacher \t\t\t\t\t"<<"|" << endl;
		for (int i = 0; i < 49; i++)
		{
			if (i == 0)
				cout << "|";
			else if (i == 48)
				cout << "|";
			else
				cout << "_";
		}
		cout << "\n|3| Student \t\t\t\t\t"<<"|" << endl;
		for (int i = 0; i < 49; i++)
		{
			if (i == 0)
				cout << "|";
			else if (i == 48)
				cout << "|";
			else
				cout << "_";
		}
		cout << "\n|4| Exit Program \t\t\t\t"<<"|" << endl;
		for (int i = 0; i < 49; i++)
		{
			if (i == 0)
				cout << "|";
			else if (i == 48)
				cout << "|";
			else
				cout << "-";
		}
		cout << endl;
		for (int i = 0; i < 49; i++)
		{
			cout << "-";
		}
		cout << "\nYour Input: ";
		
		while (1 == 1)
		{
			a = fun_check();
			if (a == 0)
			{
				a = fun_check();
			}
			else
			{
				break;
			}
		}
		if (a == 1)
		{

			int b=0;
			Admin A;
			P.LoginAsAdmin();
			while (1 == 1)
			{
				cout << "Choose 1 of the options :" << endl;
				cout << "1. Add Teacher " << endl;
				cout << "2. Delete Teacher " << endl;
				cout << "3. Update Teacher " << endl;
				cout << "4. Add Student " << endl;
				cout << "5. Update Student " << endl;
				cout << "6. Delete Student " << endl;
				cout << "7. Assign Teacher " << endl;
				cout << "8. Log Out As Admin " << endl;
				cin >> b;
				if (b == 1)
				{
					A.addteacher();
				}
				else if (b == 2)
				{
					A.deleteteacher();
				}
				else if (b == 3)
				{
					A.updateteacher();
				}
				else if (b == 4)
				{
					A.addstudent();
				}
				else if (b == 5)
				{
					A.updatestudent();
				}
				else if (b == 6)
				{
					A.deletestudent();
				}
				else if (b == 7)
				{
					string name;
					cout << "Enter Name Of the Student ";
					cin >> name;
					A.c.assign_teacher_to_student(name);
				}
				else if (b == 8)
				{
					break;
				}

			}
		}
		else if (a == 2)
		{
			int t=0;
			Teacher T;
			P.LoginAsTeacher();
			while (1 == 1)
			{
				cout << "Choose 1 of the options :" << endl;
				cout << "1. Manage Attendance " << endl;
				cout << "2. Manage Marks " << endl;
				cout << "3. See Feedback " << endl;
				cout << "4. Log Out" << endl;
				cin >> t;
				if (t == 1)
				{
					T.attendance.addattendance();
				}
				else if (t == 2)
				{
					T.managemarks();
				}
				else if (t == 3)
				{
					string name;
					cout << "Enter your name:" << endl;
					cin >> name;
					T.seefeed(name);
				}
				else if (t == 4)
				{
					break;
				}
			}
		}
		else if (a == 3)
		{
			int s=0;
			Student S;
			P.LoginAsStudent();
			string name;
			string rollno;
			cout << endl;
			cout << "Enter your Name :" << endl;
			cin >> name;
			while (1 == 1)
			{
				cout << endl;
				cout << "Choose one of the options" << endl;
				cout << "1. View Personal Information " << endl;
				cout << "2. Course Registration " << endl;
				cout << "3. View your Attendance " << endl;
				cout << "4. View your Marks " << endl;
				cout << "5. View your Transcript " << endl;
				cout << "6. Fee Details" << endl;
				cout << "7. Give Course Feedback " << endl;
				cout << "8. View Tentative Study Plan " << endl;
				cout << "9. Log Out" << endl;
				cin >> s;
				if (s == 1)
				{

					cout << "Enter your Roll Number :" << endl;
					cin >> rollno;
					S.viewpersonalinfo(name, rollno);
				}
				else if (s == 2)
				{
					S.course.course_registration();
				}
				else if (s == 3)
				{
					S.viewattendace(name);
				}
				else if (s == 4)
				{
					S.viewmarks(name);
				}
				else if (s == 5)
				{
					Transcript T(name);
					S.tr.generate_transcript(name);
					S.course.show_GPA(name);
					cout << endl;
				}
				else if (s == 6)
				{
					S.feeDetails();
				}
				else if (s == 7)
				{
					S.f.setfeed();
				}
				else if (s == 8)
				{
					S.tsp.getdata();
				}
				else if (s == 9)
				{
					break;
				}
			}
		}
		else if (a == 4)
		{
			return 0;
		}
		else if (a != 1 || a != 2 || a != 3 || a != 4)
		{
		cout << "Invalid value!";
		break;
 }


	}
}
