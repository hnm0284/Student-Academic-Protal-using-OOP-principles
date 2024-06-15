#pragma once
#include<iostream>
#include<string>
#include<cstdio>
#include<fstream>
using namespace std;
bool check = 0;
class tsp
{

	string name;
	int credits;
	string type;
	string semester;

public:
	void getdata()
	{
		ofstream myfile("tsp.dat", ios::out | ios::binary);
		if (!myfile)
		{
			cout << "Cannot open file!" << endl;
		}
		tsp plan[37];
		plan[0].semester = "    SEMESTER-I  ";
		plan[0].name = "ProgramFundamental";
		plan[0].credits = 3;
		plan[0].type = "Core ";
		plan[1].name = "LinearAlgebra ";
		plan[1].credits = 3;
		plan[1].type = "Core ";
		plan[2].name = "Calculus-I ";
		plan[2].credits = 3;
		plan[2].type = "Core ";
		plan[3].name = "PakistanStudies ";
		plan[3].credits = 3;
		plan[3].type = " Core";
		plan[4].name = "ProgrammingLab ";
		plan[4].credits = 1;
		plan[4].type = "Core ";
		plan[5].name = "IIC Technology ";
		plan[5].credits = 1;
		plan[5].type = " Core";
		plan[6].semester = "    SEMESTER-II  ";
		plan[6].name = "ObjectOP";
		plan[6].credits = 3;
		plan[6].type = "Core ";
		plan[7].name = "DigitalLD ";
		plan[7].credits = 3;
		plan[7].type = "Core ";
		plan[8].name = "DifferentialE";
		plan[8].credits = 3;
		plan[8].type = "Core";
		plan[9].name = "IslamicStudies ";
		plan[9].credits = 3;
		plan[9].type = " Core";
		plan[10].name = "ObjectOPLab ";
		plan[10].credits = 1;
		plan[10].type = "Core ";
		plan[11].name = "DigitalLDlab ";
		plan[11].credits = 1;
		plan[11].type = " Core";
		plan[12].semester = "    SEMESTER-III  ";
		plan[12].name = "ProgrammingAI";
		plan[12].credits = 3;
		plan[12].type = "Core ";
		plan[13].name = "DataStructures";
		plan[13].credits = 3;
		plan[13].type = "Core ";
		plan[14].name = "DiscreteStructures ";
		plan[14].credits = 3;
		plan[14].type = "Core ";
		plan[15].name = "Probability&Statics";
		plan[15].credits = 3;
		plan[15].type = " Core";
		plan[16].name = "UniversityElectiveI ";
		plan[16].credits = 1;
		plan[16].type = "Core ";
		plan[17].semester = "    SEMESTER-IV ";
		plan[17].name = "ArtificialIntelligence";
		plan[17].credits = 3;
		plan[17].type = "Core ";
		plan[18].name = "FinalSE";
		plan[18].credits = 3;
		plan[18].type = "Core ";
		plan[19].name = "DigitalBS ";
		plan[19].credits = 3;
		plan[19].type = "Core ";
		plan[20].name = "ComputingOAL";
		plan[20].credits = 3;
		plan[20].type = "Core ";
		plan[21].semester = "    SEMESTER-V  ";
		plan[21].name = "MachineLearning";
		plan[21].credits = 3;
		plan[21].type = "Core ";
		plan[22].name = "OperatingSystem";
		plan[22].credits = 3;
		plan[22].type = "Core ";
		plan[23].name = "DigitalAA ";
		plan[23].credits = 3;
		plan[23].type = "Core ";
		plan[24].name = "TBWriting";
		plan[24].credits = 3;
		plan[24].type = "Core ";
		plan[25].semester = "    SEMESTER-VI  ";
		plan[25].name = "ArtificialNN";
		plan[25].credits = 3;
		plan[25].type = "Core ";
		plan[26].name = "ComputerNetwork";
		plan[26].credits = 3;
		plan[26].type = "Core ";
		plan[27].name = "AIElectiveI ";
		plan[27].credits = 3;
		plan[27].type = "Core ";
		plan[28].name = "AIElectiveII";
		plan[28].credits = 3;
		plan[28].type = "Core ";
		plan[29].semester = "    SEMESTER-VII  ";
		plan[29].name = "FinalYP-I";
		plan[29].credits = 3;
		plan[29].type = "Core ";
		plan[30].name = "ComputerVision";
		plan[30].credits = 3;
		plan[30].type = "Core ";
		plan[31].name = "AIElectiveIII ";
		plan[31].credits = 3;
		plan[31].type = "Core ";
		plan[32].name = "Univerity Elective II";
		plan[32].credits = 3;
		plan[32].type = "Core ";
		plan[33].semester = "    SEMESTER-VIII ";
		plan[33].name = "FinalYPII";
		plan[33].credits = 3;
		plan[33].type = "Core ";
		plan[34].name = "InformationalS";
		plan[34].credits = 3;
		plan[34].type = "Core ";
		plan[35].name = "UElectiveIII ";
		plan[35].credits = 3;
		plan[35].type = "Core ";
		plan[36].name = "AIelectiveIV";
		plan[36].credits = 3;
		plan[36].type = "Core ";


		for (int i = 0; i < 37; i++)
		{
			myfile.write((char*)&plan[i], sizeof(tsp));
			myfile.close();
		}

		if (!myfile.good())
		{
			cout << "|Error occurred at write time|" << endl;
		}
		ifstream myfile1("student.dat", ios::out | ios::binary);

		if (!myfile1)
		{
			cout << "|File can not be opened|" << endl;
		}

		tsp plan1[37];
		for (int i = 0; i < 37; i++)
			myfile1.read((char*)&plan1[i], sizeof(tsp));
		myfile1.close();
		if (!myfile1.good())
		{
			cout << "|Error occured at Run Time|" << endl;
		}
		cout << "Total of 36 courses are offered here which are divided among 8 semesters" << endl;
		cout << "         " << plan[0].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[6].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 6; i < 12; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[12].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 12; i < 17; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[17].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 17; i < 21; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[21].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 21; i < 25; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[25].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 25; i < 29; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[29].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 29; i < 33; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "         " << plan[33].semester << endl;
		cout << " S.No  " << "Course Name    " << "|     Course Type" << "   |   Credit Hours" << endl;
		for (int i = 33; i < 37; i++)
		{
			cout << i + 1 << " " << plan[i].name << "              " << plan[i].type << "               " << plan[i].credits << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;

	}
};

class Transcript
{
private:
	string s_name;
public:
	Transcript()
	{}
	Transcript(string name)
	{
		this->s_name = name;
	}
	string getname()
	{
		return s_name;
	}
	float get_Gtotal(string filename, Transcript obj)
	{
		ifstream read;
		string store;
		float Gtotal = 0;
		float temp = 0;
		read.open(filename);
		while (!read.eof())
		{
			getline(read, store);
			if (store == obj.getname())
			{
				Gtotal = 0;
				getline(read, store);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 2);//weightage of non-absolute obtained marks in Absolute marks
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 2);
				getline(read, store);
				getline(read, store);//quizes
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 10) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 10) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 10) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 10) * 2);
				getline(read, store);
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 10) * 2);
				getline(read, store);
				getline(read, store);//project
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 20);
				getline(read, store);
				getline(read, store);//finals
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 100) * 40);
				getline(read, store);
				getline(read, store);//sessionals
				temp = stof(store);
				Gtotal = Gtotal + ((temp / 50) * 20);
			}
		}
		return Gtotal;
	}
	void generate_Grand_Total()
	{
		float GT[5] = { 0,0,0,0,0 };
		for (int i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				ofstream write;
				write.open("OOP_GT.txt");
				string fname = "OOP.txt";
				string std_name1 = "HassanNaeem";
				GT[i] = get_Gtotal(fname, std_name1);
				write << std_name1;
				write << endl << GT[i];
				fname = "OOP.txt";
				std_name1 = "AlishbaNadeem";
				GT[i + 1] = get_Gtotal(fname, std_name1);
				write << endl << std_name1;
				write << endl << GT[i + 1];
				fname = "OOP.txt";
				std_name1 = "IsmaImtiaz";
				GT[i + 2] = get_Gtotal(fname, std_name1);
				write << endl << std_name1;
				write << endl << GT[i + 2];
				fname = "OOP.txt";
				std_name1 = "KhadijahTariq";
				GT[i + 3] = get_Gtotal(fname, std_name1);
				write << endl << std_name1;
				write << endl << GT[i + 3];
				fname = "OOP.txt";
				std_name1 = "ManahilSarwar";
				GT[i + 4] = get_Gtotal(fname, std_name1);
				write << endl << std_name1;
				write << endl << GT[i + 4];
			}
			if (i == 1)
			{
				ofstream write;
				write.open("DLD_GT.txt");
				string fname1 = "DLD.txt";
				string std_name2 = "HassanNaeem";
				GT[i - 1] = get_Gtotal(fname1, std_name2);
				write << std_name2;
				write << endl << GT[i - 1];
				fname1 = "DLD.txt";
				std_name2 = "AlishbaNadeem";
				GT[i] = get_Gtotal(fname1, std_name2);
				write << endl << std_name2;
				write << endl << GT[i];
				fname1 = "DLD.txt";
				std_name2 = "IsmaImtiaz";
				GT[i + 1] = get_Gtotal(fname1, std_name2);
				write << endl << std_name2;
				write << endl << GT[i + 1];
				fname1 = "DLD.txt";
				std_name2 = "KhadijahTariq";
				GT[i + 2] = get_Gtotal(fname1, std_name2);
				write << endl << std_name2;
				write << endl << GT[i + 2];
				fname1 = "DLD.txt";
				std_name2 = "ManahilSarwar";
				GT[i + 3] = get_Gtotal(fname1, std_name2);
				write << endl << std_name2;
				write << endl << GT[i + 3];
			}
			if (i == 2)
			{
				ofstream write;
				write.open("CPS_GT.txt");
				string fname2 = "CPS.txt";
				string std_name3 = "HassanNaeem";
				GT[i - 2] = get_Gtotal(fname2, std_name3);
				write << std_name3;
				write << endl << GT[i - 2];
				fname2 = "CPS.txt";
				std_name3 = "AlishbaNadeem";
				GT[i - 1] = get_Gtotal(fname2, std_name3);
				write << endl << std_name3;
				write << endl << GT[i - 1];
				fname2 = "CPS.txt";
				std_name3 = "IsmaImtiaz";
				GT[i] = get_Gtotal(fname2, std_name3);
				write << endl << std_name3;
				write << endl << GT[i];
				fname2 = "CPS.txt";
				std_name3 = "KhadijahTariq";
				GT[i + 1] = get_Gtotal(fname2, std_name3);
				write << endl << std_name3;
				write << endl << GT[i + 1];
				fname2 = "CPS.txt";
				std_name3 = "ManahilSarwar";
				GT[i + 2] = get_Gtotal(fname2, std_name3);
				write << endl << std_name3;
				write << endl << GT[i + 2];
			}
			if (i == 3)
			{
				ofstream write;
				write.open("DE_GT.txt");
				string fname3 = "DIFF.txt";
				string std_name4 = "HassanNaeem";
				GT[i - 3] = get_Gtotal(fname3, std_name4);
				write << std_name4;
				write << endl << GT[i - 3];
				fname3 = "DIFF.txt";
				std_name4 = "AlishbaNadeem";
				GT[i - 2] = get_Gtotal(fname3, std_name4);
				write << endl << std_name4;
				write << endl << GT[i - 2];
				fname3 = "DIFF.txt";
				std_name4 = "IsmaImtiaz";
				GT[i - 1] = get_Gtotal(fname3, std_name4);
				write << endl << std_name4;
				write << endl << GT[i - 1];
				fname3 = "DIFF.txt";
				std_name4 = "KhadijahTariq";
				GT[i] = get_Gtotal(fname3, std_name4);
				write << endl << std_name4;
				write << endl << GT[i];
				fname3 = "DIFF.txt";
				std_name4 = "ManahilSarwar";
				GT[i + 1] = get_Gtotal(fname3, std_name4);
				write << endl << std_name4;
				write << endl << GT[i + 1];
			}
			if (i == 4)
			{
				ofstream write;
				write.open("ISL_GT.txt");
				string fname4 = "ISL.txt";
				string std_name5 = "HassanNaeem";
				GT[i - 4] = get_Gtotal(fname4, std_name5);
				write << std_name5;
				write << endl << GT[i - 4];
				fname4 = "ISL.txt";
				std_name5 = "AlishbaNadeem";
				GT[i - 3] = get_Gtotal(fname4, std_name5);
				write << endl << std_name5;
				write << endl << GT[i - 3];
				fname4 = "ISL.txt";
				std_name5 = "IsmaImtiaz";
				GT[i - 2] = get_Gtotal(fname4, std_name5);
				write << endl << std_name5;
				write << endl << GT[i - 2];
				fname4 = "ISL.txt";
				std_name5 = "KhadijahTariq";
				GT[i - 1] = get_Gtotal(fname4, std_name5);
				write << endl << std_name5;
				write << endl << GT[i - 1];
				fname4 = "ISL.txt";
				std_name5 = "ManahilSarwar";
				GT[i] = get_Gtotal(fname4, std_name5);
				write << endl << std_name5;
				write << endl << GT[i];
			}
			if (i == 5)
			{
				ofstream write;
				write.open("OOP_LAB_GT.txt");
				string fname5 = "OOPLAB.txt";
				string std_name6 = "HassanNaeem";
				GT[i - 5] = get_Gtotal(fname5, std_name6);
				write << std_name6;
				write << endl << GT[i - 5];
				fname5 = "OOPLAB.txt";
				std_name6 = "AlishbaNadeem";
				GT[i - 4] = get_Gtotal(fname5, std_name6);
				write << endl << std_name6;
				write << endl << GT[i - 4];
				fname5 = "OOPLAB.txt";
				std_name6 = "IsmaImtiaz";
				GT[i - 3] = get_Gtotal(fname5, std_name6);
				write << endl << std_name6;
				write << endl << GT[i - 3];
				fname5 = "OOPLAB.txt";
				std_name6 = "KhadijahTariq";
				GT[i - 2] = get_Gtotal(fname5, std_name6);
				write << endl << std_name6;
				write << endl << GT[i - 2];
				fname5 = "OOPLAB.txt";
				std_name6 = "ManahilSarwar";
				GT[i - 1] = get_Gtotal(fname5, std_name6);
				write << endl << std_name6;
				write << endl << GT[i - 1];
			}
			if (i == 6)
			{
				ofstream write;
				write.open("DLD_LAB_GT.txt");
				string fname6 = "DLDLAB.txt";
				string std_name7 = "HassanNaeem";
				GT[i - 6] = get_Gtotal(fname6, std_name7);
				write << std_name7;
				write << endl << GT[i - 6];
				fname6 = "DLDLAB.txt";
				std_name7 = "AlishbaNadeem";
				GT[i - 5] = get_Gtotal(fname6, std_name7);
				write << endl << std_name7;
				write << endl << GT[i - 5];
				fname6 = "DLDLAB.txt";
				std_name7 = "IsmaImtiaz";
				GT[i - 4] = get_Gtotal(fname6, std_name7);
				write << endl << std_name7;
				write << endl << GT[i - 4];
				fname6 = "DLDLAB.txt";
				std_name7 = "KhadijahTariq";
				GT[i - 3] = get_Gtotal(fname6, std_name7);
				write << endl << std_name7;
				write << endl << GT[i - 3];
				fname6 = "DLDLAB.txt";
				std_name7 = "ManahilSarwar";
				GT[i - 2] = get_Gtotal(fname6, std_name7);
				write << endl << std_name7;
				write << endl << GT[i - 2];
			}
			if (i == 7)
			{
				ofstream write;
				write.open("CPS_LAB_GT.txt");
				string fname7 = "CPSLAB.txt";
				string std_name8 = "HassanNaeem";
				GT[i - 7] = get_Gtotal(fname7, std_name8);
				write << std_name8;
				write << endl << GT[i - 7];
				fname7 = "CPSLAB.txt";
				std_name8 = "AlishbaNadeem";
				GT[i - 6] = get_Gtotal(fname7, std_name8);
				write << endl << std_name8;
				write << endl << GT[i - 6];
				fname7 = "CPSLAB.txt";
				std_name8 = "IsmaImtiaz";
				GT[i - 5] = get_Gtotal(fname7, std_name8);
				write << endl << std_name8;
				write << endl << GT[i - 5];
				fname7 = "CPSLAB.txt";
				std_name8 = "KhadijahTariq";
				GT[i - 4] = get_Gtotal(fname7, std_name8);
				write << endl << std_name8;
				write << endl << GT[i - 4];
				fname7 = "CPSLAB.txt";
				std_name8 = "ManahilSarwar";
				GT[i - 3] = get_Gtotal(fname7, std_name8);
				write << endl << std_name8;
				write << endl << GT[i - 3];
			}
		}
	}
	void generate_grade(Transcript obj)
	{
		ofstream Write;
		Write.open("Grades.txt");
		string find_name;
		string GT;
		float GrandTotal[8] = { 0,0,0,0,0,0,0,0 };
		for (int i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				float GT1;
				ifstream read;
				read.open("OOP_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT1 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT1;
						break;
					}
				}
				read.close();
			}
			if (i == 1)
			{
				float GT2;
				ifstream read;
				read.open("DLD_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT2 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT2;
						break;
					}
				}
				read.close();
			}
			if (i == 2)
			{
				float GT3;
				ifstream read;
				read.open("DE_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT3 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT3;
						break;
					}
				}
				read.close();
			}
			if (i == 3)
			{
				float GT4;
				ifstream read;
				read.open("ISL_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT4 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT4;
						break;
					}
				}
				read.close();
			}
			if (i == 4)
			{
				float GT5;
				ifstream read;
				read.open("CPS_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT5 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT5;
						break;
					}
				}
				read.close();
			}
			if (i == 5)
			{
				float GT6;
				ifstream read;
				read.open("DLD_LAB_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT6 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT6;
						break;
					}
				}
				read.close();
			}
			if (i == 6)
			{
				float GT7;
				ifstream read;
				read.open("OOP_LAB_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT7 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT7;
						break;
					}
				}
				read.close();
			}
			if (i == 7)
			{
				float GT8;
				ifstream read;
				read.open("CPS_LAB_GT.txt");
				while (!read.eof())
				{
					getline(read, find_name);
					if (find_name == obj.getname())
					{
						getline(read, GT);
						GT8 = stof(GT);//converting string to floating point
						GrandTotal[i] = GT8;
						break;
					}
				}
				read.close();
			}
			if (GrandTotal[i] >= 85)
			{
				Write << endl;
				Write << "A+";
			}
			else if (GrandTotal[i] >= 80)
			{
				Write << "\nA";
			}
			else if (GrandTotal[i] >= 75)
			{
				Write << "\nB+";
			}
			else if (GrandTotal[i] >= 70)
			{
				Write << "\nB";
			}
			else if (GrandTotal[i] >= 65)
			{
				Write << "\nC+";
			}
			else if (GrandTotal[i] >= 60)
			{
				Write << "\nC";
			}
			else if (GrandTotal[i] >= 55)
			{
				Write << "\nD+";
			}
			else if (GrandTotal[i] > 50)
			{
				Write << "\nD";
			}
			else if (GrandTotal[i] = 50)
			{
				Write << "\nW";//Warning
			}
			else if (GrandTotal[i] < 50)
			{
				Write << "\nF";//Fail
			}
			else
				perror("Invalid value at Grand total.");
		}
		Write.close();
	}
	void generate_gpa(Transcript obj)
	{
		generate_grade(obj.getname());
		string store;
		ifstream Read;
		ofstream gpa;
		gpa.open("GPA.txt");
		Read.open("Grades.txt");
		while (!Read.eof())
		{
			getline(Read, store);
			if (store == "A+")
			{
				gpa << "\n4";
			}
			else if (store == "A")
			{
				gpa << "\n3.75";
			}
			else if (store == "B+")
			{
				gpa << "\n3.5";
			}
			else if (store == "B")
			{
				gpa << "\n3.25";
			}
			else if (store == "C+")
			{
				gpa << "\n03";
			}
			else if (store == "C")
			{
				gpa << "\n2.75";
			}
			else if (store == "D+")
			{
				gpa << "\n2.5";
			}
			else if (store == "D")
			{
				gpa << "\n2.25";
			}
			else if (store == "W")
			{
				gpa << "\n2.0";
			}
			else if (store == "F")
			{
				gpa << "\nFail";
			}
		}
		Read.close();
		gpa.close();
	}
	void generate_transcript(Transcript obj)
	{
		ofstream course;
		course.open("Courses.txt");
		course << "Second_Semester:"
			<< "\nCL1004"
			<< "\nOOP"
			<< "\n3"
			<< "\nCore"
			<< "\nEE1005"
			<< "\nDLD"
			<< "\n3"
			<< "\nCore"
			<< "\nMT1006"
			<< "\nD_E"
			<< "\n3"
			<< "\nCore"
			<< "\nSS1002"
			<< "\nISL"
			<< "\n3"
			<< "\nCore"
			<< "\nSS1008"
			<< "\nCPS"
			<< "\n2"
			<< "\nCore"
			<< "\nEL1005"
			<< "\nDLD_Lab"
			<< "\n1"
			<< "\nCore"
			<< "\nCL1004"
			<< "\nOOP_Lab"
			<< "\n1"
			<< "\nCore"
			<< "\nSL1008"
			<< "\nCPS_Lab"
			<< "\n1"
			<< "\nCore";
		course.close();
		generate_Grand_Total();
		generate_gpa(obj.getname());
		ifstream read;
		string section = "AI_2K";
		cout << "The transcript of " << obj.getname() << " is as follows:" << endl;
		cout << "Code\t\tCourse Name\t\t\tSection\tCrdHrs\tGrade\tPoints\tType\tRemarks" << endl;;
		read.open("Courses.txt");
		ifstream read2;
		read2.open("Grades.txt");
		ifstream read3;
		read3.open("GPA.txt");
		string store2;
		getline(read, store2);
		while (!read.eof())
		{
			getline(read, store2);
			cout << endl << store2;
			getline(read, store2);
			if (store2 == "Differential_Equations")
			{
				cout << "\t\t" << store2 << "\t\t";
			}
			else if (store2 == "Islamic_Studies")
			{
				cout << "\t\t" << store2 << "\t\t\t";
			}
			else
				cout << "\t\t" << store2 << "\t\t\t\t";
			cout << section;
			getline(read, store2);
			cout << "\t  " << store2;
			getline(read2, store2);
			if (store2 == "\0")
				getline(read2, store2);
			cout << "\t" << store2;
			getline(read3, store2);
			if (store2 == "\0")
				getline(read3, store2);
			cout << "\t" << store2;
			getline(read, store2);
			cout << "\t" << store2;
			cout << "\t   -";
			cout << endl;

		}
		float GPA = 0;
		read.close();
		read2.close();
	}
};
class Course :public Transcript
{
private:
	string s_name;
public:
	Course()
	{
	}
	Course(string name)
	{
		this->s_name = name;
	}
	string getname()
	{
		return s_name;
	}
	void assign_teacher_to_student(string name)
	{
		string STORE;
		ofstream fwrite;
		fwrite.open("ATtS.txt");
		ifstream READ, READ2;
		READ.open("studentname.txt");
		READ2.open("Teachername.txt");
		while (!READ.eof())
		{
			getline(READ, STORE);
			if (STORE == name)
				break;
		}
		fwrite << STORE;
		READ.close();
		while (!READ2.eof())
		{
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
			getline(READ2, STORE);
			fwrite << endl << STORE;
		}
		READ2.close();
		cout << "Teachers assigned to " << name << " successfully." << endl;
	}
	float show_GPA(string name)
	{
		generate_gpa(name);
		ifstream read0;
		read0.open("GPA.txt");
		string Temp;
		float cgpa = 0, Temp2 = 0;
		float score[8] = { 0,0,0,0,0,0,0,0 };
		while (!read0.eof())
		{
			getline(read0, Temp);
			for (int i = 0; i < 8; i++)
			{
				getline(read0, Temp);
				Temp2 = stof(Temp);
				score[i] = (Temp2 * 3);
			}
		}
		read0.close();
		for (int i = 0; i < 8; i++)
		{
			cgpa = cgpa + score[i];
		}
		float CGPA = cgpa / 24;
		cout << "The gpa of " << name << " is : " << CGPA;
		return CGPA;
	}
	void course_registration()
	{
		ifstream fread;
		string Tmp;
		fread.open("Courses.txt");
		while (!fread.eof())
		{
			getline(fread, Tmp);
			if (Tmp == "Second_Semester:")
				cout << "\nNo\tCode\t\tCourse Name\t\t\tCrdHr\t\t\tType" << endl;
			for (int i = 0; i < 8; i++)
			{
				cout << i + 1;
				getline(fread, Tmp);
				cout << "\t" << Tmp;
				getline(fread, Tmp);
				cout << "\t\t" << Tmp;
				getline(fread, Tmp);
				cout << "\t\t\t\t" << Tmp << "\t\t\t";
				getline(fread, Tmp);
				cout << Tmp << "\t\t";
				cout << endl;
			}
		}
		cout << "\nEnter your response one by one for the courses you want to register respectively (y/n): \n";
		char response[8] = { 'y','y','y','y','y','y','y','y' };
		for (int i = 0; i < 8; i++)
		{
			cin >> response[i];
			if (response[i] == 'y')
			{
				cout << "You have successfully registered to Course : " << i + 1 << endl;
			}
			if (response[i] == 'n')
			{
				cout << "It is a core course.You can't drop this course!" << endl;
				cout << "So, You have successfully registered to Course : " << i + 1 << endl;
			}
		}
		cout << "\n\t\t\t\tYou have succesfully registered to the courses.\n\n" << endl;

	}

};
class Attendace
{
private:
	string course;
public:


	void addattendance()
	{
		cout << "What course attendance do you want to update?" << endl;
		cin >> course;
		string fname;
		if (course == "OOP")
		{
			fname = "OOP_A.txt";
		}
		else if (course == "OOPLAB")
		{
			fname = "OOPLAB_A.txt";
		}
		else if (course == "DLD")
		{
			fname = "DLD_A.txt";
		}
		else if (course == "DLDLAB")
		{
			fname = "DLDLAB_A.txt";
		}
		else if (course == "DIFF")
		{
			fname = "DIFF_A.txt";
		}
		else if (course == "CPS")
		{
			fname = "CPS_A.txt";
		}
		else if (course == "CPSLAB")
		{
			fname = "CPSLAB_A.txt";
		}
		else if (course == "ISL")
		{
			fname = "ISL_A.txt";
		}
		while (1 == 1)
		{

			ifstream read;
			read.open(fname);
			int b;
			string n;
			string name;
			cout << "Enter the name of the student:" << endl;
			cin >> n;
			cout << "Which Attendance number you want to add?" << endl;
			cin >> b;
			string m;
			cout << "Enter Attendance:" << endl;
			cin >> m;
			int count = 0;
			int i = 0;
			string h;
			ifstream write;
			write.open(fname);
			fstream file;
			file.open("temp.txt", ios::out);
			int countname = 0;
			while (getline(read, name))
			{
				if (name == n)
				{
					while (getline(write, h))
					{
						count = countname + b;
						if (i == count)
						{
							file << m << endl;
						}
						else
						{
							file << h << endl;
						}
						i++;
					}

				}
				else
				{
					countname++;
				}
			}
			cout << "Added Successfully." << endl;
			read.close();
			file.close();
			write.close();
			if (fname == "OOP_A.txt")
			{
				remove("OOP_A.txt");
				rename("temp.txt", "OOP_A.txt");
			}
			else if (fname == "OOPLAB_A.txt")
			{
				remove("OOPLAB_A.txt");
				rename("temp.txt", "OOPLAB_A.txt");
			}
			else if (fname == "DLDLAB.txt")
			{
				remove("DLDLAB_A.txt");
				rename("temp.txt", "DLDLAB_A.txt");
			}
			else if (fname == "CPSLAB_A.txt")
			{
				remove("CPSLAB_A.txt");
				rename("temp.txt", "CPSLAB_A.txt");
			}
			else if (fname == "DLD_A.txt")
			{
				remove("DLD_A.txt");
				rename("temp.txt", "DLD_A.txt");
			}
			else if (fname == "DIFF_A.txt")
			{
				remove("DIFF_A.txt");
				rename("temp.txt", "DIFF_A.txt");
			}
			else if (fname == "ISL_A.txt")
			{
				remove("ISL_A.txt");
				rename("temp.txt", "ISL_A.txt");
			}
			else if (fname == "CPS_A.txt")
			{
				remove("CPS_A.txt");
				rename("temp.txt", "CPS_A.txt");
			}

			int a;
			cout << "Press 2 to leave:";
			cin >> a;
			if (a == 2)
			{
				break;
			}
		}

	}
};
class feedback
{
private:
	string feed;
	string remarks;
public:

	void setfeed()
	{
		fstream myfile;
		myfile.open("feedback.txt", ios::app);
		string name;
		string namec;
		cout << "Enter name of course:" << endl;
		cin >> namec;
		cout << "Enter name of Teacher:" << endl;
		cin >> name;
		myfile << name << endl;
		cout << "Enter remarks: " << endl;
		cin >> remarks;
		getline(cin, remarks);
		myfile << remarks << endl;
		myfile.close();
	}
};
class Teacher
{
private:
	string name;
	string course;
	string password;
public:
	Attendace attendance;//Composition here
	void setname(string name)
	{
		this->name = name;
		ofstream write;
		write.open("Teachername.txt", ios_base::app);
		write << name << endl;
		write.close();
	}

	void setpassword(string password)
	{
		this->password = password;
		ofstream write;
		write.open("Teacherpassword.txt", ios_base::app);
		write << password << endl;
		write.close();
	}

	string getname(string n)
	{
		return name;
	}

	void managemarks()
	{
		string course;

		cout << "What course marks do you want to update?" << endl;
		cin >> course;
		string fname;
		if (course == "OOP")
		{
			fname = "OOP.txt";
		}
		else if (course == "OOPLAB")
		{
			fname = "OOPLAB.txt";
		}
		else if (course == "DLD")
		{
			fname = "DLD.txt";
		}
		else if (course == "DLDLAB")
		{
			fname = "DLDLAB.txt";
		}
		else if (course == "DIFF")
		{
			fname = "DIFF.txt";
		}
		else if (course == "CPS")
		{
			fname = "CPS.txt";
		}
		else if (course == "CPSLAB")
		{
			fname = "CPSLAB.txt";
		}
		else if (course == "ISL")
		{
			fname = "ISL.txt";
		}
		while (1 == 1)
		{
			int a;
			cout << "Do You want to add marks of:" << endl;
			cout << "1. Assignments" << endl;
			cout << "2. Project" << endl;
			cout << "3. Finals" << endl;
			cout << "4. Sessionals" << endl;
			cout << "5. Quiz" << endl;
			cout << "6. Exit" << endl;
			cin >> a;
			if (a == 1)
			{
				ifstream read;
				read.open(fname);
				int b;
				string n;
				string name;
				cout << "Enter the name of the student:" << endl;
				cin >> n;
				cout << "Which Assignments number you want to add?" << endl;
				cin >> b;
				string m;
				cout << "Enter Marks:" << endl;
				cin >> m;
				int count = 0;
				int i = 0;
				string h;
				ifstream write;
				write.open(fname);
				fstream file;
				file.open("temp.txt", ios::out);
				int countname = 0;
				while (getline(read, name))
				{
					if (name == n)
					{
						while (getline(write, h))
						{
							count = countname + b + 1;
							if (i == count)
							{
								file << m << endl;
							}
							else
							{
								file << h << endl;
							}
							i++;
						}

					}
					else
					{
						countname++;
					}
				}
				cout << "Marks Added Successfully." << endl;
				read.close();
				file.close();
				write.close();
				if (fname == "OOP.txt")
				{
					remove("OOP.txt");
					rename("temp.txt", "OOP.txt");
				}
				else if (fname == "OOPLAB.txt")
				{
					remove("OOPLAB.txt");
					rename("temp.txt", "OOPLAB.txt");
				}
				else if (fname == "DLDLAB.txt")
				{
					remove("DLDLAB.txt");
					rename("temp.txt", "DLDLAB.txt");
				}
				else if (fname == "CPSLAB.txt")
				{
					remove("CPSLAB.txt");
					rename("temp.txt", "CPSLAB.txt");
				}
				else if (fname == "DLD.txt")
				{
					remove("DLD.txt");
					rename("temp.txt", "DLD.txt");
				}
				else if (fname == "DIFF.txt")
				{
					remove("DIFF.txt");
					rename("temp.txt", "DIFF.txt");
				}
				else if (fname == "ISL.txt")
				{
					remove("ISL.txt");
					rename("temp.txt", "ISL.txt");
				}
				else if (fname == "CPS.txt")
				{
					remove("CPS.txt");
					rename("temp.txt", "CPS.txt");
				}
			}
			else if (a == 2)
			{
				ifstream read;
				read.open(fname);
				ifstream write;
				write.open("OOP.txt");
				string n, m;
				cout << "Enter Name of the Student:" << endl;
				cin >> n;
				cout << "Enter marks of the project:" << endl;
				cin >> m;
				string h;
				int count = 0;
				int countname = 0;
				int i = 0;
				fstream file;
				file.open("temp.txt", ios::out);
				while (getline(read, name))
				{
					if (name == n)
					{
						while (getline(write, h))
						{
							count = countname + 14;
							if (i == count)
							{
								file << m << endl;
							}
							else
							{
								file << h << endl;
							}
							i++;
						}

					}
					else
					{
						countname++;
					}
				}
				cout << "Marks Added Successfully." << endl;
				read.close();
				file.close();
				write.close();
				if (fname == "OOP.txt")
				{
					remove("OOP.txt");
					rename("temp.txt", "OOP.txt");
				}
				else if (fname == "OOPLAB.txt")
				{
					remove("OOPLAB.txt");
					rename("temp.txt", "OOPLAB.txt");
				}
				else if (fname == "DLDLAB.txt")
				{
					remove("DLDLAB.txt");
					rename("temp.txt", "DLDLAB.txt");
				}
				else if (fname == "CPSLAB.txt")
				{
					remove("CPSLAB.txt");
					rename("temp.txt", "CPSLAB.txt");
				}
				else if (fname == "DLD.txt")
				{
					remove("DLD.txt");
					rename("temp.txt", "DLD.txt");
				}
				else if (fname == "DIFF.txt")
				{
					remove("DIFF.txt");
					rename("temp.txt", "DIFF.txt");
				}
				else if (fname == "ISL.txt")
				{
					remove("ISL.txt");
					rename("temp.txt", "ISL.txt");
				}
				else if (fname == "CPS.txt")
				{
					remove("CPS.txt");
					rename("temp.txt", "CPS.txt");
				}
			}
			else if (a == 3)
			{
				ifstream read;
				read.open(fname);
				ifstream write;
				write.open(fname);
				string n, m;
				cout << "Enter Name of the Student:" << endl;
				cin >> n;
				cout << "Enter marks of the Finals:" << endl;
				cin >> m;
				string h;
				int count = 0;
				int countname = 0;
				int i = 0;
				fstream file;
				file.open("temp.txt", ios::out);
				while (getline(read, name))
				{
					if (name == n)
					{
						while (getline(write, h))
						{
							count = countname + 16;
							if (i == count)
							{
								file << m << endl;
							}
							else
							{
								file << h << endl;
							}
							i++;
						}

					}
					else
					{
						countname++;
					}
				}
				cout << "Marks Added Successfully." << endl;
				read.close();
				file.close();
				write.close();
				if (fname == "OOP.txt")
				{
					remove("OOP.txt");
					rename("temp.txt", "OOP.txt");
				}
				else if (fname == "OOPLAB.txt")
				{
					remove("OOPLAB.txt");
					rename("temp.txt", "OOPLAB.txt");
				}
				else if (fname == "DLDLAB.txt")
				{
					remove("DLDLAB.txt");
					rename("temp.txt", "DLDLAB.txt");
				}
				else if (fname == "CPSLAB.txt")
				{
					remove("CPSLAB.txt");
					rename("temp.txt", "CPSLAB.txt");
				}
				else if (fname == "DLD.txt")
				{
					remove("DLD.txt");
					rename("temp.txt", "DLD.txt");
				}
				else if (fname == "DIFF.txt")
				{
					remove("DIFF.txt");
					rename("temp.txt", "DIFF.txt");
				}
				else if (fname == "ISL.txt")
				{
					remove("ISL.txt");
					rename("temp.txt", "ISL.txt");
				}
				else if (fname == "CPS.txt")
				{
					remove("CPS.txt");
					rename("temp.txt", "CPS.txt");
				}
			}
			else if (a == 4)
			{
				ifstream read;
				read.open(fname);
				ifstream write;
				write.open(fname);
				string n, m;
				cout << "Enter Name of the Student:" << endl;
				cin >> n;
				cout << "Enter marks of the Sessionals:" << endl;
				cin >> m;
				string h;
				int count = 0;
				int countname = 0;
				int i = 0;
				fstream file;
				file.open("temp.txt", ios::out);
				while (getline(read, name))
				{
					if (name == n)
					{
						while (getline(write, h))
						{
							count = countname + 18;
							if (i == count)
							{
								file << m << endl;
							}
							else
							{
								file << h << endl;
							}
							i++;
						}

					}
					else
					{
						countname++;
					}
				}
				cout << "Marks Added Successfully." << endl;
				read.close();
				file.close();
				write.close();
				if (fname == "OOP.txt")
				{
					remove("OOP.txt");
					rename("temp.txt", "OOP.txt");
				}
				else if (fname == "OOPLAB.txt")
				{
					remove("OOPLAB.txt");
					rename("temp.txt", "OOPLAB.txt");
				}
				else if (fname == "DLDLAB.txt")
				{
					remove("DLDLAB.txt");
					rename("temp.txt", "DLDLAB.txt");
				}
				else if (fname == "CPSLAB.txt")
				{
					remove("CPSLAB.txt");
					rename("temp.txt", "CPSLAB.txt");
				}
				else if (fname == "DLD.txt")
				{
					remove("DLD.txt");
					rename("temp.txt", "DLD.txt");
				}
				else if (fname == "DIFF.txt")
				{
					remove("DIFF.txt");
					rename("temp.txt", "DIFF.txt");
				}
				else if (fname == "ISL.txt")
				{
					remove("ISL.txt");
					rename("temp.txt", "ISL.txt");
				}
				else if (fname == "CPS.txt")
				{
					remove("CPS.txt");
					rename("temp.txt", "CPS.txt");
				}
			}
			else if (a == 5)
			{
				ifstream read;
				read.open(fname);
				int b;
				string n;
				string name;
				cout << "Enter the name of the student:" << endl;
				cin >> n;
				cout << "Which Quizes number you want to add?" << endl;
				cin >> b;
				string m;
				cout << "Enter Marks of the Quiz:" << endl;
				cin >> m;
				int count = 0;
				int i = 0;
				string h;
				ifstream write;
				write.open(fname);
				fstream file;
				file.open("temp.txt", ios::out);
				int countname = 0;
				while (getline(read, name))
				{
					if (name == n)
					{
						while (getline(write, h))
						{
							count = countname + b + 7;
							if (i == count)
							{
								file << m << endl;
							}
							else
							{
								file << h << endl;
							}
							i++;
						}

					}
					else
					{
						countname++;
					}
				}
				cout << "Marks Added Successfully." << endl;
				read.close();
				file.close();
				write.close();
				if (fname == "OOP.txt")
				{
					remove("OOP.txt");
					rename("temp.txt", "OOP.txt");
				}
				else if (fname == "OOPLAB.txt")
				{
					remove("OOPLAB.txt");
					rename("temp.txt", "OOPLAB.txt");
				}
				else if (fname == "DLDLAB.txt")
				{
					remove("DLDLAB.txt");
					rename("temp.txt", "DLDLAB.txt");
				}
				else if (fname == "CPSLAB.txt")
				{
					remove("CPSLAB.txt");
					rename("temp.txt", "CPSLAB.txt");
				}
				else if (fname == "DLD.txt")
				{
					remove("DLD.txt");
					rename("temp.txt", "DLD.txt");
				}
				else if (fname == "DIFF.txt")
				{
					remove("DIFF.txt");
					rename("temp.txt", "DIFF.txt");
				}
				else if (fname == "ISL.txt")
				{
					remove("ISL.txt");
					rename("temp.txt", "ISL.txt");
				}
				else if (fname == "CPS.txt")
				{
					remove("CPS.txt");
					rename("temp.txt", "CPS.txt");
				}
			}
			else if (a == 6)
			{
				break;
			}
		}

	}
	void seefeed(string name)
	{
		ifstream read;
		read.open("feedback.txt");
		ifstream write;
		write.open("feedback.txt");
		string n, h;
		int count = 0, i = 0, countname = 0;
		while (getline(read, n))
		{
			if (n == name)
			{

				while (getline(write, h))
				{
					count = countname + 1;
					if (i == count)
					{
						cout << h << endl;
					}
					i++;
				}
			}
			else
			{
				countname++;
			}
		}
		read.close();
	}

};

