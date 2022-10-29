/*
 * Programmer: Namias, Jhon Keneth Ryan B.
 *
 *          Title: Car Dealership
 * Course/Section: CS1A North
 *           Date: October 15, 2022
 *      Professor: Alban Ryan Rei
 *
 *  Info:
 *			In order to be chosen, this program will be offered for 
 *			the midterm program with two other programs. 
 *				
 *
 *  Notes:
 *			Midterm program for presentation 
 */

#define _CRT_SECURE_NO_WARNINGS

#include <conio.h>
#include <ctime>
#include <fstream>
#include <iostream>
#include <istream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <Windows.h>
#include <time.h>  
#include <iomanip>
#include <sstream>

class NamiasClass {
public:
	void display_menu(const std::string& manufacturer,
		const std::string names[],
		const int prices[],
		const size_t numCars) {
		std::cout << manufacturer << " Cars" << std::endl;
		
		for (size_t i = 0; i < numCars; i++) {
			std::cout << "    (" << i + 1
				<< ") "
				<< names[i]
				<< " for "
				<< prices[i]
				<< " pesos"
				<< std::endl;
		}

	}

	void display_color(const std::string color_index[],
		const size_t numColors) {
		
		for (size_t a = 0; a < numColors; a++) {
			std::cout << "    (" << a + 1
				<< ") "
				<< color_index[a]
				<< std::endl;
		}

		std::cout << "\n  Please select the Number of Color: ";
	}
};

// Identifiers
void login();
void registr();
void forgot();
void AboutUs();
void searchHouse();
void deleteHouse();


struct house
{
	int reg_num;
	char name[100];
	std::string type[3] = { "Low Density", "Medium Density", "High Density" };
	double cost;
};

struct Employee
{
	char Username[100];
	char Password[100];
};

struct house_search
{
	char reg_num[100];
	char name[100];
	char cost[100];
	std::string type[3] = { "Low Density", "Medium Density", "High Density" };
};

// Title screen callout once
bool flag = false;

