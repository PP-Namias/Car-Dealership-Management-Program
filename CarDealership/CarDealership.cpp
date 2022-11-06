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
#include <locale>
#include <fcntl.h>
#include <io.h>

class NamiasClass {
public:
	// Text color settings
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// SetConsoleTextAttribute(h, 1);

	void display_menu(const std::string& manufacturer,
		const std::string names[],
		const int prices[],
		const size_t numCars) {
		SetConsoleTextAttribute(h, 13);
		std::cout << manufacturer << " Cars:" << std::endl;
	
		for (size_t i = 0; i < numCars; i++) {

			SetConsoleTextAttribute(h, 10);
			std::cout << "   [";
			SetConsoleTextAttribute(h, 15);
			std::cout << i + 1;
			SetConsoleTextAttribute(h, 10);
			std::cout << "]\t";
			SetConsoleTextAttribute(h, 9);
			std::cout << names[i];
			SetConsoleTextAttribute(h, 11);
			std::cout << "\tfor ";
			SetConsoleTextAttribute(h, 9);


			// structuring currency
			struct group_facet : public std::numpunct<char> {
			protected:
				std::string do_grouping() const { return "\003"; }
			};

			std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));

			std::cout << std::fixed << prices[i];

			SetConsoleTextAttribute(h, 11);
			std::cout << " pesos";
			SetConsoleTextAttribute(h, 11);
			std::cout << std::endl;

		}

	}

	void display_color(const std::string color_index[],
		const size_t numColors) {
		
		for (size_t a = 0; a < numColors; a++) {
			SetConsoleTextAttribute(h, 10);
			std::cout << "    [";
			SetConsoleTextAttribute(h, 15);
			std::cout << a + 1;
			SetConsoleTextAttribute(h, 10);
			std::cout << "] ";
			SetConsoleTextAttribute(h, 9);
			std::cout << color_index[a];
			SetConsoleTextAttribute(h, 10);
			std::cout << std::endl;
		}
	}
};




// Identifiers
void login();
void registr();
void forgot();
void AboutUs();
void searchHouse();
void deleteHouse();
void load();
void gotoxy();


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

// Title screen call-out once
bool flag = false;


/*

GR_Yaris
Vios_GR
Camry
Prius
Yaris
Vios
Wigo
Veloz
Fortuner
Raize
RAV4
Rush
Avanza
Innova
Hiace
Hilux
Alphard





		Camry
		Corolla_Altis
		Vios
		Wigo
		Yaris
		Corolla_Cross
		FJ_Cruiser
		Fortuner
		Land_Cruiser
		Accord
		Accord_Hybrid
		Civic
		Clarity
		CR_V
		HR_V
		Insight
		Odyssey

2740000,
2402000,
2402000,
2436000,
1114000,
985000,
705000,
1250000,
2519000,
1051000,
2500000,
1176000,
1059000,
1764000,
1166000,
1919000,
4160000,

*/