class Student
{
private:
	string name;
	string rollno;
	string password;
public:
	tsp tsp;
	Course course;
	Transcript tr;
	void feeDetails()
	{
		
			string str, str2;
			ofstream write1;
			ifstream read, read2;
			write1.open("PayingInstruments.txt");
			read.open("PayingInstruments.txt");
			write1 << "HBL"
				<< "\nFBL"
				<< "\nHMB"
				<< "\nNBOP"
				<< "\nZIB"
				<< "\nBAH"
				<< "\nkuickpay"
				<< "\nOnline_Banking";
			write1.close();
			int R1, R2, R3, R4;
			srand(time(NULL));
			R1 = (rand() % 8) + 2;
			R2 = (rand() % 8) + 3;
			R3 = (rand() % 199999) + 19999;
			R4 = (rand() % 199999) + 19999;
			write1.open("FeeDetails.txt");
			write1 << "Spring";
			R3 = (rand() % 199999) + 19999;
			write1 << "\n" << R3;
			for (int i = 0; i < R1; i++)
			{
				while (!read.eof())
				{
					getline(read, str);
				}
			}
			write1 << "\n" << str;
			write1 << "\n" << R4;
			write1 << "\n186500"
				<< "\n1-Feb-2022"
				<< "\n10-Feb-2022"
				<< "\nAkhtarHussain"
				<< "\nPosted"
				<< "\n-"
				<< "\nFall";
			R3 = (rand() % 199999) + 19999;
			write1 << "\n" << R3;
			for (int i = 0; i < R2; i++)
			{
				while (!read.eof())
				{
					getline(read, str);
				}
			}
			write1 << "\n" << str;
			write1 << "\n" << R3;
			write1 << "\n146500"
				<< "\n10-July-2021"
				<< "\n1-july-2021"
				<< "\nKuickpay"
				<< "\nPosted"
				<< "\n-";
			write1.close();
			read2.open("FeeDetails.txt");
			cout << "Sr.No.\tSemester\tChallan Number\t Method\t  Method Number Amount\tDue Date\tPayment Date\tEntered by\tStatus\tOperation\n";
			for (int i = 0; i < 2; i++)
			{
				cout << i + 1 << "\t";
				for (int i = 0; i < 10; i++)
				{
					getline(read2, str);
					if (str == "Spring" || str == "Fall")
						cout << str << "\t\t\t";
					else
						cout << str << "\t ";
				}

				cout << endl;
			}
		
	}
	void setstudentname(string name)
	{
		this->name = name;
		ofstream write;
		write.open("Studentname.txt", ios_base::app);
		write << name << endl;
		write.close();
	}