int main()
{
	
	// Text color settings
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// SetConsoleTextAttribute(h, 1);

	// system defaults
	system("mode 70,100");

	// Font and Command Promt size
	static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 1, &fontex);
	fontex.FontWeight = 200;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex);


	
	if (flag == false) {
		system("color a");
		system("cls");

		std::cout << std::endl;
		std::cout << "     .----------------.   .----------------.   .----------------. \n";

		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << ".--------------. ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << ".--------------.";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << ".--------------.";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";

		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|     ";
		SetConsoleTextAttribute(h, 1);
		std::cout << "______";
		SetConsoleTextAttribute(h, 7);
		std::cout << "   |";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|  ";
		SetConsoleTextAttribute(h, 4);
		std::cout << "________";
		SetConsoleTextAttribute(h, 7);
		std::cout << "    | ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " | ";
		SetConsoleTextAttribute(h, 13);
		std::cout << "____    ____";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | \n";

		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 1);
		std::cout << "   .' ___  |  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 4);
		std::cout << " |_   ___ `.  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 13);
		std::cout << "|_   \\  /   _|";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";
	
		SetConsoleTextAttribute(h, 10);
		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 1);
		std::cout << "  / .'   \\_|  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 4);
		std::cout << "   | |   `. \\ ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 13);
		std::cout << "  |   \\/   |  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";
		
		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 1);
		std::cout << "  | |         ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 4);
		std::cout << "   | |    | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 13);
		std::cout << "  | |\\  /| |  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";

		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 1);
		std::cout << "  \\ `.___.'\\  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 4);
		std::cout << "  _| |___.' / ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 13);
		std::cout << " _| |_\\/_| |_ ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";
		
		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 1);
		std::cout << "   `._____.'  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 4);
		std::cout << " |________.'  ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(h, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(h, 7);
		std::cout << " |";
		SetConsoleTextAttribute(h, 13);
		std::cout << "|_____||_____|";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";

		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|              |";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|              |";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "|              |";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";

		std::cout << "    | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "'--------------'";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "'--------------'";
		SetConsoleTextAttribute(h, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(h, 7);
		std::cout << "'--------------'";
		SetConsoleTextAttribute(h, 10);
		std::cout << " |\n";

		std::cout << "     '----------------'   '----------------'   '----------------' \n";
		std::cout << "                  Car Dealership Management Program               \n";

		std::cout << std::endl;

		SetConsoleTextAttribute(h, 1);
		std::cout << "             _____";
		SetConsoleTextAttribute(h, 2);
		std::cout << "  ___  ";
		SetConsoleTextAttribute(h, 3);
		std::cout << "  ____    ";
		SetConsoleTextAttribute(h, 4);
		std::cout << "__  __ ";
		SetConsoleTextAttribute(h, 5);
		std::cout << " ___      ";
		SetConsoleTextAttribute(h, 6);
		std::cout << "  ____\n";




		SetConsoleTextAttribute(h, 1);
		std::cout << "            / ___/";
		SetConsoleTextAttribute(h, 2);
		std::cout << " / _ \\";
		SetConsoleTextAttribute(h, 3);
		std::cout << "  / __ \\ ";
		SetConsoleTextAttribute(h, 4);
		std::cout << " / / / ";
		SetConsoleTextAttribute(h, 5);
		std::cout << "/ / _ \\  ";
		SetConsoleTextAttribute(h, 6);
		std::cout << "    / / /\n";



		SetConsoleTextAttribute(h, 1);
		std::cout << "           / (_ / ";
		SetConsoleTextAttribute(h, 2);
		std::cout << "/ , _/ ";
		SetConsoleTextAttribute(h, 3);
		std::cout << "/ /_/ / ";
		SetConsoleTextAttribute(h, 4);
		std::cout << "/ /_/ / ";
		SetConsoleTextAttribute(h, 5);
		std::cout << "/ ___/     ";
		SetConsoleTextAttribute(h, 6);
		std::cout << "/_  _/\n";

		SetConsoleTextAttribute(h, 1);
		std::cout << "           \\___/ ";
		SetConsoleTextAttribute(h, 2);
		std::cout << "/_/|_| ";
		SetConsoleTextAttribute(h, 3);
		std::cout << " \\____/  ";
		SetConsoleTextAttribute(h, 4);
		std::cout << "\\____/ ";
		SetConsoleTextAttribute(h, 5);
		std::cout << "/_/      ";
		SetConsoleTextAttribute(h, 6);
		std::cout << "    /_/  \n";


		SetConsoleTextAttribute(h, 10);



		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "   ";
		system("pause");

	}
	

	









	char order_more = 'n',
		 order_confirmation;

	int Payment,
		Value,
		Change,
		Cars,
		Color;
		
		
	int toyota_car_prices[] = {
		2042000,
		1595000,
		1056000,
		700000,
		1065000,
		1650000,
		2083000,
		2414000,
		4950000,
		2308000,
		2508000,
		1115000,
		1249000,
		1678000,
		1296000,
		1038000,
		2298000
	};

	std::string toyota_car_names[] = {
		"Camry",
		"Corolla Altis",
		"Vios",
		"Wigo",
		"Yaris",
		"Corolla_Cross",
		"FJ_Cruiser",
		"Fortuner",
		"Land_Cruiser",
		"Accord",
		"Accord_Hybrid",
		"Civic",
		"Clarity",
		"CR_V",
		"HR_V",
		"Insight",
		"Odyssey"
	};
	std::string toyota_car_color[] = {
		"White",
		"Black",
		"Gray",
		"Silver",
		"Red",
		"Blue",
		"Brown",
		"Green",
		"Beige",
		"Orange",
		"Gold",
		"Yellow",
		"Purple"
	};

		// system defaults
		system("color 01");
		system("mode 70, 100");

		int choice;
		int adminchoice;
		int employeechoice;

		int employeeData;
		int carsData;

		

																				   
		  /*
		std::cout << "		  CCCCCCCCCCCCC     DDDDDDDDDDDDD             MMMMMMMM               MMMMMMMM\n"
				  << "	   CCC::::::::::::C     D::::::::::::DDD          M:::::::M             M:::::::M\n"
				  << "   CC:::::::::::::::C     D:::::::::::::::DD        M::::::::M           M::::::::M\n"
				  << "  C:::::CCCCCCCC::::C     DDD:::::DDDDD:::::D       M:::::::::M         M:::::::::M\n"
				  << " C:::::C       CCCCCC       D:::::D    D:::::D      M::::::::::M       M::::::::::M\n"
				  << "C:::::C                     D:::::D     D:::::D     M:::::::::::M     M:::::::::::M\n"
				  << "C:::::C                     D:::::D     D:::::D     M:::::::M::::M   M::::M:::::::M\n"
				  << "C:::::C                     D:::::D     D:::::D     M::::::M M::::M M::::M M::::::M\n"
				  << "C:::::C                     D:::::D     D:::::D     M::::::M  M::::M::::M  M::::::M\n"
				  << "C:::::C                     D:::::D     D:::::D     M::::::M   M:::::::M   M::::::M\n"
				  << "C:::::C                     D:::::D     D:::::D     M::::::M    M:::::M    M::::::M\n"
				  << " C:::::C       CCCCCC       D:::::D    D:::::D      M::::::M     MMMMM     M::::::M\n"
				  << "  C:::::CCCCCCCC::::C     DDD:::::DDDDD:::::D       M::::::M               M::::::M\n"
				  << "   CC:::::::::::::::C     D:::::::::::::::DD        M::::::M               M::::::M\n"
				  << "	   CCC::::::::::::C     D::::::::::::DDD          M::::::M               M::::::M\n"
				  << "		  CCCCCCCCCCCCC     DDDDDDDDDDDDD             MMMMMMMM               MMMMMMMM";
																				  
																				   
				

				 
		std::cout << "________/\\\\\\\\\__/\\\\\\\\\\\\_____/\\\\____________/\\\\_\n"
				  << " _____/\\\////////__\/\\\////////\\\__\/\\\\\\________/\\\\\\_\n"
				  << "  ___/\\\/___________\/\\\______\//\\\_\/\\\//\\\____/\\\//\\\_\n"
				  << "   __/\\\_____________\/\\\_______\/\\\_\/\\\\///\\\/\\\/_\/\\\_\n"
				  << "    _\/\\\_____________\/\\\_______\/\\\_\/\\\__\///\\\/___\/\\\_\n"
				  << "     _\//\\\____________\/\\\_______\/\\\_\/\\\____\///_____\/\\\_\n"
				  << "      __\///\\\__________\/\\\_______/\\\__\/\\\_____________\/\\\_\n"
				  << "       ____\////\\\\\\\\\_\/\\\\\\\\\\\\/___\/\\\_____________\/\\\_\n"
				  << "        _______\/////////__\////////////_____\///______________\///__\n";

												 
					*/                                                              
																				   
																				   
																				   
		flag = true;

		
		// Login Form
	LoginForm:
		std::cout << std::endl;
		SetConsoleTextAttribute(h, 13);
		std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
		SetConsoleTextAttribute(h, 1);
		std::cout << "                   Car Dealership Management (CDM)                    \n\n";
		SetConsoleTextAttribute(h, 10);
		std::cout << "                      Welcome to the Login Menu                       \n\n";
		SetConsoleTextAttribute(h, 13);
		std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
		SetConsoleTextAttribute(h, 1);
		
		std::cout << "   [1] Admin\n";
		std::cout << "   [2] Employee\n";
		std::cout << "   [3] Guest\n\n";

		SetConsoleTextAttribute(h, 2);
		std::cout << "   [4] About Us\n\n";

		SetConsoleTextAttribute(h, 4);
		std::cout << "   [5] Quit\n\n";
		
		SetConsoleTextAttribute(h, 1);
		std::cout << "   Please insert your choice: ";
		SetConsoleTextAttribute(h, 13);
		std::cin >> choice;
		std::cin.ignore();


	// Admin
	AdminLogin:
		if (choice == 1) {
			system("cls");
			
			int adminlogin = 0;
			std::string user, pass, u, p;

			std::cout << std::endl;
			SetConsoleTextAttribute(h, 13);
			std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
			SetConsoleTextAttribute(h, 1);
			std::cout << "                   Car Dealership Management (CDM)                    \n\n";
			SetConsoleTextAttribute(h, 10);
			std::cout << "                             Admin Login                              \n\n";
			SetConsoleTextAttribute(h, 13);
			std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
			SetConsoleTextAttribute(h, 1);

			SetConsoleTextAttribute(h, 10);
			std::cout << "\n   Press ESC button to go back" << std::endl;
			
			SetConsoleTextAttribute(h, 1);
			std::cout << "\n   Please enter the following details" << std::endl;

			std::cout << "\n   Username: ";
			SetConsoleTextAttribute(h, 13);
			
			// ESC button back
			int esc;
			esc = _getch();
			if (esc == 27) {
				system("cls");
				goto LoginForm;
			}


			std::cin >> user;
			SetConsoleTextAttribute(h, 1);

			std::cout << "   Password: ";
			SetConsoleTextAttribute(h, 13);

			int i = 0;
			char c = ' ';
			char password[9];

			// Hides password
			while (i < 6) 
			{
				password[i] = _getch();
				c = password[i];
				
				if (c == 6) {
					break;
				}

				else {
					std::cout << "*";
				}
				
				i++;
			}
			password[i] = '\0';
			i = 0;

			pass = password;
			
			std::cin.ignore();

			// Loading XD
			std::cout << "\n\n   Verifying your login details please wait";
			for (int i = 0; i < 6; i++)
			{
				std::cout << ".";
				Sleep(500);
			}

			std::ifstream input("Text Files/Admin.txt");
			
			while (input >> u >> p)
			{
				if (u == user && p == pass)
				{
					adminlogin = 1;
					std::cout << "\n\n   Admin login successful!";
					Sleep(2000);
					system("cls");

				}

				else if (u != user)
				{
					std::cout << "\n\n   Invalid username please try again";
					Sleep(3000);
					goto AdminLogin;
				}

				else if (p != pass)
				{
					std::cout << "\n\n   Invalid password please try again";
					Sleep(3000);
					goto AdminLogin;
				}


				else {
					adminlogin = 0;
					system("cls");
					system("color 4f");
					std::cout << "\n\n   Wrong username or password!"
							  << "\n   Try to login again\n\n";
					
					std::cout << "\n   Press Enter to Continue!";
					std::cin.get();
					std::cin.get();

					main();
				}

			}

			input.close();
			
			if (adminlogin == 1)
			{
				system("cls");
				
				// Login
			AdminMenu:
				system("cls");
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
				SetConsoleTextAttribute(h, 1);
				std::cout << "                   Car Dealership Management (CDM)                    \n\n";
				SetConsoleTextAttribute(h, 10);
				std::cout << "                              Admin Menu                              \n";
				std::cout << "                               (";
				SetConsoleTextAttribute(h, 11);
				std::cout << user;
				SetConsoleTextAttribute(h, 10);
				std::cout << ")                       \n\n";
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
				SetConsoleTextAttribute(h, 1);

				std::cout << "   [1] Employee Data\n";
				std::cout << "   [2] Cars Data\n";
				std::cout << "   [3] Order Logs\n";
				std::cout << "   [4] Order Cars\n";
				SetConsoleTextAttribute(h, 2);
				std::cout << "   [5] About Us\n\n";
				SetConsoleTextAttribute(h, 4);
				std::cout << "   [6] Back\n\n";
				SetConsoleTextAttribute(h, 1);
				
				std::cout << "   Please insert your choice: ";

				SetConsoleTextAttribute(h, 13);
				std::cin >> adminchoice;
				std::cout << std::endl;
				std::cin.ignore();

				// Employee Data
				EmployeeData:
				if (adminchoice == 1) {
					system("cls");

					std::cout << std::endl;
					SetConsoleTextAttribute(h, 13);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
					SetConsoleTextAttribute(h, 1);
					std::cout << "                   Car Dealership Management (CDM)                    \n\n";
					SetConsoleTextAttribute(h, 10);
					std::cout << "                            Employee Data                             \n\n";
					SetConsoleTextAttribute(h, 13);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
					SetConsoleTextAttribute(h, 1);

					std::cout << "   [1] Add Employee Data\n";
					std::cout << "   [2] Display Employee Data\n";
					std::cout << "   [3] Search Employee Data\n";
					std::cout << "   [4] Edit Employee Data\n";
					SetConsoleTextAttribute(h, 4);
					std::cout << "   [5] Delete Employee Data\n\n";
					std::cout << "   [6] Back\n\n";

					SetConsoleTextAttribute(h, 1);
					std::cout << "   Please insert your choice: ";

					SetConsoleTextAttribute(h, 13);
					std::cin >> employeeData;
					std::cout << std::endl;
					std::cin.ignore();

					// Add Employee Data
					if (employeeData == 1) {

						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
						SetConsoleTextAttribute(h, 1);
						std::cout << "                   Car Dealership Management (CDM)                    \n\n";
						SetConsoleTextAttribute(h, 10);
						std::cout << "                          Add Employee Data                           \n\n";
						SetConsoleTextAttribute(h, 13);
						std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
						SetConsoleTextAttribute(h, 1);


						std::string adduser, addpass, ru, rp;
						std::cout << "\n   Enter the Username: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> adduser;
						SetConsoleTextAttribute(h, 1);
						std::cout << "\n   Enter the Password: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> addpass;

						std::ofstream reg("Text Files/Employee.txt", std::ios::app);
						reg << adduser << '\t' << addpass << std::endl;
						std::cout << "\n   Employee Data Added!\n";
						std::cout << "\n   Press Enter to Continue!";
						std::cin.get();
						Sleep(2000);
						goto EmployeeData;

					}

					// Display Employee Data
					else if (employeeData == 2) {
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
						SetConsoleTextAttribute(h, 1);
						std::cout << "                   Car Dealership Management (CDM)                    \n\n";
						SetConsoleTextAttribute(h, 10);
						std::cout << "                        Display Employee Data                         \n\n";
						SetConsoleTextAttribute(h, 13);
						std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
						SetConsoleTextAttribute(h, 1);

						std::ifstream EmployeeFile("Text Files/Employee.txt");

						std::string name;
						std::string pass;
						
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 10);
						std::cout << "\t\t     Username" << "\t\t" << "Password";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;

						SetConsoleTextAttribute(h, 1);
						while (EmployeeFile >> name >> pass) {
							std::cout << "\t\t     " << name << "\t\t" << pass << std::endl;
							std::cout << "----------------------------------------------------------------------";
							std::cout << std::endl;
						}

						std::cout << std::endl;
						std::cout << "\n   All Employees Data Displayed!";
						std::cout << "\n   Press Enter to Continue!";
						std::cin.get();
						Sleep(2000);
						goto EmployeeData;

					}

					// Search Employee Data
					else if (employeeData == 3) {
						system("cls");
						forgot();




						
						
						/*
						// Recovering Employee Data
						int ch;
						system("cls");
						std::cout << "\n   Forgotten? We're here for help";
						std::cout << "\n   (1) Search your ID by Username";
						std::cout << "\n   (2) Search your ID by Password";
						std::cout << "\n   (3) Main menu\n";
						std::cout << "\n   Enter your choice: ";
						std::cin >> ch;
						
						switch (ch)
						{
							case 1:
							{
								int login = 0;
								std::string searchuser, su, sp;
								std::cout << "\n   Enter your remembered Username: ";
								std::cin >> searchuser;

								std::ifstream searchu("Employee.txt");
								while (searchu >> su >> sp)
								{
									if (su == searchuser)
									{
										login = 1;

									}
								}
								searchu.close();
								
								if (login == 1)
								{
									std::cout << "\n\n   Nice, Your account has been found";
									std::cout << "\n\n   Your Password ~> .:[" << sp << "]:.";
									
									std::cout << "\n   Press Enter to go back to Menu";
									std::cin.get();
									std::cin.get();
									system("cls");
									main();
								}
								
								else
								{
									std::cout << "\n   Sorry, Your Username is not found in our database\n";
									std::cout << "\n   Please kindly contact your system administrator for more details \n";
									
									std::cout << "\n   Press Enter to go back to Menu";
									std::cin.get();
									std::cin.get();
									system("cls");
									main();
								}
								break;
							}
							
							case 2:
							{
								int login = 0;
								std::string searchpass, su2, sp2;
								std::cout << "\n   Enter the remembered Password: ";
								std::cin >> searchpass;

								std::ifstream searchp("Employee.txt");
								while (searchp >> su2 >> sp2)
								{
									if (sp2 == searchpass)
									{
										login = 1;
									}
								}
								searchp.close();
								
								if (login == 1)
								{
									std::cout << "\n\n   Your Password is found in the database";
									std::cout << "\n\n   Your ID ~> .:[" << su2 << "]:.";
								
									std::cout << "\n   Press Enter to go back to Menu";
									std::cin.get();
									std::cin.get();
									system("cls");
									main();
								}
								
								else
								{
									std::cout << "\n\n   Sorry, We cannot found your password in our database";
									std::cout << "\n\n   Kindly contact your administrator for more information";
								
									std::cout << "\n   Press Enter to go back to Menu";
									std::cin.get();
									std::cin.get();
									system("cls");
									main();
								}

								break;
							}

							case 3:
							{
								std::cin.get();
								main();
							}
							
							default:
								std::cout << "Sorry, You entered wrong choice. Kindly try again" << std::endl;
								forgot();
							}

							*/
					}

					// Edit Employee Data
					else if (employeeData == 4) {

					}

					// Delete Employee Data
					else if (employeeData == 5) {

					}

					// Back
					else if (employeeData == 6) {
						system("cls");
						goto AdminMenu;

					}






				}

				// Cars Data
				else if (adminchoice == 2) {
					CarData:

					system("cls");

					std::cout << std::endl;
					SetConsoleTextAttribute(h, 13);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
					SetConsoleTextAttribute(h, 1);
					std::cout << "                   Car Dealership Management (CDM)                    \n\n";
					SetConsoleTextAttribute(h, 10);
					std::cout << "                               Cars Data                              \n\n";
					SetConsoleTextAttribute(h, 13);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
					SetConsoleTextAttribute(h, 1);


					int CarChoice;
					std::cout << std::endl
						<< "   [1] View Cars Color"
						<< std::endl
						<< "   [2] View Cars Name"
						<< std::endl
						<< "   [3] View Cars Price"
						<< std::endl
						<< std::endl;
						
					SetConsoleTextAttribute(h, 4);
					std::cout << "   [4] Back"
							  << std::endl;

					SetConsoleTextAttribute(h, 1);
					std::cout << std::endl
							  << "   Please enter your input: ";

					SetConsoleTextAttribute(h, 13);
					std::cin >> CarChoice;


					// View Cars Color
					if (CarChoice == 1)
					{

						// Car Color
						std::ifstream Cars_Color("Text Files/Cars_Color.txt");
						if (Cars_Color.is_open())
						{
							std::cout << std::endl
									  << "   Car Colors XD"
									  << std::endl;	  


							int number_of_color = 0;
							std::string line;
							std::ifstream myCars_Color("Text Files/Cars_Color.txt");

							while (std::getline(myCars_Color, line))
								++number_of_color;

							std::string Toyota_Cars_Color[50];

							for (int i = 0; i < number_of_color; ++i)
							{

								Cars_Color >> Toyota_Cars_Color[i];
								std::cout << "     ("
										  << i+1
										  << ") "
										  << Toyota_Cars_Color[i]
										  << std::endl;

							}

							std::cout << std::endl
									  << "   ";

							system("pause");
							goto CarData;
						}

					}


					// View Cars Name
					else if (CarChoice == 2) {

						NamiasClass NamiasObject;
						NamiasObject.display_menu("\n   Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));
						std::cout << "   ";
						system("pause");
						goto CarData;
						
						
						/*
						// Car Name
						std::ifstream Cars_Name("Text Files/Cars_Name.txt");
						if (Cars_Name.is_open())
						{

							std::cout << std::endl
								<< "   Car Name XD"
								<< std::endl;


							int number_of_names = 0;
							std::string line;
							std::ifstream myCars_Name("Text Files/Cars_Name.txt");

							while (std::getline(myCars_Name, line))
								++number_of_names;

							std::string Toyota_Cars_Name[50];

							for (int i = 0; i < number_of_names; ++i)
							{
								Cars_Name >> Toyota_Cars_Name[i];
								std::cout << "     ("
										  << i+1
										  << ") "
										  << Toyota_Cars_Name[i]
										  << std::endl;
							
							}
							std::cout << "   ";
							system("pause");
							goto CarData;
						}
						*/
					}

					// View Cars Price
					else if (CarChoice == 3) {
						
						// Car Price
						std::ifstream Cars_Price("Text Files/Cars_Price.txt");
						if (Cars_Price.is_open())
						{

							std::cout << std::endl
								<< "   Car Price XD"
								<< std::endl;


							int number_of_price = 0;
							std::string line;
							std::ifstream myCars_Color("Text Files/Cars_Price.txt");

							while (std::getline(myCars_Color, line))
								++number_of_price;

							std::string Toyota_Cars_Price[50];

							for (int i = 0; i < number_of_price; ++i)
							{

								Cars_Price >> Toyota_Cars_Price[i];
								std::cout << "     ("
										  << i + 1
										  << ") "
										  << Toyota_Cars_Price[i]
										  << " Pesos"
										  << std::endl;

							}

							std::cout << std::endl
								<< "   ";

							system("pause");
							goto CarData;
						}

					}

					// Back
					else if (CarChoice == 4) {

						Sleep(500);
						goto AdminMenu;

					}

					else {
						std::cout << std::endl 
							<< "   Wrong Input! Please try again"
							<< std::endl;

						Sleep(2000);
						goto CarData;



					}





















				}

				// Order Logs
				else if (adminchoice == 3) {
				system("cls");

				std::cout << std::endl;
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
				SetConsoleTextAttribute(h, 1);
				std::cout << "                   Car Dealership Management (CDM)                    \n\n";
				SetConsoleTextAttribute(h, 10);
				std::cout << "                              Order Logs                              \n\n";
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
				SetConsoleTextAttribute(h, 1);

				std::ifstream Order_Logs("Text Files/Order_Logs.txt");

				std::string date;
				std::string time;
				std::string car_name;
				std::string car_color;
				std::string car_price;
				std::string car_payment;
				std::string car_change;

				SetConsoleTextAttribute(h, 13);
				std::cout << "\n======================================================================" << std::endl;
				SetConsoleTextAttribute(h, 10);
				std::cout << "      Date";
				SetConsoleTextAttribute(h, 13);
				std::cout << "    |\t";
				SetConsoleTextAttribute(h, 10);
				std::cout << "  Time";
				SetConsoleTextAttribute(h, 13);
				std::cout << "   |  ";
				SetConsoleTextAttribute(h, 10);
				std::cout << "Car Name";
				SetConsoleTextAttribute(h, 13);
				std::cout << "  |\t ";
				SetConsoleTextAttribute(h, 10);
				std::cout << "Car Color";
				SetConsoleTextAttribute(h, 13);
				std::cout << "  |\t";
				SetConsoleTextAttribute(h, 10);
				std::cout << "Car Price";
				SetConsoleTextAttribute(h, 13);
				std::cout << "\n======================================================================" << std::endl;

				SetConsoleTextAttribute(h, 1);
				while (Order_Logs >> date >> time >> car_name >> car_color >> car_price) {
					std::cout << "   " << date << "\t" << time << "    " << car_name << "\t " << car_color << "\t\t" << car_price << std::endl;
					std::cout << "----------------------------------------------------------------------";
					std::cout << std::endl;
				}

				std::cout << std::endl;
				std::cout << "\n   All Order Logs Data!";
				std::cout << "\n   Press Enter to Continue!";
				std::cin.get();
				system("cls");
				goto AdminMenu;


















				}

				// Order Cars
				else if (adminchoice == 4) {
					system("cls");
					goto OrderCars;
				}

				// About Us
				else if (adminchoice == 5) {
					AboutUs();
					std::cout << "\n\n   Press ENTER to go back ";
					std::cin.get();

				}

				// Back
				else if (adminchoice == 6) {
					system("cls");
					goto LoginForm;
				}

				// Wrong input
				else {
					system("cls");
					system("color 4f");
					std::cout << "\n   Wrong input entered!\n" << std::endl;
					Sleep(2000);
					goto AdminMenu;
				}

			}

			// Wrong login
			else
			{
				system("cls");
				system("color 4f");
				std::cout << "\n   Wrong input entered!\n" << std::endl;
				goto AdminLogin;
			}
		}
		
		// Employee (not done yet)
		else if (choice == 2) {
		Employeelogin:
			system("cls");

			int Employeelogin = 0;
			std::string user, pass, u, p;

			std::cout << std::endl;
			SetConsoleTextAttribute(h, 13);
			std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
			SetConsoleTextAttribute(h, 1);
			std::cout << "                   Car Dealership Management (CDM)                    \n\n";
			SetConsoleTextAttribute(h, 10);
			std::cout << "                            Employee Login                            \n\n";
			SetConsoleTextAttribute(h, 13);
			std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
			SetConsoleTextAttribute(h, 1);

			SetConsoleTextAttribute(h, 10);
			std::cout << "\n   Press ESC button to go back" << std::endl;

			SetConsoleTextAttribute(h, 1);
			std::cout << "\n   Please enter the following details" << std::endl;

			std::cout << "\n   Username: ";
			SetConsoleTextAttribute(h, 13);

			// ESC button back
			int esc;
			esc = _getch();
			if (esc == 27) {
				system("cls");
				goto LoginForm;
			}


			std::cin >> user;
			SetConsoleTextAttribute(h, 1);

			std::cout << "   Password: ";
			SetConsoleTextAttribute(h, 13);

			int i = 0;
			char c = ' ';
			char password[9];

			// Hides password
			while (i < 4)
			{
				password[i] = _getch();
				c = password[i];

				if (c == 4) {
					break;
				}

				else {
					std::cout << "*";
				}

				i++;
			}
			password[i] = '\0';
			i = 0;

			pass = password;

			std::cin.ignore();

			// Loading XD
			std::cout << "\n\n   Verifying you login details please wait";
			for (int i = 0; i < 6; i++)
			{
				std::cout << ".";
				Sleep(500);
			}

			std::ifstream input("Text Files/Employee.txt");

			std::cout << u << " " << p;

			return 0;

			while (input >> u >> p)
			{
				std::cout << u << " " << p;

				return 0;
				if (u == user && p == pass)
				{
					Employeelogin = 1;
					std::cout << "\n\n   Employee login successful!";
					Sleep(2000);
					system("cls");

				}

				else if (u != user)
				{
					std::cout << "\n\n   Invalid username please try again";
					Sleep(3000);
					goto Employeelogin;
				}

				else if (p != pass)
				{
					std::cout << "\n\n   Invalid password please try again";
					Sleep(3000);
					goto Employeelogin;
				}


				else {
					Employeelogin = 0;
					system("cls");
					system("color 4f");
					std::cout << "\n\n   Wrong username or password!"
						<< "\n   Try to login again\n\n";

					std::cout << "\n   Press Enter to Continue!";
					std::cin.get();
					std::cin.get();

					main();
				}

			}

			input.close();

			if (Employeelogin == 1)
			{
				system("cls");
				std::cin.get();

				// Login
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
				SetConsoleTextAttribute(h, 1);
				std::cout << "                   Car Dealership Management (CDM)                    \n\n";
				SetConsoleTextAttribute(h, 10);
				std::cout << "                           Employee Access                            \n";
				std::cout << "                             (" << user << ")                         \n\n";
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
				SetConsoleTextAttribute(h, 1);

				std::cout << "   [1] Order Logs\n";
				std::cout << "   [2] Order Cars\n";
				SetConsoleTextAttribute(h, 2);
				std::cout << "   [3] About Us\n\n";
				SetConsoleTextAttribute(h, 4);
				std::cout << "   [4] Exit\n\n";
				SetConsoleTextAttribute(h, 1);

				std::cout << "   Please insert your choice: ";

				SetConsoleTextAttribute(h, 13);
				std::cin >> adminchoice;
				std::cout << std::endl;
				std::cin.ignore();

				// Order Logs
				if (adminchoice == 1) {

				}

				// Order Cars
				else if (adminchoice == 2) {

				}

				// About Us
				else if (adminchoice == 3) {
					AboutUs();
					std::cout << "\n\n   Press ENTER to go back ";
					std::cin.get();

				}

				// Exit
				else if (adminchoice == 4) {

				}

				// Wrong input
				else {
					//default
				}


			}

			// Wrong login
			else
			{
				std::cout << "\nLOGIN ERROR!!!"
						  << "\nPlease check your username and password\n";
				main();
			}
		}











		// Guest
		else if (choice == 3) {
			// go directly no need for logic
		}

		// About Us
		else if (choice == 4) {
			AboutUs();
			std::cout << "\n\n   Press ENTER to go back ";
			std::cin.get();

			main();

		}
		// Exit
		else if (choice == 5) {
			system("cls");
			system("color 01");
			std::cout << "\n   Thanks for using this program\n"
					  << "\n   This program is created by @PP_Namias\n\n";
			return 0;
		}

		// Wrong input
		else {
			system("cls");
			system("color 4f");
			std::cout << "\n   Wrong input entered!\n" << std::endl;
			return 0;
		}













		/*
		switch (choice)
		{
		case 1:
			login();

			break;
		case 2:
			registr();
			break;
		case 3:
			forgot();
			break;
		case 4:

			std::cout << "Thanks for using this program\nThis program is created by @Thestral9\n\n";
			break;
		default:
			system("cls");
			std::cout << "Wrong Choice Intered\n" << std::endl;
			main();
		}

		
		*/


		OrderCars:
		system("color 01");
		system("cls");
	
		std::cout << std::endl;
		std::cout << "  Welcome to Toyota Car Dealership\n"
				  << "  Here's the list of Cars: \n ";
		
		// Callout car names/prices [formated]
		NamiasClass NamiasObject;
		NamiasObject.display_menu("\n   Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));
		
		std::cout << "\n  Input Number According to the type of Car: ";
		std::cin >> Cars;
		
		if (Cars < 1 || Cars > sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
			system("cls");
			system("color 4f");
			std::cout << "\n  Invalid input please try ordering again.\n";
			Sleep(2000);
			goto OrderCars;
		}

		else if (Cars >= 1 || Cars <= sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
			// Order confirmation
			std::cout << "  You selected "
				<< toyota_car_names[Cars - 1]
				<< " for "
				<< toyota_car_prices[Cars - 1]
				<< " pesos\n";
		
			std::cout << "\n  To be confirmed type Y Yes, Type N if No: ";
			std::cin >> order_confirmation;

			if (order_confirmation == 'y' || order_confirmation == 'Y') {

				std::cout << "\n  You Ordered "
					<< toyota_car_names[Cars - 1]
					<< std::endl;

				system("cls");
				system("color 0A");


				// Select Color
				SelectColor:
				std::cout << std::endl
						  << "   What Color of "
						  << toyota_car_names[Cars - 1]
						  << " do you want?"
						  << std::endl;

				// Callout all Color [Fomated]
				NamiasClass NamiasObject2;
				NamiasObject2.display_color(toyota_car_color, sizeof(toyota_car_color) / sizeof(toyota_car_color[0]));
				std::cin >> Color;

				// Verification
				if (Color < 1 || Color > sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
					system("cls");
					system("color 4f");
					std::cout << "  Please try again if you entered the incorrect information.";
					Sleep(2000);
					goto SelectColor;
				}

				else if (Color >= 1 || Color <= sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
					std::cout << "  You pick color "
						<< toyota_car_color[Color - 1]
						<< std::endl;
					
					Sleep(2000);

					Value = toyota_car_prices[Cars - 1];

					
					// Cashier 
					Cashier:
					system("cls");
					system("color 05");

					// Your order summary
					std::cout << std::endl
							  << "  You selected {"
							  << toyota_car_color[Color - 1]
							  << "} "
							  << toyota_car_names[Cars - 1]
							  << " for "
							  << toyota_car_prices[Cars - 1]
							  << " pesos"
							  << std::endl;

					// Total of the order
					std::cout << std::endl
							  << "  Total Amount: " 
							  << Value 
							  << std::endl;

					std::cout << std::endl
							  << "  Enter The Amount of Payment: ";

					std::cin  >> Payment;

					Change = Payment - Value;

					if (Change >= 1) {
						std::cout << "\n  Change: " << Change << "\n\n";

						Sleep(500);

					}

					else if (Change == 0) {
						std::cout << "\n  You paid the exact amount of money needed.\n\n";

						Sleep(2000);

					}

					else if (Change <= -1) {
						system("cls");
						system("color 4f");
						std::cout << "\n  You don't have enough money.";
						Sleep(2000);
						goto Cashier;
					}

					else {
						system("cls");
						system("color 4f");
						std::cout << "\n  Invalid input please try ordering again.\n";
						std::cin.ignore();
						Sleep(2000);
						goto Cashier;
					}

					// Receipt
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 13);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 1);
					std::cout << "                        Thank for your purchase                       \n"
							  << "                     We love to hear your feedback                    \n"
							  << "                         Call: (02) 8-361-8794                        \n"
							  << "                          Globe: 09272533969                          \n"
							  << "                       Email: jkrbn99@gmail.com                       \n"
							  << "                        Website: Toyota.com.ph                        \n"
							  << std::endl;
					SetConsoleTextAttribute(h, 13);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
					SetConsoleTextAttribute(h, 1);
					std::cout << std::endl;


					// Order Logs [INPUT]
					auto t = std::time(nullptr);
					auto tm = *std::localtime(&t);

					std::ostringstream oss;
					oss << std::put_time(&tm, "%d_%m_%Y\t%H_%M_%S");
					auto str = oss.str();

					std::ofstream reg("Text Files/Order_Logs.txt", std::ios::app);
					reg << std::endl << str << "\t" << toyota_car_names[Cars - 1] << '\t' << toyota_car_color[Color - 1] << '\t' << toyota_car_prices[Cars - 1] << '\t';
					std::cin.get();

					// Order again?
					std::cout << "\n  Do you want to order again? Type Y if yes and type N if no: ";
					std::cin >> order_more;

					if (order_more == 'n' || order_more == 'N') {

						std::cout << "  Thank you for your purchase! <3";
						
						Sleep(2000);
						main();
					}

					else if (order_more == 'y' || order_more == 'Y') {
						std::cout << "  Thank you for your purchase! <3";
						
						Sleep(2000);
						goto OrderCars;

					}
					else {
						system("cls");
						system("color 4f");
						std::cout << "\n  Invalid input! Type only Y or N\n";
						
						std::cout << "\n   Press Enter to Continue!";
						std::cin.get();

						Sleep(2000);
						goto OrderCars;
					}

				}

				else {
					system("cls");
					system("color 4f");
					std::cout << "\n  Invalid input please try again.\n";		
					Sleep(2000);
					goto SelectColor;
				}


			}
			else if (order_confirmation == 'n' || order_confirmation == 'N') {
				std::cout << "\n  You Canceled the order.\n";
				Sleep(2000);

				goto OrderCars;
			}

			else {
				system("cls");
				system("color 4f");
				std::cout << "\n  Invalid input! Type only Y or N\n";
				Sleep(2000);

				goto OrderCars;
			}



		}

		else {
			system("cls");
			system("color 4f");
			std::cout << "\n  Invalid input please try ordering again.";
			std::cin.ignore();
			Sleep(2000);
			goto LoginForm;
		}

		
}