int main()
{

	system("TITLE Car Dealership Management Program By: @PP-Namias");
	//goto OrderLogs;
	// Text file to array dynamically XD [Color]
	std::string toyota_car_color[15];
	int number_of_color = 0;

	// test txt to array
	std::ifstream Cars_Color("Text Files/Cars_Color.txt");
	if (Cars_Color.is_open())
	{
		std::string line;
		std::ifstream myCars_Color("Text Files/Cars_Color.txt");

		while (std::getline(myCars_Color, line))
			++number_of_color;

		for (int i = 0; i < number_of_color; ++i)
		{
			Cars_Color >> toyota_car_color[i];
		}
	}
	toyota_car_color[number_of_color];



	// Text file to array dynamically XD [Name]
	std::string toyota_car_names[17];
	int number_of_name = 0;

	// test txt to array
	std::ifstream Cars_Name("Text Files/Cars_Name.txt");
	if (Cars_Name.is_open())
	{
		std::string line;
		std::ifstream myCars_Name("Text Files/Cars_Name.txt");

		while (std::getline(myCars_Name, line))
			++number_of_name;

		for (int i = 0; i < number_of_name; ++i)
		{
			Cars_Name >> toyota_car_names[i];
		}
	}
	toyota_car_names[number_of_name];




	// Text file to array dynamically XD [Price]
	int toyota_car_prices[17];
	int number_of_price = 0;

	// test txt to array
	std::ifstream Cars_Price("Text Files/Cars_Price.txt");
	if (Cars_Price.is_open())
	{
		std::string line;
		std::ifstream myCars_Price("Text Files/Cars_Price.txt");

		while (std::getline(myCars_Price, line))
			++number_of_price;

		for (int i = 0; i < number_of_price; ++i)
		{
			Cars_Price >> toyota_car_prices[i];
		}
	}
	toyota_car_prices[number_of_price];





	system("cls");
	system("color 0A");
	load();
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;



	/*
	* 


std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
std::cout << std::endl;
std::cout << " ,'_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._`. ";
std::cout << std::endl;
std::cout << "( (                                                                ) )";
std::cout << std::endl;
std::cout << " ) )                                                              ( (";
std::cout << std::endl;
std::cout << "( (                                                                ) )";
std::cout << std::endl;
std::cout << " ) )                                                              ( (";
std::cout << std::endl;
std::cout << "( (                                                                ) )";
std::cout << std::endl;
std::cout << " ) )                                                              ( (";
std::cout << std::endl;
std::cout << "( (                                                                ) )";
std::cout << std::endl;
std::cout << " ) )                                                              ( (";
std::cout << std::endl;
std::cout << "( (_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._) )";
std::cout << std::endl;
std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
std::cout << std::endl;



system("pause");



ooooo     ooo   .oooooo.     .oooooo.   
`888'     `8'  d8P'  `Y8b   d8P'  `Y8b  
 888       8  888          888          
 888       8  888          888          
 888       8  888          888          
 `88.    .8'  `88b    ooo  `88b    ooo  
   `YbodP'     `Y8bood8P'   `Y8bood8P'  
										
										
										


	int toyota_car_prices[] = {
		2740000,
		2402000,
		2402000,
		2436000,
		1114000,
		985000,
		705000,
		1250000,
		2519000,
		1051000,
		2500000,
		1176000,
		1059000,
		1764000,
		1166000,
		1919000,
		4160000
	};

	std::string toyota_car_names[] = {

		"GR_Yaris",
		"Vios_GR",
		"Camry",
		"Prius",
		"Yaris",
		"Vios",
		"Wigo",
		"Veloz",
		"Fortuner",
		"Raize",
		"RAV4",
		"Rush",
		"Avanza",
		"Innova",
		"Hiace",
		"Hilux",
		"Alphard"
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
	*/

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

		// Title design XD
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

		std::cout << "                  ";
		SetConsoleTextAttribute(h, 1);
		std::cout << "Car ";
		SetConsoleTextAttribute(h, 4);
		std::cout << "Dealership ";
		SetConsoleTextAttribute(h, 13);
		std::cout << "Management ";
		SetConsoleTextAttribute(h, 11);
		std::cout << "Program               \n";

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
		
		

	// system defaults
	system("mode 70, 100");

	// main choices
	int choice;
	int adminchoice;
	int employeechoice;

	// sub choices
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
	system("color a");
	system("cls");

	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << " ,'";
	SetConsoleTextAttribute(h, 11);
	std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
	SetConsoleTextAttribute(h, 9);
	std::cout << "`. ";
	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << "( ";
	SetConsoleTextAttribute(h, 11);
	std::cout << "(                                                                )";
	SetConsoleTextAttribute(h, 9);
	std::cout << " )";
	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << " )";
	SetConsoleTextAttribute(h, 11);
	std::cout << " )                ";
	SetConsoleTextAttribute(h, 10);
	std::cout << "Car Dealership Management (CDM)";
	SetConsoleTextAttribute(h, 11);
	std::cout << "               ( ";
	SetConsoleTextAttribute(h, 9);
	std::cout << "(";
	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << "( ";
	SetConsoleTextAttribute(h, 11);
	std::cout << "(                    ";
	SetConsoleTextAttribute(h, 15);
	std::cout << "Welcome to the Login Menu";
	SetConsoleTextAttribute(h, 11);
	std::cout << "                   )";
	SetConsoleTextAttribute(h, 9);
	std::cout << " )";
	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << " )";
	SetConsoleTextAttribute(h, 11);
	std::cout << " )                                                              ( ";
	SetConsoleTextAttribute(h, 9);
	std::cout << "(";
	std::cout << std::endl;
	SetConsoleTextAttribute(h, 9);
	std::cout << "( ";
	SetConsoleTextAttribute(h, 11);
	std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
	SetConsoleTextAttribute(h, 9);
	std::cout << " )";
	std::cout << std::endl;
	std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
	std::cout << std::endl;
	std::cout << std::endl;


	SetConsoleTextAttribute(h, 10);
	std::cout << "    [";
	SetConsoleTextAttribute(h, 15);
	std::cout << "1";
	SetConsoleTextAttribute(h, 10);
	std::cout << "] ";
	SetConsoleTextAttribute(h, 1);
	std::cout << "Admin\n";


	SetConsoleTextAttribute(h, 10);
	std::cout << "    [";
	SetConsoleTextAttribute(h, 15);
	std::cout << "2";
	SetConsoleTextAttribute(h, 10);
	std::cout << "] ";
	SetConsoleTextAttribute(h, 1);
	std::cout << "Employee\n";
		

	SetConsoleTextAttribute(h, 10);
	std::cout << "    [";
	SetConsoleTextAttribute(h, 15);
	std::cout << "3";
	SetConsoleTextAttribute(h, 10);
	std::cout << "] ";
	SetConsoleTextAttribute(h, 1);
	std::cout << "Guest\n\n";

	SetConsoleTextAttribute(h, 10);
	std::cout << "    [";
	SetConsoleTextAttribute(h, 15);
	std::cout << "4";
	SetConsoleTextAttribute(h, 10);
	std::cout << "] ";	
	SetConsoleTextAttribute(h, 2);
	std::cout << "About Us\n\n";

	SetConsoleTextAttribute(h, 10);
	std::cout << "    [";
	SetConsoleTextAttribute(h, 4);
	std::cout << "5";
	SetConsoleTextAttribute(h, 10);
	std::cout << "] ";
	SetConsoleTextAttribute(h, 4);
	std::cout << "Exit\n\n";
		
	SetConsoleTextAttribute(h, 1);
	std::cout << "   Please insert your choice: ";
	SetConsoleTextAttribute(h, 13);
	std::cin >> choice;
	std::cin.ignore();


		// Admin
		if (choice == 1) {
		AdminLogin:
			system("color a");
			system("cls");
			
			int adminlogin = 0;
			std::string user, pass, u, p;

			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << " ,'";
			SetConsoleTextAttribute(h, 11);
			std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
			SetConsoleTextAttribute(h, 9);
			std::cout << "`. ";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "( ";
			SetConsoleTextAttribute(h, 11);
			std::cout << "(                                                                )";
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			SetConsoleTextAttribute(h, 11);
			std::cout << " )                ";
			SetConsoleTextAttribute(h, 10);
			std::cout << "Car Dealership Management (CDM)";
			SetConsoleTextAttribute(h, 11);
			std::cout << "               ( ";
			SetConsoleTextAttribute(h, 9);
			std::cout << "(";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "( ";
			SetConsoleTextAttribute(h, 11);
			std::cout << "(                           ";
			SetConsoleTextAttribute(h, 15);
			std::cout << "Admin Login";
			SetConsoleTextAttribute(h, 11);
			std::cout << "                          )";
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			SetConsoleTextAttribute(h, 11);
			std::cout << " )                                                              ( ";
			SetConsoleTextAttribute(h, 9);
			std::cout << "(";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "( ";
			SetConsoleTextAttribute(h, 11);
			std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			std::cout << std::endl;
			std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
			std::cout << std::endl;
			std::cout << std::endl;

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
			
			//std::string pss;
			char c = ' ';
			char password[9];


			/*
			do {
				c = _getch();
				switch (c) {
				case 0:
					_getch();
					break;
				case 13:
					std::cout << std::endl;
					break;
				case 8:
					if (pss.length() > 0) {
						pss.erase(pss.end() - 1);
						std::cout << c << ' ' << c;
					}
					break;
				default:
					pass += c;
					std::cout << '*';
					break;
				}

			} while (c != 6);


			*/

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
					std::cout << "\n\n   Invalid Username please try again";
					Sleep(2000);
					goto AdminLogin;
				}

				else if (p != pass)
				{
					std::cout << "\n\n   Invalid Password please try again";
					Sleep(2000);
					goto AdminLogin;
				}


				else {
					adminlogin = 0;
					system("cls");
					system("color 4f");
					std::cout << "\n\n   Wrong Username or Password!"
							  << "\n   Try to login again\n\n";
					Sleep(2000);
					goto AdminLogin;
				}

			}

			input.close();
			


			system("color 0A");
			load();
			std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;




			if (adminlogin == 1)
			{
				system("cls");
				
				// Login
			AdminMenu:
				system("color a");
				system("cls");

				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " ,'";
				SetConsoleTextAttribute(h, 11);
				std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
				SetConsoleTextAttribute(h, 9);
				std::cout << "`. ";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(                                                                )";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				SetConsoleTextAttribute(h, 11);
				std::cout << " )                ";
				SetConsoleTextAttribute(h, 10);
				std::cout << "Car Dealership Management (CDM)";
				SetConsoleTextAttribute(h, 11);
				std::cout << "               ( ";
				SetConsoleTextAttribute(h, 9);
				std::cout << "(";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(                           ";
				SetConsoleTextAttribute(h, 15);
				std::cout << "          ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "                           )";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				SetConsoleTextAttribute(h, 11);
				std::cout << " )                           Admin Menu                         ( ";
				SetConsoleTextAttribute(h, 9);
				std::cout << "(";
				std::cout << std::endl;
				
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(                             [";
				SetConsoleTextAttribute(h, 15);
				std::cout << user;
				SetConsoleTextAttribute(h, 11);
				std::cout << "]                           )";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				SetConsoleTextAttribute(h, 11);
				std::cout << " )                                                              ( ";
				SetConsoleTextAttribute(h, 9);
				std::cout << "(";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
				std::cout << std::endl;
				std::cout << std::endl;



				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "1";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);
				std::cout << "Employee Data\n";
				
				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "2";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);
				std::cout << "Cars Data\n";
				
				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "3";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);
				std::cout << "Order Logs\n";
				
				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "4";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);
				std::cout << "Order Cars\n";



				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "5";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);

				SetConsoleTextAttribute(h, 2);
				std::cout << "About Us\n\n";


				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 4);
				std::cout << "6";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);

				SetConsoleTextAttribute(h, 4);
				std::cout << "Back\n\n";
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
					system("color 0A");
					load();
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;



					system("color a");
					system("cls");

					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " ,'";
					SetConsoleTextAttribute(h, 11);
					std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
					SetConsoleTextAttribute(h, 9);
					std::cout << "`. ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                                                                )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Dealership Management (CDM)";
					SetConsoleTextAttribute(h, 11);
					std::cout << "               ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                          ";
					SetConsoleTextAttribute(h, 15);
					std::cout << "Employee Data";
					SetConsoleTextAttribute(h, 11);
					std::cout << "                         )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                                                              ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
					std::cout << std::endl;
					std::cout << std::endl;


					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "1";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "Add Employee Data\n";
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "2";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "View Employee Data\n";
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "3";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "Search Employee Data\n";
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "4";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "Edit Employee Data\n";
					
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 4);
					std::cout << "5";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 4);
					std::cout << "Delete Employee Data\n\n";
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 4);
					std::cout << "6";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 4);
					std::cout << "Back\n\n";

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
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                         ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Add Employee Data";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                      )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;




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
						std::cout << "\n   ";
						system("pause");
						goto EmployeeData;

					}

					// View Employee Data
					else if (employeeData == 2) {
					DisplayEmployee: 
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                        ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "View Employee Data";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                      )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;





						std::ifstream EmployeeFile("Text Files/Employee.txt");

						std::string name;
						std::string pass;
						
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|\t\t     ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Username";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t  |\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Password";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;

						SetConsoleTextAttribute(h, 1);
						while (EmployeeFile >> name >> pass) {
							SetConsoleTextAttribute(h, 13);
							std::cout << "|\t\t       ";
							SetConsoleTextAttribute(h, 9);
							std::cout << name;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t  |\t  ";
							SetConsoleTextAttribute(h, 9);
							std::cout << pass;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t\t|";
							SetConsoleTextAttribute(h, 9);
							std::cout << std::endl;
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							SetConsoleTextAttribute(h, 9);
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
					SearchEmployeeData:
						system("color a");
						system("cls");




						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                      ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Search Employee Data";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                      )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;




						int ch;
						
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 10);
						std::cout << "    [";
						SetConsoleTextAttribute(h, 15);
						std::cout << "1";
						SetConsoleTextAttribute(h, 10);
						std::cout << "] ";
						SetConsoleTextAttribute(h, 1);
						std::cout << "Search your Password by Username";
						std::cout << std::endl;
						
						SetConsoleTextAttribute(h, 10);
						std::cout << "    [";
						SetConsoleTextAttribute(h, 15);
						std::cout << "2";
						SetConsoleTextAttribute(h, 10);
						std::cout << "] ";
						SetConsoleTextAttribute(h, 1);
						std::cout << "Search your Username by Password";
						std::cout << std::endl;
						
						SetConsoleTextAttribute(h, 10);
						std::cout << "    [";
						SetConsoleTextAttribute(h, 4);
						std::cout << "3";
						SetConsoleTextAttribute(h, 10);
						std::cout << "] ";
						SetConsoleTextAttribute(h, 4);
						std::cout << "Back";
						std::cout << std::endl;
						std::cout << std::endl;

						SetConsoleTextAttribute(h, 1);
						std::cout << "   Enter your choice: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> ch;

						switch (ch)
						{
						case 1:
						{

							int login = 0;
							std::string searchuser, su, sp;
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   Enter in your Username: ";
							std::cin >> searchuser;

							std::ifstream searchu("Text Files/Employee.txt");

							while (searchu >> su >> sp)
							{
								if (su == searchuser)
								{
									// if matched its found
									login = 1;
								}
							}
							searchu.close();

							if (login == 1)
							{
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "   Noice, your account has been found";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "   Your password is |[\"" << sp <<"\"]|";
								std::cout << std::endl;
								std::cout << std::endl;

								system("pause");
								Sleep(2000);
								goto EmployeeData;
							}

							else
							{
								std::cout << std::endl;
								std::cout << "   Sorry, Your username is not found in our database";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "   Please kindly contact your system administrator for more details";
								std::cin.get();
								std::cin.get();
								
								system("pause");
								Sleep(2000);
								goto EmployeeData;
							}

							break;

						}

						case 2:
						{
							int login = 0;
							std::string searchpass, su2, sp2;
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   Enter in your Password: ";
							std::cin >> searchpass;

							std::ifstream searchp("Text Files/Employee.txt");
							
							while (searchp >> su2 >> sp2)
							{
								if (sp2 == searchpass)
								{
									// if matched its found
									login = 1;
								}
							}

							searchp.close();
							
							if (login == 1)
							{
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "   Noice, your account has been found";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "   Your username is |[\"" << su2 << "\"]|";
								std::cout << std::endl;
								std::cout << std::endl;

								system("pause");
								Sleep(2000);
								goto EmployeeData;
							
							}

							else
							{
								std::cout << std::endl;
								std::cout << "   Sorry, We cannot found your password in our database";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "   Please kindly contact your system administrator for more details";
							
								system("pause");
								Sleep(2000);
								goto EmployeeData;
							}

							break;
						}

						case 3:
						{
							goto EmployeeData;
						}

						default:
							std::cout << std::endl;
							std::cout << "   Sorry, You entered wrong choice. Kindly try again";
							std::cout << std::endl;
							std::cout << "   ";

							system("pause");
							Sleep(2000);
							goto EmployeeData;
						}

					}

					// Edit Employee Data
					else if (employeeData == 4) {
					EditEmployeeData:

						system("color a");
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                        ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Edit Employee Data";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                      )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;





						std::ifstream EmployeeFile("Text Files/Employee.txt");

						std::string name;
						std::string pass;

						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Line";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Username";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t |    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Password";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;

						SetConsoleTextAttribute(h, 1);
					
						int j = 0;
						while (EmployeeFile >> name >> pass) {
							
							j++;

							SetConsoleTextAttribute(h, 13);
							std::cout << "|\t";
							SetConsoleTextAttribute(h, 10);
							std::cout << "[";
							SetConsoleTextAttribute(h, 15);
							std::cout << j;
							SetConsoleTextAttribute(h, 10);
							std::cout << "]\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|    ";
							SetConsoleTextAttribute(h, 9);
							std::cout << name;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t |    ";
							SetConsoleTextAttribute(h, 11);
							std::cout << pass;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t\t|" << std::endl;
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							std::cout << std::endl;

						}
						
						SetConsoleTextAttribute(h, 10);
						std::cout << "   Press ESC button to go back" << std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "   Type the number of line to edit";
						std::cout << std::endl;

					


					
						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;

					
						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";


						// ESC button back
						int esc;
						esc = _getch();
						if (esc == 27) {
							system("cls");
							goto EmployeeData;
						}


						std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Employee.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;
							
							Sleep(3000);
							goto EditEmployeeData;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines;
						std::string line;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file, line))
							lines.push_back(line);

						// Close our access to the file since we are done reading with it  
						read_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto EditEmployeeData;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Employee.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;
						
							
							Sleep(3000);
							goto EditEmployeeData;
						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();


						std::cout << std::endl;
						std::string adduser, addpass, ru, rp;
						SetConsoleTextAttribute(h, 1);
						std::cout << "\n   Enter the Username: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> adduser;
						SetConsoleTextAttribute(h, 1);
						std::cout << "\n   Enter the Password: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> addpass;

						std::ofstream reg("Text Files/Employee.txt", std::ios::app);
						reg << adduser << '\t' << addpass << std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 1);
						std::cout << "   Line " << line_number + 1 << " has been edited!";
						std::cout << std::endl;
						std::cout << "   ";
						system("pause");



						goto EmployeeData;



					}

					// Delete Employee Data
					else if (employeeData == 5) {
					DeleteEmployee:
						system("color a");
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                       ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Delete Employee Data";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                     )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;





						std::ifstream EmployeeFile("Text Files/Employee.txt");

						std::string name;
						std::string pass;

						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Line";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Username";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t |    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Password";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;

						SetConsoleTextAttribute(h, 1);
					
						int j = 0;
						while (EmployeeFile >> name >> pass) {
							
							j++;

							SetConsoleTextAttribute(h, 13);
							std::cout << "|\t";
							SetConsoleTextAttribute(h, 10);
							std::cout << "[";
							SetConsoleTextAttribute(h, 15);
							std::cout << j;
							SetConsoleTextAttribute(h, 10);
							std::cout << "]\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|    ";
							SetConsoleTextAttribute(h, 9);
							std::cout << name;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t |    ";
							SetConsoleTextAttribute(h, 11);
							std::cout << pass;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t\t|" << std::endl;
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							std::cout << std::endl;

						}
						
						SetConsoleTextAttribute(h, 10);
						std::cout << "   Press ESC button to go back" << std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "   Type the number of line to delete";
						std::cout << std::endl;

					


					
						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;

					
						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";


						// ESC button back
						int esc;
						esc = _getch();
						if (esc == 27) {
							system("cls");
							goto EmployeeData;
						}


						std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Employee.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;
							
							Sleep(3000);
							goto DeleteEmployee;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines;
						std::string line;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file, line))
							lines.push_back(line);

						// Close our access to the file since we are done reading with it  
						read_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteEmployee;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Employee.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;
						
							
							Sleep(3000);
							goto DeleteEmployee;
						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();

						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 <<" has been deleted";

						Sleep(3000);
						goto EmployeeData;



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
					system("color a");
					system("cls");


					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " ,'";
					SetConsoleTextAttribute(h, 11);
					std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
					SetConsoleTextAttribute(h, 9);
					std::cout << "`. ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                                                                )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Dealership Management (CDM)";
					SetConsoleTextAttribute(h, 11);
					std::cout << "               ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                            ";
					SetConsoleTextAttribute(h, 15);
					std::cout << "Cars Data";
					SetConsoleTextAttribute(h, 11);
					std::cout << "                           )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                                                              ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
					std::cout << std::endl;
					std::cout << std::endl;




					int CarChoice;

					std::cout << std::endl;
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "1";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "View Cars Name & Price";
					std::cout << std::endl;

					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "2";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "Add Cars Name & Price";
					std::cout << std::endl;

					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "3";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "Edit Cars Name & Price";
					std::cout << std::endl;

					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 4);
					std::cout << "4";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 4);
					std::cout << "Delete Cars Name & Price";
					std::cout << std::endl;

					std::cout << std::endl;
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "5";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1);
					std::cout << "View Cars Color";
					std::cout << std::endl;
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "6";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1); 
					std::cout << "Add Cars Color";
					std::cout << std::endl;
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 15);
					std::cout << "7";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 1); 
					std::cout << "Edit Cars Color";
					std::cout << std::endl;
					
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 4);
					std::cout << "8";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 4); 
					std::cout << "Delete Cars Color";
					std::cout << std::endl;
					
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 10);
					std::cout << "    [";
					SetConsoleTextAttribute(h, 4);
					std::cout << "9";
					SetConsoleTextAttribute(h, 10);
					std::cout << "] ";
					SetConsoleTextAttribute(h, 4);
					std::cout << "Back";
					std::cout << std::endl;

					SetConsoleTextAttribute(h, 1);
					std::cout << std::endl
							  << "   Please enter your input: ";

					SetConsoleTextAttribute(h, 13);
					std::cin >> CarChoice;


					
					// View Cars Name & Price
					if (CarChoice == 1) {
						system("color a");
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                      ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "View Cars Name & Price";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                    )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;




						NamiasClass NamiasObject;
						NamiasObject.display_menu("\n  Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));

						std::cout << std::endl;
						std::cout << "   ";
						system("pause");
						goto CarData;

					}

					// Add Cars Name & Price
					else if (CarChoice == 2) {
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                      ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Add Cars Name & Price";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                     )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;





						std::string addname, addprice;
						std::cout << "\n   Enter the Car Name: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> addname;
						SetConsoleTextAttribute(h, 1);
						
						std::cout << "\n   Enter the Car Price: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> addprice;
						SetConsoleTextAttribute(h, 1);

						std::ofstream Cars_Name("Text Files/Cars_Name.txt", std::ios::app);
						Cars_Name << std::endl << addname;
						std::cout << "\n   Car Name Added!\n";

						std::ofstream Cars_Price("Text Files/Cars_Price.txt", std::ios::app);
						Cars_Price << std::endl << addprice;
						std::cout << "\n   Car Name & Price Added!\n";

						std::cout << std::endl;
						std::cout << "   ";
						system("pause");
						goto CarData;


					}

					// Edit Cars Name & Price
					else if (CarChoice == 3) {



					}

					// Delete Cars Name & Price
					else if (CarChoice == 4) {
					DeleteCarsNamePrice:
						system("color a");
						system("cls");

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                     ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Delete Car Name & Price";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                    )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;






						std::ifstream Cars_Name("Text Files/Cars_Name.txt");
						std::ifstream Cars_Price("Text Files/Cars_Price.txt");

						std::string CName;
						int CPrice;

						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|      ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Line";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t |      ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Name";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t  |\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Price";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 1);

						int i = 0;
						while ((Cars_Name >> CName) && (Cars_Price >> CPrice)) {
							i++;

							SetConsoleTextAttribute(h, 13);
							std::cout << "|"; 
							SetConsoleTextAttribute(h, 10);
							std::cout << "      [";
							SetConsoleTextAttribute(h, 15);
							std::cout << i;
							SetConsoleTextAttribute(h, 10);
							std::cout << "]\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << " |     ";
							SetConsoleTextAttribute(h, 9);
							std::cout << CName;
							std::cout << "\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << "  |\t";
							SetConsoleTextAttribute(h, 11);
						
							
							struct group_facet : public std::numpunct<char> {
							protected:
								std::string do_grouping() const { return "\003"; }
							};

							std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));

							std::cout << std::fixed << CPrice;

						
							
							// std::cout << CPrice;
							SetConsoleTextAttribute(h, 9);
							std::cout << " pesos";
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t|";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							std::cout << std::endl;

						}

						/*
						while (Cars_Price >> CPrice) {

							std::cout << "|\t";
							SetConsoleTextAttribute(h, 11);
							std::cout << CPrice;
							std::cout << std::endl;
							SetConsoleTextAttribute(h, 13);
							std::cout << "----------------------------------------------------------------------";
							std::cout << std::endl;

						}
						*/
						SetConsoleTextAttribute(h, 10);
						std::cout << "   Press ESC button to go back" << std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "   Type the number of line to delete";
						std::cout << std::endl;



						/*
						
						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";


						// ESC button back
						int esc;
						esc = _getch();
						if (esc == 27) {
							system("cls");
							goto CarData;
						}


						std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Color.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsColor;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines;
						std::string line;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file, line))
							lines.push_back(line);

						// Close our access to the file since we are done reading with it  
						read_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsColor;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Cars_Color.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;


							Sleep(3000);
							goto DeleteCarsColor;
						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();

						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been deleted";
						std::cout << std::endl;
						std::cout << "   ";

						system("pause");
						goto CarData;


						
						*/






						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << "   Line: ";


						// ESC button back
						int esc;
						esc = _getch();
						if (esc == 27) {
							system("cls");
							goto CarData;
						}


						std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream Cars_Name_file;

						// Open the file with the provided filename
						Cars_Name_file.open("Text Files/Cars_Name.txt");

						// If file failed to open, exit with an error message and error exit status
						if (Cars_Name_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> linesNames;
						std::string lineNames;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(Cars_Name_file, lineNames))
							linesNames.push_back(lineNames);

						// Close our access to the file since we are done reading with it  
						Cars_Name_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > linesNames.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << linesNames.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_name;

						// Open the file with the provided filename
						write_name.open("Text Files/Cars_Name.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_name.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;


							Sleep(3000);
							goto DeleteCarsNamePrice;
						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < linesNames.size(); i++)
							if (i != line_number)
								write_name << lineNames[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_name.close();

						
						
						
						
						

						// fstream object will be used to read all of the existing lines in the file
						std::fstream Cars_Price_file;

						// Open the file with the provided filename
						Cars_Price_file.open("Text Files/Cars_Price.txt");

						// If file failed to open, exit with an error message and error exit status
						if (Cars_Price_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> linesPrices;
						std::string linePrices;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(Cars_Price_file, linePrices))
							linesPrices.push_back(linePrices);

						// Close our access to the file since we are done reading with it  
						Cars_Price_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > linesPrices.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << linesPrices.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_price;

						// Open the file with the provided filename
						write_price.open("Text Files/Cars_Price.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_price.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;


							Sleep(3000);
							goto DeleteCarsNamePrice;
						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < linesPrices.size(); i++)
							if (i != line_number)
								write_price << linePrices[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_price.close();






						
						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been deleted";

						
						
						
						
						
						
						
						
						system("pause");
						goto AdminMenu;




					}

					// View Cars Color
					else if (CarChoice == 5)
					{
						system("color a");
						system("cls");


						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                         ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "View Cars Color";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                        )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;



						std::ifstream CarColorFile("Text Files/Cars_Color.txt");

						std::string Color;

						std::cout << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Line";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Color";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << std::endl;
						std::cout << "======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 1);

						int j = 0;
						while (CarColorFile >> Color) {

							j++;

							SetConsoleTextAttribute(h, 13);
							std::cout << "|";
							SetConsoleTextAttribute(h, 10);
							std::cout << "\t[";
							SetConsoleTextAttribute(h, 15);
							std::cout << j;
							SetConsoleTextAttribute(h, 10);
							std::cout << "]\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|    ";
							SetConsoleTextAttribute(h, 9);
							std::cout << Color;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t\t\t\t|";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							std::cout << std::endl;

						}

						std::cout << std::endl;
						std::cout << "   ";
						system("pause");
						goto CarData;


					}

					// Add Cars Color
					else if (CarChoice == 6) {

						system("cls");



						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                          ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Add Car Colors";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                        )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;




						std::string addcolor;
						std::cout << "\n   Enter the Color: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> addcolor;
						SetConsoleTextAttribute(h, 1);

						std::ofstream reg("Text Files/Cars_Color.txt", std::ios::app);
						reg << std::endl << addcolor;
						std::cout << "\n   Car Color Added!\n";
					
						std::cout << std::endl;
						std::cout << "   ";
						system("pause");
						goto CarData;


					}

					// Edit Cars Color
					else if (CarChoice == 7) {
					system("color a");
						system("cls");


						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                          ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Edit Car Color";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                        )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;




						std::ifstream CarColorFile("Text Files/Cars_Color.txt");

						std::string Color;

						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Line";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Color";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;

						SetConsoleTextAttribute(h, 1);

						int j = 0;
						while (CarColorFile >> Color) {

							j++;

							SetConsoleTextAttribute(h, 13);
							std::cout << "|";
							SetConsoleTextAttribute(h, 10);
							std::cout << "\t[";
							SetConsoleTextAttribute(h, 15);
							std::cout << j;
							SetConsoleTextAttribute(h, 10);
							std::cout << "]\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|    ";
							SetConsoleTextAttribute(h, 9);
							std::cout << Color;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t\t\t\t|";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							std::cout << std::endl;

						}

						SetConsoleTextAttribute(h, 10);
						std::cout << "   Press ESC button to go back" << std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "   Type the number of line to edit";
						std::cout << std::endl;




						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						std::string strColor;
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";


						// ESC button back
						int esc;
						esc = _getch();
						if (esc == 27) {
							system("cls");
							goto CarData;
						}


						std::cin >> line_number;


						std::cout << std::endl;
						std::cout << "   Type the color";
						std::cout << std::endl;
						std::cout << "   Enter the Color: ";
						SetConsoleTextAttribute(h, 13);
						std::cin >> strColor;
						SetConsoleTextAttribute(h, 1);


						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Color.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsColor;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines;
						std::string line;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file, line))
							lines.push_back(line);

						// Close our access to the file since we are done reading with it  
						read_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsColor;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Cars_Color.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;


							Sleep(3000);
							goto DeleteCarsColor;

						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();

						// Add color to text file
						std::ofstream addcolor("Text Files/Cars_Color.txt", std::ios::app);
						addcolor << std::endl << strColor;
						
						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been editted!";
						std::cout << std::endl;
						std::cout << "   ";

						system("pause");
						goto CarData;

					}

					// Delete Cars Color
					else if (CarChoice == 8) {
					DeleteCarsColor:
						system("color a");
						system("cls");



						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " ,'";
						SetConsoleTextAttribute(h, 11);
						std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
						SetConsoleTextAttribute(h, 9);
						std::cout << "`. ";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                                                                )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Car Dealership Management (CDM)";
						SetConsoleTextAttribute(h, 11);
						std::cout << "               ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(                         ";
						SetConsoleTextAttribute(h, 15);
						std::cout << "Delete Car Color";
						SetConsoleTextAttribute(h, 11);
						std::cout << "                       )";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						SetConsoleTextAttribute(h, 11);
						std::cout << " )                                                              ( ";
						SetConsoleTextAttribute(h, 9);
						std::cout << "(";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 9);
						std::cout << "( ";
						SetConsoleTextAttribute(h, 11);
						std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
						SetConsoleTextAttribute(h, 9);
						std::cout << " )";
						std::cout << std::endl;
						std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
						std::cout << std::endl;
						std::cout << std::endl;




						std::ifstream CarColorFile("Text Files/Cars_Color.txt");

						std::string Color;

						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|\t";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Line";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|    ";
						SetConsoleTextAttribute(h, 10);
						std::cout << "Color";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t\t\t\t\t\t|";
						SetConsoleTextAttribute(h, 13);
						std::cout << "\n======================================================================" << std::endl;

						SetConsoleTextAttribute(h, 1);

						int j = 0;
						while (CarColorFile >> Color) {

							j++;

							SetConsoleTextAttribute(h, 13);
							std::cout << "|";
							SetConsoleTextAttribute(h, 10);
							std::cout << "\t[";
							SetConsoleTextAttribute(h, 15);
							std::cout << j;
							SetConsoleTextAttribute(h, 10);
							std::cout << "]\t";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|    ";
							SetConsoleTextAttribute(h, 9);
							std::cout << Color;
							SetConsoleTextAttribute(h, 13);
							std::cout << "\t\t\t\t\t\t|";
							SetConsoleTextAttribute(h, 13);
							std::cout << "|--------------------------------------------------------------------|";
							std::cout << std::endl;

						}

						SetConsoleTextAttribute(h, 10);
						std::cout << "   Press ESC button to go back" << std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "   Type the number of line to delete";
						std::cout << std::endl;





						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";


						// ESC button back
						int esc;
						esc = _getch();
						if (esc == 27) {
							system("cls");
							goto CarData;
						}


						std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Color.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("color 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsColor;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines;
						std::string line;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file, line))
							lines.push_back(line);

						// Close our access to the file since we are done reading with it  
						read_file.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsColor;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Cars_Color.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("color 4f");

							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;


							Sleep(3000);
							goto DeleteCarsColor;
						}

						// Write all of the lines stored in the vector back to the file, EXCEPT the
						// line that we want to delete.

						// Line number 1 will be stored at vector index 0, line number 2 will be 
						// stored at vector index 1, and so on because vectors are zero-indexed, so 
						// decrement line_number to help us identify when we've reached the 
						// associated line in the file.
						line_number--;

						// Loop through the vector elements to write each line back to the file 
						// EXCEPT the line we want to delete.
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();

						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been deleted";
						std::cout << std::endl;
						std::cout << "   ";

						system("pause");
						goto CarData;


					}

					// Back
					else if (CarChoice == 9) {

						Sleep(500);
						goto AdminMenu;

					}

					else {
						std::cout << std::endl 
							<< "   Wrong Input! Please try again"
							<< std::endl;

						Sleep(2000);
						goto AdminMenu;



					}





















				}

				// Order Logs
				else if (adminchoice == 3) {
				OrderLogs:
					system("color a");
					system("cls");



					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " ,'";
					SetConsoleTextAttribute(h, 11);
					std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
					SetConsoleTextAttribute(h, 9);
					std::cout << "`. ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                                                                )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Dealership Management (CDM)";
					SetConsoleTextAttribute(h, 11);
					std::cout << "               ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                           ";
					SetConsoleTextAttribute(h, 15);
					std::cout << "Order Logs";
					SetConsoleTextAttribute(h, 11);
					std::cout << "                           )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                                                              ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
					std::cout << std::endl;
					std::cout << std::endl;





					std::ifstream Order_Logs("Text Files/Order_Logs.txt");

					std::string date;
					std::string time;
					std::string car_name;
					std::string car_color;
					int car_price;
					std::string car_payment;
					std::string car_change;

					SetConsoleTextAttribute(h, 13);
					std::cout << "\n======================================================================" << std::endl;
					SetConsoleTextAttribute(h, 13);
					std::cout << "|    ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Date";
					SetConsoleTextAttribute(h, 13);
					std::cout << "     |\t";
					SetConsoleTextAttribute(h, 10);
					std::cout << "  Time";
					SetConsoleTextAttribute(h, 13);
					std::cout << "   |   ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Name";
					SetConsoleTextAttribute(h, 13);
					std::cout << "   | ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Color";
					SetConsoleTextAttribute(h, 13);
					std::cout << " |\t";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Price";
					SetConsoleTextAttribute(h, 13);
					std::cout << "\t|";
					std::cout << "\n======================================================================" << std::endl;
					SetConsoleTextAttribute(h, 1);


					while (Order_Logs >> date >> time >> car_name >> car_color >> car_price) {
						SetConsoleTextAttribute(h, 13);
						std::cout << "| ";
						SetConsoleTextAttribute(h, 9);
						std::cout << date;
						SetConsoleTextAttribute(h, 13);
						std::cout << " |\t";
						SetConsoleTextAttribute(h, 11);
						std::cout << time;
						SetConsoleTextAttribute(h, 13);
						std::cout << " |   ";
						SetConsoleTextAttribute(h, 9);
						std::cout << car_name;
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t| ";
						SetConsoleTextAttribute(h, 11);
						std::cout << car_color;
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t    | \t";
						SetConsoleTextAttribute(h, 9);
				



						struct group_facet : public std::numpunct<char> {
						protected:
							std::string do_grouping() const { return "\003"; }
						};

						std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));

						std::cout << std::fixed << car_price;



						// std::cout << car_price;
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|--------------------------------------------------------------------|";
						std::cout << std::endl;
					}

					SetConsoleTextAttribute(h, 1);
					std::cout << std::endl;
					std::cout << "\n   All Order Logs Data!";
					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					system("cls");
					goto AdminMenu;



				}

				// Order Cars
				else if (adminchoice == 4) {
				system("color a");
				system("cls");
					goto OrderCars;
				}

				// About Us
				else if (adminchoice == 5) {
					system("color a");
					AboutUs();
					std::cout << "\n\n   Press ENTER to go back ";
					std::cin.get();

				}

				// Back
				else if (adminchoice == 6) {
					system("color a");
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
		
		// Employee ((not done yet)) some what  working)
		else if (choice == 2) {
		Employeelogin:
			system("color a");
			system("cls");

			int Employeelogin = 0;
			std::string user, pass, u, p;





			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << " ,'";
			SetConsoleTextAttribute(h, 11);
			std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
			SetConsoleTextAttribute(h, 9);
			std::cout << "`. ";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "( ";
			SetConsoleTextAttribute(h, 11);
			std::cout << "(                                                                )";
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			SetConsoleTextAttribute(h, 11);
			std::cout << " )                ";
			SetConsoleTextAttribute(h, 10);
			std::cout << "Car Dealership Management (CDM)";
			SetConsoleTextAttribute(h, 11);
			std::cout << "               ( ";
			SetConsoleTextAttribute(h, 9);
			std::cout << "(";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "( ";
			SetConsoleTextAttribute(h, 11);
			std::cout << "(                          ";
			SetConsoleTextAttribute(h, 15);
			std::cout << "Employee Login";
			SetConsoleTextAttribute(h, 11);
			std::cout << "                        )";
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			SetConsoleTextAttribute(h, 11);
			std::cout << " )                                                              ( ";
			SetConsoleTextAttribute(h, 9);
			std::cout << "(";
			std::cout << std::endl;
			SetConsoleTextAttribute(h, 9);
			std::cout << "( ";
			SetConsoleTextAttribute(h, 11);
			std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
			SetConsoleTextAttribute(h, 9);
			std::cout << " )";
			std::cout << std::endl;
			std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
			std::cout << std::endl;
			std::cout << std::endl;







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

			while (input >> u >> p)
			{

				if (u == user && p == pass)
				{
					Employeelogin = 1;
					std::cout << "\n\n   Employee login successful!";
					Sleep(2000);
					system("cls");

				}

				else if (u != user)
				{
					std::cout << "\n\n   Invalid Username please try again";
					Sleep(2000);
					goto Employeelogin;
				}

				else if (p != pass)
				{
					std::cout << "\n\n   Invalid Password please try again";
					Sleep(2000);
					goto Employeelogin;
				}


				else {
					Employeelogin = 0;
					system("cls");
					system("color 4f");
					std::cout << "\n\n   Wrong Username or Password!"
						<< "\n   Try to login again\n\n";
					Sleep(2000);
					goto Employeelogin;
				}

			}

			input.close();

			if (Employeelogin == 1)
			{
			EmployeeMenu:
				system("color a");
				system("cls");

				// Login
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " ,'";
				SetConsoleTextAttribute(h, 11);
				std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
				SetConsoleTextAttribute(h, 9);
				std::cout << "`. ";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(                                                                )";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				SetConsoleTextAttribute(h, 11);
				std::cout << " )                ";
				SetConsoleTextAttribute(h, 10);
				std::cout << "Car Dealership Management (CDM)";
				SetConsoleTextAttribute(h, 11);
				std::cout << "               ( ";
				SetConsoleTextAttribute(h, 9);
				std::cout << "(";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(                           ";
				SetConsoleTextAttribute(h, 15);
				std::cout << "          ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "                           )";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				SetConsoleTextAttribute(h, 11);
				std::cout << " )                         Employee Menu                        ( ";
				SetConsoleTextAttribute(h, 9);
				std::cout << "(";
				std::cout << std::endl;

				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(                             [";
				SetConsoleTextAttribute(h, 15);
				std::cout << user;
				SetConsoleTextAttribute(h, 11);
				std::cout << "]                             )";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				SetConsoleTextAttribute(h, 11);
				std::cout << " )                                                              ( ";
				SetConsoleTextAttribute(h, 9);
				std::cout << "(";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 9);
				std::cout << "( ";
				SetConsoleTextAttribute(h, 11);
				std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
				SetConsoleTextAttribute(h, 9);
				std::cout << " )";
				std::cout << std::endl;
				std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
				std::cout << std::endl;
				std::cout << std::endl;







				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "1";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);
				std::cout << "Order Logs\n";


				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "2";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 1);
				std::cout << "Order Cars\n";


				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 15);
				std::cout << "3";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 2);
				std::cout << "About Us\n";

				std::cout << std::endl;
				SetConsoleTextAttribute(h, 10);
				std::cout << "    [";
				SetConsoleTextAttribute(h, 4);
				std::cout << "4";
				SetConsoleTextAttribute(h, 10);
				std::cout << "] ";
				SetConsoleTextAttribute(h, 4);
				std::cout << "Back\n";
				std::cout << std::endl;
				SetConsoleTextAttribute(h, 1);



				std::cout << "   Please insert your choice: ";

				SetConsoleTextAttribute(h, 13);
				std::cin >> employeechoice;
				std::cout << std::endl;
				std::cin.ignore();

				// Order Logs
				if (employeechoice == 1) {
					system("color a");
					system("cls");



					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " ,'";
					SetConsoleTextAttribute(h, 11);
					std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
					SetConsoleTextAttribute(h, 9);
					std::cout << "`. ";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                                                                )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Dealership Management (CDM)";
					SetConsoleTextAttribute(h, 11);
					std::cout << "               ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(                           ";
					SetConsoleTextAttribute(h, 15);
					std::cout << "Order Logs";
					SetConsoleTextAttribute(h, 11);
					std::cout << "                           )";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					SetConsoleTextAttribute(h, 11);
					std::cout << " )                                                              ( ";
					SetConsoleTextAttribute(h, 9);
					std::cout << "(";
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 9);
					std::cout << "( ";
					SetConsoleTextAttribute(h, 11);
					std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
					SetConsoleTextAttribute(h, 9);
					std::cout << " )";
					std::cout << std::endl;
					std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
					std::cout << std::endl;
					std::cout << std::endl;





					std::ifstream Order_Logs("Text Files/Order_Logs.txt");

					std::string date;
					std::string time;
					std::string car_name;
					std::string car_color;
					int car_price;
					std::string car_payment;
					std::string car_change;

					SetConsoleTextAttribute(h, 13);
					std::cout << "\n======================================================================" << std::endl;
					SetConsoleTextAttribute(h, 13);
					std::cout << "|    ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Date";
					SetConsoleTextAttribute(h, 13);
					std::cout << "     |\t";
					SetConsoleTextAttribute(h, 10);
					std::cout << "  Time";
					SetConsoleTextAttribute(h, 13);
					std::cout << "   |   ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Name";
					SetConsoleTextAttribute(h, 13);
					std::cout << "   | ";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Color";
					SetConsoleTextAttribute(h, 13);
					std::cout << " |\t";
					SetConsoleTextAttribute(h, 10);
					std::cout << "Car Price";
					SetConsoleTextAttribute(h, 13);
					std::cout << "\t|";
					std::cout << "\n======================================================================" << std::endl;
					SetConsoleTextAttribute(h, 1);


					while (Order_Logs >> date >> time >> car_name >> car_color >> car_price) {
						SetConsoleTextAttribute(h, 13);
						std::cout << "| ";
						SetConsoleTextAttribute(h, 9);
						std::cout << date;
						SetConsoleTextAttribute(h, 13);
						std::cout << " |\t";
						SetConsoleTextAttribute(h, 11);
						std::cout << time;
						SetConsoleTextAttribute(h, 13);
						std::cout << " |   ";
						SetConsoleTextAttribute(h, 9);
						std::cout << car_name;
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t| ";
						SetConsoleTextAttribute(h, 11);
						std::cout << car_color;
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t    | \t";
						SetConsoleTextAttribute(h, 9);




						struct group_facet : public std::numpunct<char> {
						protected:
							std::string do_grouping() const { return "\003"; }
						};

						std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));

						std::cout << std::fixed << car_price;



						// std::cout << car_price;
						SetConsoleTextAttribute(h, 13);
						std::cout << "\t|";
						std::cout << std::endl;
						SetConsoleTextAttribute(h, 13);
						std::cout << "|--------------------------------------------------------------------|";
						std::cout << std::endl;
					}

					SetConsoleTextAttribute(h, 1);
					std::cout << std::endl;
					std::cout << "\n   All Order Logs Data!";
					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					system("cls");

					goto EmployeeMenu;

				}

				// Order Cars
				else if (employeechoice == 2) {
					system("cls");
					system("color a");
					goto OrderCars;
				}

				// About Us
				else if (employeechoice == 3) {
					system("color a");
					AboutUs();
					std::cout << "\n\n   Press ENTER to go back ";
					std::cin.get();

					goto EmployeeMenu;

				}

				// Back
				else if (employeechoice == 4) {
					system("cls");
					system("color a");
					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					goto LoginForm;
				}

				// Wrong input
				else {
					system("cls");
					system("color 4f");
					std::cout << "\n   Wrong input entered!\n" << std::endl;
					Sleep(2000);
					std::cin.ignore();
					goto LoginForm;
				}


			}

			// Wrong login
			else
			{
				system("cls");
				system("color 4f");
				std::cout << "\n   LOGIN ERROR!!!"
						  << "\n   Please check your Username and Password\n";
				Sleep(3000);
				std::cin.ignore();
				goto LoginForm;
			}
		}











		// Guest
		else if (choice == 3) {

			system("cls");
			system("color 0A");
			load();
			std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
		
			// go directly no need for logic
			system("color a");
			system("cls");
			goto OrderCars;
		}

		// About Us
		else if (choice == 4) {
			system("color a");
			AboutUs();
			std::cout << "\n\n   Press ENTER to go back ";
			std::cin.get();

			Sleep(3000);
			goto LoginForm;
		}

		// Exit
		else if (choice == 5) {
			system("cls");
			system("color 01");
			std::cout << "\n   Thanks for using this program\n"
					  << "\n   This program is created by @PP-Namias\n\n";
			Sleep(3000);
			return 0;
		}

		// Wrong input
		else {
			system("cls");
			system("color 4f");
			std::cout << "\n   Wrong input entered!\n" << std::endl;
			Sleep(3000);
			goto LoginForm;
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

		

		SetConsoleTextAttribute(h, 10);
		std::cout << "\n  Press ESC button to go back" << std::endl;

		// Callout car names/prices [formated]
		NamiasClass NamiasObject;
		NamiasObject.display_menu("\n  Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));
		
		std::cout << "\n  Input Number According to the type of Car: ";

		// ESC button back
		int esc;
		esc = _getch();
		if (esc == 27) {
			system("cls");
			goto LoginForm;
		}

		std::cin >> Cars;
		
		if (Cars < 1 || Cars > sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
			system("cls");
			system("color 4f");
			std::cout << "\n  Invalid input please try ordering again.\n";
			std::cin.ignore();
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
			
				std::cout << "\n  Please select the Number of Color: "; 
				
				std::cin >> Color;

				// Verification
				if (Color < 1 || Color > sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
					system("cls");
					system("color 4f");
					std::cout << "  Please try again if you entered the incorrect information.";
					Sleep(2000);
					goto OrderCars;
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
					system("color 0E");

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
						goto OrderCars;
					}

					// Receipt
					std::cout << std::endl;
					SetConsoleTextAttribute(h, 7);
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
					SetConsoleTextAttribute(h, 7);
					std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
					SetConsoleTextAttribute(h, 1);
					std::cout << std::endl;


					// Order Logs [INPUT]
					auto t = std::time(nullptr);
					auto tm = *std::localtime(&t);

					std::ostringstream oss;
					oss << std::put_time(&tm, "%b/%d/%Y\t%H:%M:%S");
					auto str = oss.str();

					std::ofstream Order_Logs("Text Files/Order_Logs.txt", std::ios::app);
					Order_Logs << std::endl << str << "\t" << toyota_car_names[Cars - 1] << '\t' << toyota_car_color[Color - 1] << '\t' << toyota_car_prices[Cars - 1];
					Order_Logs.close();

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
					goto OrderCars;
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
	std::cout << std::endl;
	std::cout << "   [1] Search your Password by Username" << std::endl;
	std::cout << "   [2] Search your Username by Password" << std::endl;
	std::cout << "   [3] Back" << std::endl;
	std::cout << std::endl;

	std::cout << "Enter your choice :";
	std::cin >> ch;
	
	switch (ch)
	{
	case 1:
	{

		int login = 0;
		std::string searchuser, su, sp;
		std::cout << "\nEnter your remembered Username :";
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
		std::cout << "Sorry, You entered wrong choice. Kindly try again" << std::endl;
		Sleep(2000);
		main();
	}
	default:
		std::cout << "Sorry, You entered wrong choice. Kindly try again" << std::endl;
		Sleep(2000);
		main();
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




/*
void login()
{
	//Student laccount;
	string username, pass;
	bool exist;
	int choice;

	cout << "Welcome to CSD Login portal, please input your username and password!\n";
	cout << "Name: ";
	cin >> laccount.username;

	cout << "Password: ";
	cin >> laccount.password;

	ifstream input(laccount.username + ".txt");

	while (input >> username >> pass)
	{
		if (username == laccount.username && pass == laccount.password)
		{
			exist = true;
		}
	}

	if (exist == true)
	{
		system("cls");
		cout << "Welcome! " << laccount.username << "\n";
		ifstream show;
		show.open(laccount.username + "details.txt");
		if (show)
		{
			system("cls");
			// Attaches the username to the name1 para matawag siya globally
			name1 = laccount.username;
			cout << "Directing you to your dashboard\n";
			dashboard();
		}

		else
		{
			system("cls");
			cout << "Create your own dashboard\n";
			c_dashboard();
		}
		input.close();
	}

	if (exist == false)
	{
		system("cls");
		cout << "Account not found.....Please try again\n";
		cout << "Type in 0 to retry: ";
		cin >> choice;
		if (choice == 0)
		{
			main();
		}
	}
}

*/


void test() {

	int k_num;

	std::cout << "Enter a chapter: ";
	std::cin >> k_num;

	std::fstream fil_k;
	fil_k.open("Resources/Fili/Buod/fil_k" + std::to_string(k_num) + ".txt", std::ios::in);

	if (fil_k.is_open())
	{
		std::cout << "              [ Kabanata " << k_num << " ]" << std::endl;
		std::cout << "__________________________________________" << std::endl;

		std::string line;
		while (std::getline(fil_k, line))
		{
			std::cout << line << std::endl;
		}
		fil_k.close();
	}

	else
	{
		system("cls");
		std::cout << "Chapter does not exist." << std::endl;
		system("pause");
		//k_noli();
	}
	std::cout << "__________________________________________" << std::endl;
	system("pause");
	system("cls");

}


void gotoxy(int x, int y)
{
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}
void load()
{
	char a = 219;
	gotoxy(30, 12);
	std::cout << "[Loading]" << std::endl;
	gotoxy(25, 14);
	for (int r = 1; r <= 20; r++)
	{
		for (int q = 0; q <= 100000000; q++);
		std::cout << a;
	}
}