	void setstudentrollno(string rollno)
	{
		this->rollno = rollno;
		ofstream write;
		write.open("rollno.txt", ios_base::app);
		write << rollno << endl;
		write.close();
	}

	void setstudentpassword(string password)
	{
		this->password = password;
		ofstream write;
		write.open("Studentpassword.txt", ios_base::app);
		write << password << endl;
		write.close();
	}
	string getstudentname()
	{

		return name;

	}
	void viewmarks(string name)
	{

		while (1 == 1)
		{
			int i;
			cout << "Which course do you want to see marks of :" << endl;
			cout << "1. Object-Oriented Programming " << endl;
			cout << "2. Object-Oriented Programming Lab" << endl;
			cout << "3. Digital Design Logic " << endl;
			cout << "4. Digital Design Logic Lab" << endl;
			cout << "5. Islamic Studies " << endl;
			cout << "6. Differential Equations " << endl;
			cout << "7. Communication and Presentation skills  " << endl;
			cout << "8. Communication and Presentation skills lab " << endl;
			cout << "9.Exit" << endl;
			cin >> i;
			if (i == 1)
			{
				ifstream read;
				read.open("OOP.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 2)
			{
				ifstream read;
				read.open("OOPLAB.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 3)
			{
				ifstream read;
				read.open("DLD.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 4)
			{
				ifstream read;
				read.open("DLDLAB.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 5)
			{
				ifstream read;
				read.open("ISL.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 6)
			{
				ifstream read;
				read.open("DIFF.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 7)
			{
				ifstream read;
				read.open("CPS.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 8)
			{
				ifstream read;
				read.open("CPSLAB.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 18)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 9)
			{
				break;
			}
		}
	}
	void viewpersonalinfo(string name, string r)
	{
		system("CLS");
		cout << "====================================================================================" << endl;
		cout << "Name :" << name;
		cout << "        Phone Number: 03349593199";
		cout << "        Blood Group :O+" << endl;
		cout << "Roll Number :" << r;
		cout << "     Father Name : Zafar Ahmed";
		cout << "     Department : Computer Science" << endl;
		cout << "=====================================================================================" << endl;
	}
	void viewattendace(string name)
	{
		while (1 == 1)
		{
			int i;
			cout << "Which course do you want to see Attendace of :" << endl;
			cout << "1. Object-Oriented Programming " << endl;
			cout << "2. Object-Oriented Programming Lab" << endl;
			cout << "3. Digital Design Logic " << endl;
			cout << "4. Digital Design Logic Lab" << endl;
			cout << "5. Islamic Studies " << endl;
			cout << "6. Differential Equations " << endl;
			cout << "7. Communication and Presentation skills  " << endl;
			cout << "8. Communication and Presentation skills lab " << endl;
			cout << "9.Exit" << endl;
			cin >> i;
			if (i == 1)
			{
				ifstream read;
				read.open("OOP_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 2)
			{
				ifstream read;
				read.open("OOPLAB_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 3)
			{
				ifstream read;
				read.open("DLD_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 4)
			{
				ifstream read;
				read.open("DLDLAB_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 5)
			{
				ifstream read;
				read.open("ISL_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 6)
			{
				ifstream read;
				read.open("DIFF_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 7)
			{
				ifstream read;
				read.open("CPS_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 8)
			{
				ifstream read;
				read.open("CPSLAB_A.txt");
				string n;
				string h;
				while (getline(read, n))
				{
					if (n == name)
					{
						int i = 0;
						while (i < 10)
						{
							getline(read, h);
							cout << h << endl;
							i++;
						}
					}
				}
			}
			if (i == 9)
			{
				break;
			}
		}
	}
	feedback f;//Composition
};
class Admin
{
private:
	string id = "AmirRehman";
	int password = 123456;
	Teacher* teach = new Teacher[5];//Inheritance and Aggregation here
	Student* stud = new Student[5];
public:
	Course c;
	string getid()
	{
		return id;
	}
	int getpw()
	{
		return password;
	}

	void addteacher()
	{
		string n, pw;

		cout << "Add the new teacher name and password :";
		cin >> n >> pw;
		int c = sizeof(teach) / sizeof(teach[0]);
		c++;
		teach[c].setname(n);
		teach[c].setpassword(pw);
		cout << "Teacher Added Successfully." << endl;
	}
	void updateteacher()
	{
		string n, pw;
		cout << "Enter the name of the teacher you want to update:";
		cin >> n;
		cout << "Enter the new password :";
		cin >> pw;
		string temp = "temp.txt";
		fstream file;
		file.open("temp.txt", ios::out);
		ifstream read;
		read.open("Teachername.txt");
		ifstream red;
		red.open("Teacherpassword.txt");
		string name;
		int countname = 0;
		int countpw = 0;
		string PW;

		while (getline(read, name))
		{
			if (n == name)
			{
				while (getline(red, PW))
				{
					if (countname == countpw)
					{
						file << pw << endl;
					}
					else
					{
						file << PW << endl;
					}
					countpw++;
				}
			}
			else
			{
				countname++;
			}
		}
		cout << "Teacher Updated Successfully." << endl;
		read.close();
		red.close();
		file.close();
		remove("Teacherpassword.txt");
		rename("temp.txt", "Teacherpassword.txt");
	}


	void deleteteacher()
	{
		string n;
		cout << "Enter the name of the teacher you want to delete :";
		cin >> n;
		string temp = "temp.txt";
		fstream file;
		file.open("temp.txt", ios::out);
		ifstream read;
		read.open("Teachername.txt");
		ifstream red;
		red.open("Teacherpassword.txt");
		string name;
		int countname = 0;
		int countpw = 0;
		string PW;
		fstream write;
		write.open("temp2.txt", ios::out);

		while (getline(read, name))
		{
			if (n == name)
			{
				while (getline(red, PW))
				{
					if (countname != countpw)
					{
						file << PW << endl;
					}
					countpw++;
				}
			}
			else
			{
				write << name << endl;
				countname++;
			}
		}
		cout << "Teacher Deleted Successfully." << endl;
		read.close();
		red.close();
		file.close();
		write.close();
		remove("Teacherpassword.txt");
		rename("temp.txt", "Teacherpassword.txt");
		remove("Teachername.txt");
		rename("temp2.txt", "Teachername.txt");

	}

	void addstudent()
	{
		string n, pw, rollno;

		cout << "Add the new student name, rollno and password :";
		cin >> n >> rollno >> pw;
		int p = sizeof(stud) / sizeof(stud[0]);
		p++;
		stud[p].setstudentname(n);
		stud[p].setstudentpassword(pw);
		stud[p].setstudentrollno(rollno);
		ofstream write;
		write.open("OOP.txt", ios_base::app);
		write << endl;
		write << n << endl;
		write << "Assignment" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "Quiz" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "0" << endl;
		write << "Project" << endl;
		write << "0" << endl;
		write << "Final" << endl;
		write << "0" << endl;
		write << "Sessional" << endl;
		write << "0" << endl;
		write.close();
		ofstream a;

		a.open("DLD.txt", ios_base::app);
		a << endl;
		a << n << endl;
		a << "Assignment" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "Quiz" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "0" << endl;
		a << "Project" << endl;
		a << "0" << endl;
		a << "Final" << endl;
		a << "0" << endl;
		a << "Sessional" << endl;
		a << "0" << endl;
		a.close();
		ofstream b;
		b.open("CPS.txt", ios_base::app);
		b << endl;
		b << n << endl;
		b << "Assignment" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "Quiz" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "0" << endl;
		b << "Project" << endl;
		b << "0" << endl;
		b << "Final" << endl;
		b << "0" << endl;
		b << "Sessional" << endl;
		b << "0" << endl;
		b.close();
		ofstream w;
		w.open("ISL.txt", ios_base::app);
		w << endl;
		w << n << endl;
		w << "Assignment" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "Quiz" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "0" << endl;
		w << "Project" << endl;
		w << "0" << endl;
		w << "Final" << endl;
		w << "0" << endl;
		w << "Sessional" << endl;
		w << "0" << endl;
		w.close();
		ofstream r;
		r.open("DIFF.txt", ios_base::app);
		r << endl;
		r << n << endl;
		r << "Assignment" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "Quiz" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "0" << endl;
		r << "Project" << endl;
		r << "0" << endl;
		r << "Final" << endl;
		r << "0" << endl;
		r << "Sessional" << endl;
		r << "0" << endl;
		r.close();
		ofstream c;
		c.open("DLDLAB.txt", ios_base::app);
		c << endl;
		c << n << endl;
		c << "Assignment" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "Quiz" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "0" << endl;
		c << "Project" << endl;
		c << "0" << endl;
		c << "Final" << endl;
		c << "0" << endl;
		c << "Sessional" << endl;
		c << "0" << endl;
		c.close();
		ofstream d;
		d.open("CPSLAB.txt", ios_base::app);
		d << endl;
		d << n << endl;
		d << "Assignment" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "Quiz" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "0" << endl;
		d << "Project" << endl;
		d << "0" << endl;
		d << "Final" << endl;
		d << "0" << endl;
		d << "Sessional" << endl;
		d << "0" << endl;
		d.close();
		ofstream o;
		o.open("OOPLAB.txt", ios_base::app);
		o << endl;
		o << n << endl;
		o << "Assignment" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "Quiz" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "0" << endl;
		o << "Project" << endl;
		o << "0" << endl;
		o << "Final" << endl;
		o << "0" << endl;
		o << "Sessional" << endl;
		o << "0" << endl;
		o.close();
		ofstream z;
		z.open("OOP_A.txt", ios::app);
		z << endl;
		z << n << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z << "-" << endl;
		z.close();
		ofstream x;
		x.open("OOPLAB_A.txt", ios::app);
		x << endl;
		x << n << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x << "-" << endl;
		x.close();
		ofstream v;
		v.open("DLDLAB_A.txt", ios::app);
		v << endl;
		v << n << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v << "-" << endl;
		v.close();
		ofstream q;
		q.open("CPSLAB_A.txt", ios::app);
		q << endl;
		q << n << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q << "-" << endl;
		q.close();
		ofstream l;
		l.open("DLD_A.txt", ios::app);
		l << endl;
		l << n << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l << "-" << endl;
		l.close();
		ofstream k;
		k.open("DIFF_A.txt", ios::app);
		k << endl;
		k << n << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k << "-" << endl;
		k.close();
		ofstream g;
		g.open("CPS_A.txt", ios::app);
		g << endl;
		g << n << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g << "-" << endl;
		g.close();
		ofstream s;
		s.open("ISL_A.txt", ios::app);
		s << endl;
		s << n << endl;
		s << "-" << endl;
		s << "-" << endl;
		z << "-" << endl;
		s << "-" << endl;
		s << "-" << endl;
		s << "-" << endl;
		s << "-" << endl;
		s << "-" << endl;
		s << "-" << endl;
		s << "-" << endl;
		s.close();
		cout << "Student Added Successfully." << endl;
	}
	void updatestudent()
	{
		string n, pw, rollno;
		cout << "Enter the name of the student you want to update:";
		cin >> n;
		cout << "Enter the new password and rollno :";
		cin >> pw >> rollno;
		fstream file;
		file.open("temp.txt", ios::out);
		ifstream read;
		fstream rol;
		rol.open("temp2.txt", ios::out);
		read.open("Studentname.txt");
		ifstream red;
		red.open("Studentpassword.txt");
		ifstream roll;
		roll.open("rollno.txt");
		string name;
		int countname = 0;
		int countpw = 0;
		string PW;
		string roll_np;
		int countrollno = 0;
		while (getline(read, name))
		{
			if (n == name)
			{
				while (getline(red, PW))
				{
					if (countname == countpw)
					{
						file << pw << endl;
					}
					else
					{
						file << PW << endl;
					}
					countpw++;
				}
				while (getline(roll, roll_np))
				{
					if (countname == countrollno)
					{
						rol << rollno << endl;
					}
					else
					{
						rol << roll_np << endl;
					}
					countrollno++;
				}
			}
			else
			{
				countname++;
			}
		}
		cout << "Student Updated Successfully." << endl;
		rol.close();
		file.close();
		roll.close();
		red.close();
		read.close();
		remove("Studentpassword.txt");
		rename("temp.txt", "Studentpassword.txt");
		remove("rollno.txt");
		rename("temp2.txt", "rollno.txt");
	}
	void deletestudent()
	{
		string n;
		cout << "Enter name of the student you want to delete:";
		cin >> n;
		fstream file;
		file.open("temp.txt", ios::out);
		ifstream read;
		read.open("Studentname.txt");
		ifstream red;
		red.open("Studentpassword.txt");
		ifstream roll;
		roll.open("rollno.txt");
		string name;
		int countname = 0;
		int countpw = 0;
		string PW;
		fstream write;
		write.open("temp2.txt", ios::out);
		fstream right;
		right.open("temp3.txt", ios::out);
		string rollno;
		int countrollno = 0;
		while (getline(read, name))
		{
			if (n == name)
			{
				while (getline(red, PW))
				{
					if (countname != countpw)
					{
						file << PW << endl;
					}
					countpw++;
				}
				while (getline(roll, rollno))
				{
					if (countname != countrollno)
					{
						right << rollno << endl;
					}
					countrollno++;
				}
			}
			else
			{
				write << name << endl;
				countname++;
			}
		}
		cout << "Student Deleted Successfully." << endl;
		roll.close();
		right.close();
		read.close();
		red.close();
		file.close();
		write.close();
		remove("Studentpassword.txt");
		rename("temp.txt", "Studentpassword.txt");
		remove("Studentname.txt");
		rename("temp2.txt", "Studentname.txt");
		remove("rollno.txt");
		rename("temp3.txt", "rollno.txt");
	}
};
class Portal
{
private:
	bool check = 0;
	Admin A;
public:
	void loginAdmin()
	{
		string ID;
		int PW;
		cout << "\nEnter User ID: ";
		cin >> ID;
		cout << "\nEnter Password: ";
		cin >> PW;
		if (ID == A.getid() && PW == A.getpw())
		{
			check = 1;
		}
	}
	void LoginAsAdmin()
	{
		loginAdmin();
		for (int i = 1; i <= 5; i++)
		{
			if (check == 1)
			{
				cout << "\nLogged in as Admin Successfully .";
				break;
			}
			else
			{
				cout << "\nWrong ID or Password. Please try again!" << endl;
				loginAdmin();
			}
		}
	}

	void LoginAsTeacher()
	{
		string ID;
		string PW;
		string ID1;
		string PW1;
		cout << "\nEnter User ID: ";
		cin >> ID;
		cout << "\nEnter Password: ";
		cin >> PW;
		ifstream read;

		read.open("Teachername.txt");
		ifstream red;

		red.open("Teacherpassword.txt");
		while (getline(read, ID1) && getline(red, PW1))
		{
			if (ID == ID1 && PW == PW1)
			{
				check = 1;
			}
		}
		for (int i = 1; i <= 5; i++)
		{
			if (check == 1)
			{
				cout << "\nLogged in as Teacher Successfully .";
				break;
			}
			else
			{
				cout << "\nWrong ID or Password. Please try again!" << endl;
				string ID;
				string PW;
				string ID1;
				string PW1;
				cout << "\nEnter User ID: ";
				cin >> ID;
				cout << "\nEnter Password: ";
				cin >> PW;
				ifstream read;
				read.open("Teachername.txt");
				ifstream red;

				red.open("Teacherpassword.txt");
				while (getline(read, ID1) && getline(red, PW1))
				{
					if (ID == ID1 && PW == PW1)
					{
						check = 1;
					}
				}
			}
		}
	}
	void LoginStudent()
	{
		string ID;
		string PW;
		string ID1;
		string PW1;
		cout << "\nEnter User ID: ";
		cin >> ID;
		cout << "\nEnter Password: ";
		cin >> PW;
		ifstream read;

		read.open("rollno.txt");
		ifstream red;

		red.open("Studentpassword.txt");
		while (getline(read, ID1) && getline(red, PW1))
		{
			if (ID == ID1 && PW == PW1)
			{
				check = 1;
			}
		}


	}
	void LoginAsStudent()
	{
		LoginStudent();
		for (int i = 1; i <= 5; i++)
		{
			if (check == 1)
			{
				cout << "\nLogged in as Student Successfully .";
				break;
			}
			else
			{
				cout << "\nWrong ID or Password. Please try again!" << endl;
				LoginStudent();
			}
		}
	}
};