void login()
{
	int login;
	std::string user, pass, u, p;
	system("cls");
	std::cout << "Please enter the following details" << std::endl;
	std::cout << "Username: ";
	std::cin >> user;
	std::cout << "Password: ";
	std::cin >> pass;

	std::ifstream input("Text Files/database.txt");
	while (input >> u >> p)
	{
		if (u == user && p == pass)

		{
			login = 1;
			system("cls");
		}
	}
	input.close();
	if (login == 1)
	{
		std::cout << "\nHello " << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
		std::cin.get();
		std::cin.get();
		main();
	}
	else
	{
		std::cout << "\nLOGIN ERROR\nPlease check your username and password\n";
		main();
	}
}

void registr()
{

	std::string reguser, regpass, ru, rp;
	system("cls");
	std::cout << "\n   Enter the Username: ";
	std::cin >> reguser;
	std::cout << "\n   Enter the Password: ";
	std::cin >> regpass;

	std::ofstream reg("Text Files/Employee.txt", std::ios::app);
	reg << reguser << ' ' << regpass << std::endl;
	system("cls");
	std::cout << "\n   Registration Sucessful\n";
	main();


}

void forgot()
{
	int ch;
	system("cls");
	std::cout << "Forgotten ? We're here for help\n";
	std::cout << "1.Search your id by username" << std::endl;
	std::cout << "2.Search your id by password" << std::endl;
	std::cout << "3.Main menu" << std::endl;
	std::cout << "Enter your choice :";
	std::cin >> ch;
	switch (ch)
	{
	case 1:
	{
		int login = 0;
		std::string searchuser, su, sp;
		std::cout << "\nEnter your remembered username :";
		std::cin >> searchuser;

		std::ifstream searchu("Text Files/Employee.txt");
		while (searchu >> su >> sp)
		{
			if (su == searchuser)
			{
				login = 1;
			}
		}
		searchu.close();
		if (login == 1)
		{
			std::cout << "\n\nHurray, account found\n";
			std::cout << "\nYour password is " << sp;
			std::cin.get();
			std::cin.get();
			system("cls");
			main();
		}
		else
		{
			std::cout << "\nSorry, Your userID is not found in our database\n";
			std::cout << "\nPlease kindly contact your system administrator for more details \n";
			std::cin.get();
			std::cin.get();
			main();
		}
		break;
	}
	case 2:
	{
		int login = 0;
		std::string searchpass, su2, sp2;
		std::cout << "\nEnter the remembered password :";
		std::cin >> searchpass;

		std::ifstream searchp("Text Files/Employee.txt");
		while (searchp >> su2 >> sp2)
		{
			if (sp2 == searchpass)
			{
				login = 1;
			}
		}
		searchp.close();
		if (login == 1)
		{
			std::cout << "\nYour password is found in the database \n";
			std::cout << "\nYour Id is : " << su2;
			std::cin.get();
			std::cin.get();
			system("cls");
			main();
		}
		else
		{
			std::cout << "Sorry, We cannot found your password in our database \n";
			std::cout << "\nkindly contact your administrator for more information\n";
			std::cin.get();
			std::cin.get();
			main();
		}

		break;
	}

	case 3:
	{
		std::cin.get();
		main();
	}
	default:
		std::cout << "Sorry, You entered wrong choice. Kindly try again" << std::endl;
		forgot();
	}


	



}




void searchHouse()
{
	char ch[100];
	int choise;
	int result = 0;
	int i = 0;
	std::vector<house_search> hse(10);

	std::cout << "\t\t\t*******SEARCH MENU**********" << std::endl;
	std::cout << "\t\t\t (1) To search by Registration Number " << std::endl;
	std::cout << "\t\t\t (2) To Search by House Name " << std::endl;
	std::cout << "\t\t\t*************************" << std::endl;
	std::cout << "Enter your choice : ";
	std::cin >> choise;
	if (choise == 1) {
		std::cout << "Enter House Reg_Num : ";
		std::cin >> ch;
	}
	else if (choise == 2) {
		std::cout << "Enter House Name : ";
		std::cin >> ch;
	}


	std::fstream myfile;
	myfile.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", std::ios::in);
	while (!myfile.eof())
	{
		myfile.getline(hse[i].reg_num, 150, ' ');
		myfile.getline(hse[i].name, 150, ' ');
		myfile.getline(hse[i].cost, 150, '\n');

		if (choise == 1)
		{
			if (strcmp(ch, hse[i].reg_num) == 0)
			{
				//cout<<"Found record is "<<endl;
				std::cout << "--------------------------------------------" << std::endl;
				std::cout << hse[i].reg_num << "\t " << hse[i].name << "\t " << hse[i].cost << std::endl;
				std::cout << "--------------------------------------------" << std::endl;
				result = 1;
			}

		}
		else if (choise == 2)
		{
			if (strcmp(ch, hse[i].name) == 0)
			{
				std::cout << "--------------------------------------------" << std::endl;
				std::cout << hse[i].reg_num << "\t " << hse[i].name << "\t " << hse[i].cost << std::endl;
				std::cout << "--------------------------------------------" << std::endl;
				result = 1;
			}

		}

	}
	if (result == 0)
	{
		std::cout << "***No Record Found!***" << std::endl;
	}
	myfile.close();
	hse.clear();
}

void deleteHouse()
{
	int way;
	int i = 0;
	char name[20];
	char id[5];
	char ee[1];
	int flag = 0;

	std::cout << "\t\t\t****************************" << std::endl;
	std::cout << "\t\t\t (1) To DELETE by Reg_Num" << std::endl;
	std::cout << "\t\t\t (2) tO delete by Name" << std::endl;
	std::cout << "\t\t\t****************************" << std::endl;
	std::cout << "Enter your choice : ";
	std::cin >> way;
	if (way == 1) {
		std::cout << "Enter House Reg_Num To DELETE : ";
		std::cin >> id;
	}
	else
		if (way == 2) {
			std::cout << "Enter House Name To DELETE : ";
			std::cin >> name;
		}

	std::vector<house_search> hse(10);
	std::fstream myfile;
	std::fstream search_file;
	myfile.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", std::ios::in);//read
	search_file.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", std::ios::out);//write

	while (!myfile.eof()) {
		myfile.getline(hse[i].reg_num, 150, ' ');
		myfile.getline(hse[i].name, 150, ' ');
		myfile.getline(hse[i].cost, 150, '\n');

		if (way == 1)
		{
			if (strcmp(id, hse[i].reg_num) != 0 && strcmp(ee, hse[i].reg_num) != 0)
			{
				search_file << hse[i].reg_num << " " << hse[i].name << " " << hse[i].cost << "\n";
				flag = 1;

			}

		}
		else if (way == 2)
		{

			if (strcmp(name, hse[i].name) != 0 && strcmp(ee, hse[i].name) != 0)
			{
				search_file << hse[i].reg_num << " " << hse[i].name << " " << hse[i].cost << "\n";
				flag = 1;

			}

		}


	}
	myfile.close();
	search_file.close();
	remove("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt");
	rename("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/fake_storage.txt", "C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt");
	hse.clear();
	if (flag == 0)
	{
		std::cout << "Nothing to Delete was found" << std::endl;
	}



	
}

void AboutUs() {

}