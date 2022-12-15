/*
 * Programmer: Namias, Jhon Keneth Ryan B.
 *
 *          Title: Car Dealership Management Program
 * Course/Section: CS1A North
 *           Date: December 13, 2022
 *      Professor: Alban Ryan Rei
 *
 *  Info:
 *			 This project [Car Dealership Management Program],
 *			 which is a topic of the (Fundamentals of Programming) course,
 *			 involves creating a car dealership management entirely in C++.
 *			 We are pleased to announce the release of a convenient console
 *			 application for performing management system tasks like adding
 *			 new car(s) to a data set, modifying and deleting car(s) from a
 *			 data set, exporting order logs, etc.
 *			 Involves creating a car dealership management entirely in C++.
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
#include <limits>
#include <ios>


class HeaderClass {
public:
	void titleText(std::string TitleText) {
		// Text COLOR settings
		HANDLE titleTextColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("COLOR A");
		system("CLS");

		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << " ,'";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "`. ";
		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "( ";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << "(                                                                )";
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << " )";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << " )";
		SetConsoleTextAttribute(titleTextColor, 10);
		std::cout << "                Car Dealership Management (CDM)               ";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << "( ";
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "(";
		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "( ";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << "(";
		SetConsoleTextAttribute(titleTextColor, 15);
		std::cout << TitleText;
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << ")";
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << " )";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << " )                                                              ( ";
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "(";
		std::cout << std::endl;
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << "( ";
		SetConsoleTextAttribute(titleTextColor, 11);
		std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
		SetConsoleTextAttribute(titleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
		std::cout << std::endl;
	}

	void userTitleText(std::string UserTitleText, std::string UserTitle, std::string UserTitleSeparatorLeft, std::string UserTitleSeparatorRight) {
		// Text COLOR settings
		HANDLE userTitleTextColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("COLOR A");
		system("CLS");

		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._   ";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " ,'";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "`. ";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "( ";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "(                                                                )";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << " )                ";
		SetConsoleTextAttribute(userTitleTextColor, 10);
		std::cout << "Car Dealership Management (CDM)";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "               ( ";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "(";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "( ";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "(                           ";
		SetConsoleTextAttribute(userTitleTextColor, 15);
		std::cout << "          ";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "                           )";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << " )";
		std::cout << UserTitleText;
		std::cout << "( ";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "(";
		std::cout << std::endl;
		std::cout << "( ";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "(";
		std::cout << UserTitleSeparatorLeft;
		SetConsoleTextAttribute(userTitleTextColor, 15);
		std::cout << UserTitle;
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << UserTitleSeparatorRight;
		std::cout << ")";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << " )                                                              ( ";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "(";
		std::cout << std::endl;
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << "( ";
		SetConsoleTextAttribute(userTitleTextColor, 11);
		std::cout << "(_.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._)";
		SetConsoleTextAttribute(userTitleTextColor, 9);
		std::cout << " )";
		std::cout << std::endl;
		std::cout << " `._.-._.-._.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.' ";
		std::cout << std::endl;
	}

	void choiceBlue(std::string choiceNumber, std::string choice) {
		// Text COLOR settings
		HANDLE Choice = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(Choice, 10);
		std::cout << "    [";
		SetConsoleTextAttribute(Choice, 15);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(Choice, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(Choice, 1);
		std::cout << choice << std::endl;
	}

	void choiceGreen(std::string choiceNumber, std::string choice) {
		// Text COLOR settings
		HANDLE Choice = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(Choice, 10);
		std::cout << "    [";
		SetConsoleTextAttribute(Choice, 15);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(Choice, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(Choice, 2);
		std::cout << choice << std::endl;
	}

	void choiceRed(std::string choiceNumber, std::string choice) {
		// Text COLOR settings
		HANDLE Choice = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(Choice, 10);
		std::cout << "    [";
		SetConsoleTextAttribute(Choice, 4);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(Choice, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(Choice, 4);
		std::cout << choice << std::endl;
	}

	void choiceBack(std::string choiceNumber, std::string choice) {
		// Text COLOR settings
		HANDLE Choice = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(Choice, 10);
		std::cout << std::endl;
		std::cout << "   [";
		SetConsoleTextAttribute(Choice, 15);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(Choice, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(Choice, 2);
		std::cout << choice;
		std::cout << std::endl;
	}

};

class DetailClass {
public:
	void AboutUs() {
		system("CLS");
		system("COLOR 09");

		// Text COLOR settings
		HANDLE aboutUsColor = GetStdHandle(STD_OUTPUT_HANDLE);


		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "   Programmer: ";
		SetConsoleTextAttribute(aboutUsColor, 11);
		std::cout << "Jhon Keneth Ryan B. Namias" << std::endl;
		std::cout << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << "   Course/Section: ";
		SetConsoleTextAttribute(aboutUsColor, 11);
		std::cout << "CS1A North" << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << "   Date: ";
		SetConsoleTextAttribute(aboutUsColor, 11);
		std::cout << "December 13, 2022" << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << "   Professor: ";
		SetConsoleTextAttribute(aboutUsColor, 11);
		std::cout << "Alban Ryan Rei" << std::endl;
		std::cout << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << "   Info:" << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 15);
		std::cout << "              This project [Car Dealership Management Program],    " << std::endl;
		std::cout << "     which is a topic of the [Fundamentals of Programming] course, " << std::endl;
		std::cout << "     involves creating a car dealership management entirely in C++." << std::endl;
		std::cout << "     We are pleased to announce the release of a convenient console" << std::endl;
		std::cout << "     application for performing management system tasks like adding" << std::endl;
		std::cout << "     new car(s) to a data set, modifying and deleting car(s) from a" << std::endl;
		std::cout << "     data set, exporting order logs, etc.                          " << std::endl;
		std::cout << "     Involves creating a car dealership management entirely in C++." << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 10);
	}

	void titleScreen() {
		// Text COLOR settings
		HANDLE TitleScreenColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("COLOR A");
		system("CLS");

		// Title design XD
		std::cout << std::endl;
		std::cout << "     .----------------.   .----------------.   .----------------. " << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << ".--------------. ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << ".--------------.";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << ".--------------.";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|     ";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "______";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "   |";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|  ";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "________";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " | ";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "____    ____";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | " << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "   .' ___  |  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << " |_   ___ `.  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "|_   \\  /   _|";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "  / .'   \\_|  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "   | |   `. \\ ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "  |   \\/   |  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "  | |         ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "   | |    | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "  | |\\  /| |  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "  \\ `.___.'\\  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "  _| |___.' / ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << " _| |_\\/_| |_ ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "   `._____.'  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << " |________.'  ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "| ";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << "| |";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << " |";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "|_____||_____|";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|              |";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|              |";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "|              |";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "    | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "'--------------'";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "'--------------'";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " | | ";
		SetConsoleTextAttribute(TitleScreenColor, 7);
		std::cout << "'--------------'";
		SetConsoleTextAttribute(TitleScreenColor, 10);
		std::cout << " |" << std::endl;

		std::cout << "     '----------------'   '----------------'   '----------------' " << std::endl;

		std::cout << "                  ";
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "Car ";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "Dealership ";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "Management ";
		SetConsoleTextAttribute(TitleScreenColor, 11);
		std::cout << "Program               " << std::endl;

		std::cout << std::endl;
		/*
		std::cout << "								 _.-=\"_-         _                              " << std::endl;
		std::cout << "						 _.-=\"   _-          | ||\"\"\"\"\"\"\"---._______     __..    " << std::endl;
		std::cout << "			 ___.==\"\"\"\"-.______-,,,,,,,,,,,,`-''----\" \"\"\"\"\"       \"\"\"\"\"  __'   " << std::endl;
		std::cout << "	  __.--\"\"     __        ,'                   o \\           __        [__|   " << std::endl;
		std::cout << " __-\"\"=======.--\"\"  \"\"--.=================================.--\"\"  \"\"--.=======:" << std::endl;
		std::cout << "]       [w] : /        \\ : |========================|    : /        \\ :  [w] :" << std::endl;
		std::cout << "V___________:|          |: |========================|    :|          |:   _-\" " << std::endl;
		std::cout << " V__________: \\        / :_|=======================/_____: \\        / :__-\"   " << std::endl;
		std::cout << " -----------'  \"-____-\"  `-------------------------------'  \"-____-\"          " << std::endl;
		*/
		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "             _____";
		SetConsoleTextAttribute(TitleScreenColor, 2);
		std::cout << "  ___  ";
		SetConsoleTextAttribute(TitleScreenColor, 3);
		std::cout << "  ____    ";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "__  __ ";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << " ___      ";
		SetConsoleTextAttribute(TitleScreenColor, 6);
		std::cout << "  ____" << std::endl;




		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "            / ___/";
		SetConsoleTextAttribute(TitleScreenColor, 2);
		std::cout << " / _ \\";
		SetConsoleTextAttribute(TitleScreenColor, 3);
		std::cout << "  / __ \\ ";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << " / / / /";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << " / _ \\  ";
		SetConsoleTextAttribute(TitleScreenColor, 6);
		std::cout << "    / / /" << std::endl;



		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "           / (_ / ";
		SetConsoleTextAttribute(TitleScreenColor, 2);
		std::cout << "/ , _/ ";
		SetConsoleTextAttribute(TitleScreenColor, 3);
		std::cout << "/ /_/ / ";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "/ /_/ / ";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "/ ___/     ";
		SetConsoleTextAttribute(TitleScreenColor, 6);
		std::cout << "/_  _/" << std::endl;

		SetConsoleTextAttribute(TitleScreenColor, 1);
		std::cout << "           \\___/ ";
		SetConsoleTextAttribute(TitleScreenColor, 2);
		std::cout << "/_/|_| ";
		SetConsoleTextAttribute(TitleScreenColor, 3);
		std::cout << " \\____/  ";
		SetConsoleTextAttribute(TitleScreenColor, 4);
		std::cout << "\\____/ ";
		SetConsoleTextAttribute(TitleScreenColor, 5);
		std::cout << "/_/      ";
		SetConsoleTextAttribute(TitleScreenColor, 6);
		std::cout << "    /_/  " << std::endl;
		SetConsoleTextAttribute(TitleScreenColor, 10);

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "   ";
		system("PAUSE");

	}
};

class BackEnd {
public:
	void display_menu(const std::string& manufacturer, const std::string names[], const int prices[], const size_t numCars) {
		// Text COLOR settings
		HANDLE Display_Menu_Color = GetStdHandle(STD_OUTPUT_HANDLE);

		std::cout << manufacturer << " Cars:" << std::endl;

		for (size_t i = 0; i < numCars; i++) {
			SetConsoleTextAttribute(Display_Menu_Color, 10);
			std::cout << "   [";
			SetConsoleTextAttribute(Display_Menu_Color, 15);
			std::cout << i + 1;
			SetConsoleTextAttribute(Display_Menu_Color, 10);
			std::cout << "]\t";
			SetConsoleTextAttribute(Display_Menu_Color, 9);
			std::cout << names[i];
			SetConsoleTextAttribute(Display_Menu_Color, 11);
			std::cout << "\tfor ";
			SetConsoleTextAttribute(Display_Menu_Color, 9);
			// structuring currency
			struct group_facet : public std::numpunct<char> {
			protected:
				std::string do_grouping() const { return "\003"; }
			};
			std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));
			std::cout << std::fixed << prices[i];
			SetConsoleTextAttribute(Display_Menu_Color, 11);
			std::cout << " pesos";
			std::cout << std::endl;
		}
	}

	void display_color(const std::string color_index[], const size_t numColors) {
		// Text COLOR settings
		HANDLE Display_Color_Color = GetStdHandle(STD_OUTPUT_HANDLE);
		
		for (size_t a = 0; a < numColors; a++) {
			SetConsoleTextAttribute(Display_Color_Color, 10);
			std::cout << "    [";
			SetConsoleTextAttribute(Display_Color_Color, 15);
			std::cout << a + 1;
			SetConsoleTextAttribute(Display_Color_Color, 10);
			std::cout << "] ";
			SetConsoleTextAttribute(Display_Color_Color, 11);
			std::cout << color_index[a];
			std::cout << std::endl;
		}
	}

	void Reciept(std::string DateTime, std::string CarNames, std::string CarColors, int Price, int Payment, int Change) {
		// Text COLOR settings
		HANDLE RecieptColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("COLOR A");
		system("CLS");

		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\n\t+----------------------------------------------------+" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "            ___ ___ ___ ___ ___ ___ _____           ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "           | _ \\ __/ __| __|_ _| _ \\_   _|          ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "           |   / _| (__| _| | ||  _/ | |            ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "           |_|_\\___\\___|___|___|_|   |_|            ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|                                                    |" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Store: ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << "Car Dealership Management (CDM)             ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Store Number: ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << "#1              ";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "Manager: ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << "@PP_Namias  ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Address: ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << "936 Llano rd. Caloocan City               ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|                                                    |" << std::endl;
		std::cout << "\t| ";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << DateTime;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "                             |" << std::endl;
		std::cout << "\t|                                                    |" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " ================================================== ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		std::cout << "     Menu	   Price      Quant.  Total Price    ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " ================================================== ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 15);
		std::cout << " [";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << CarColors;
		SetConsoleTextAttribute(RecieptColor, 15);
		std::cout << "] ";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << CarNames;
		std::cout << "\t ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Price;
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "\t1      ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Price;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "     |" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " -------------------------------------------------- ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Total Price                          ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Price;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "     |" << std::endl;
		std::cout << "\t|                                                    |" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Cash                                 ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Payment;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "     |" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Change                               ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Change;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t     |" << std::endl;
		std::cout << "\t|                                                    |" << std::endl;
		std::cout << "\t+----------------------------------------------------+" << std::endl;
	}

	void orderLogs() {
		// Text COLOR settings
		HANDLE OrderLogsColor = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream Order_Logs("Text Files/Order_Logs.txt");

		std::string date;
		std::string time;
		std::string car_name;
		std::string car_color;
		int car_price;

		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << "\n======================================================================" << std::endl;
		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << "|    ";
		SetConsoleTextAttribute(OrderLogsColor, 10);
		std::cout << "Date";
		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << "     |\t";
		SetConsoleTextAttribute(OrderLogsColor, 10);
		std::cout << "  Time";
		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << "   |   ";
		SetConsoleTextAttribute(OrderLogsColor, 10);
		std::cout << "Car Name";
		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << "   | ";
		SetConsoleTextAttribute(OrderLogsColor, 10);
		std::cout << "Car Color";
		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << " |\t";
		SetConsoleTextAttribute(OrderLogsColor, 10);
		std::cout << "Car Price";
		SetConsoleTextAttribute(OrderLogsColor, 7);
		std::cout << "\t|";
		std::cout << "\n======================================================================" << std::endl;
		SetConsoleTextAttribute(OrderLogsColor, 1);

		while (Order_Logs >> date >> time >> car_name >> car_color >> car_price) {
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "| ";
			SetConsoleTextAttribute(OrderLogsColor, 9);
			std::cout << date;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << " |\t";
			SetConsoleTextAttribute(OrderLogsColor, 11);
			std::cout << time;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << " |   ";
			SetConsoleTextAttribute(OrderLogsColor, 9);
			std::cout << car_name;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "\t| ";
			SetConsoleTextAttribute(OrderLogsColor, 11);
			std::cout << car_color;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "\t    | \t";
			SetConsoleTextAttribute(OrderLogsColor, 9);
			struct group_facet : public std::numpunct<char> {
			protected:
				std::string do_grouping() const { return "\003"; }
			};
			std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));
			std::cout << std::fixed << car_price;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "\t|";
			std::cout << std::endl;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "|--------------------------------------------------------------------|";
			std::cout << std::endl;
		}
		SetConsoleTextAttribute(OrderLogsColor, 9);
	}

	void loginLogs() {
		// Text COLOR settings
		HANDLE LoginLogsColor = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream Login_Logs("Text Files/Login_Logs.txt");

		std::string date;
		std::string time;
		std::string username;
		std::string access;

		SetConsoleTextAttribute(LoginLogsColor, 7);
		std::cout << "\n======================================================================" << std::endl;
		std::cout << "|     ";
		SetConsoleTextAttribute(LoginLogsColor, 10);
		std::cout << "Username";
		SetConsoleTextAttribute(LoginLogsColor, 7);
		std::cout << "     |   ";
		SetConsoleTextAttribute(LoginLogsColor, 10);
		std::cout << "Access";
		SetConsoleTextAttribute(LoginLogsColor, 7);
		std::cout << "   |      ";
		SetConsoleTextAttribute(LoginLogsColor, 10);
		std::cout << "Date";
		SetConsoleTextAttribute(LoginLogsColor, 7);
		std::cout << "       |       ";
		SetConsoleTextAttribute(LoginLogsColor, 10);
		std::cout << "Time";
		SetConsoleTextAttribute(LoginLogsColor, 7);
		std::cout << "   \t|";
		std::cout << "\n======================================================================" << std::endl;
		SetConsoleTextAttribute(LoginLogsColor, 1);

		while (Login_Logs >> username >> access >> date >> time) {
			SetConsoleTextAttribute(LoginLogsColor, 7);
			std::cout << "|      ";
			SetConsoleTextAttribute(LoginLogsColor, 9);
			std::cout << username;
			SetConsoleTextAttribute(LoginLogsColor, 7);
			std::cout << "\t   |   ";
			SetConsoleTextAttribute(LoginLogsColor, 11);
			std::cout << access;
			SetConsoleTextAttribute(LoginLogsColor, 7);
			std::cout << "\t|   ";
			SetConsoleTextAttribute(LoginLogsColor, 9);
			std::cout << date;
			SetConsoleTextAttribute(LoginLogsColor, 7);
			std::cout << "   |     ";
			SetConsoleTextAttribute(LoginLogsColor, 11);
			std::cout << time;
			SetConsoleTextAttribute(LoginLogsColor, 7);
			std::cout << "\t|";
			std::cout << std::endl;
			std::cout << "|--------------------------------------------------------------------|";
			std::cout << std::endl;
		}
		SetConsoleTextAttribute(LoginLogsColor, 9);
	}

	void viewEmployeeData() {
		// Text COLOR settings
		HANDLE ViewEmployeeData = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream EmployeeFile("Text Files/Employee.txt");

		std::string name;
		std::string pass;

		SetConsoleTextAttribute(ViewEmployeeData, 7);
		std::cout << "\n======================================================================" << std::endl;
		std::cout << "|\t";
		SetConsoleTextAttribute(ViewEmployeeData, 10);
		std::cout << "Line";
		SetConsoleTextAttribute(ViewEmployeeData, 7);
		std::cout << "\t|    ";
		SetConsoleTextAttribute(ViewEmployeeData, 10);
		std::cout << "Username";
		SetConsoleTextAttribute(ViewEmployeeData, 7);
		std::cout << "\t |    ";
		SetConsoleTextAttribute(ViewEmployeeData, 10);
		std::cout << "Password";
		SetConsoleTextAttribute(ViewEmployeeData, 7);
		std::cout << "\t\t\t\t|";
		std::cout << "\n======================================================================" << std::endl;

		int j = 0;
		while (EmployeeFile >> name >> pass) {
			j++;
			SetConsoleTextAttribute(ViewEmployeeData, 7);
			std::cout << "|\t";
			SetConsoleTextAttribute(ViewEmployeeData, 10);
			std::cout << "[";
			SetConsoleTextAttribute(ViewEmployeeData, 15);
			std::cout << j;
			SetConsoleTextAttribute(ViewEmployeeData, 10);
			std::cout << "]\t";
			SetConsoleTextAttribute(ViewEmployeeData, 7);
			std::cout << "|    ";
			SetConsoleTextAttribute(ViewEmployeeData, 9);
			std::cout << name;
			SetConsoleTextAttribute(ViewEmployeeData, 7);
			std::cout << "\t |    ";
			SetConsoleTextAttribute(ViewEmployeeData, 11);
			std::cout << pass;
			SetConsoleTextAttribute(ViewEmployeeData, 7);
			std::cout << "\t\t\t\t|" << std::endl;
			std::cout << "|--------------------------------------------------------------------|";
		}
	}
	
	void viewCarNamePrice() {
		// Text COLOR settings
		HANDLE ViewCarData = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream Cars_Name("Text Files/Cars_Name.txt");
		std::ifstream Cars_Price("Text Files/Cars_Price.txt");

		std::string CName;
		int CPrice;

		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\n======================================================================" << std::endl;
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "|      ";
		SetConsoleTextAttribute(ViewCarData, 10);
		std::cout << "Line";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\t |      ";
		SetConsoleTextAttribute(ViewCarData, 10);
		std::cout << "Name";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\t  |\t";
		SetConsoleTextAttribute(ViewCarData, 10);
		std::cout << "Price";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\t\t\t\t|";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\n======================================================================" << std::endl;
		SetConsoleTextAttribute(ViewCarData, 1);

		int i = 0;
		while ((Cars_Name >> CName) && (Cars_Price >> CPrice)) {
			i++;
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "|";
			SetConsoleTextAttribute(ViewCarData, 10);
			std::cout << "      [";
			SetConsoleTextAttribute(ViewCarData, 15);
			std::cout << i;
			SetConsoleTextAttribute(ViewCarData, 10);
			std::cout << "]\t";
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << " |     ";
			SetConsoleTextAttribute(ViewCarData, 9);
			std::cout << CName;
			std::cout << "\t";
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "  |\t";
			SetConsoleTextAttribute(ViewCarData, 11);
			struct group_facet : public std::numpunct<char> {
			protected:
				std::string do_grouping() const { return "\003"; }
			};
			std::cout.imbue(std::locale(std::cout.getloc(), new group_facet));
			std::cout << std::fixed << CPrice;
			SetConsoleTextAttribute(ViewCarData, 9);
			std::cout << " pesos";
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "\t\t\t|";
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "|--------------------------------------------------------------------|";
			std::cout << std::endl;
		}
	}

	void viewCarColor() {
		// Text COLOR settings
		HANDLE ViewCarData = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream CarColorFile("Text Files/Cars_Color.txt");

		std::string Color;

		std::cout << std::endl;
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "======================================================================" << std::endl;
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "|\t";
		SetConsoleTextAttribute(ViewCarData, 10);
		std::cout << "Line";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\t|    ";
		SetConsoleTextAttribute(ViewCarData, 10);
		std::cout << "Color";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << "\t\t\t\t\t\t|";
		SetConsoleTextAttribute(ViewCarData, 7);
		std::cout << std::endl;
		std::cout << "======================================================================" << std::endl;
		SetConsoleTextAttribute(ViewCarData, 1);

		int j = 0;
		while (CarColorFile >> Color) {
			j++;
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "|";
			SetConsoleTextAttribute(ViewCarData, 10);
			std::cout << "\t[";
			SetConsoleTextAttribute(ViewCarData, 15);
			std::cout << j;
			SetConsoleTextAttribute(ViewCarData, 10);
			std::cout << "]\t";
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "|    ";
			SetConsoleTextAttribute(ViewCarData, 9);
			std::cout << Color;
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "\t\t\t\t\t\t|";
			SetConsoleTextAttribute(ViewCarData, 7);
			std::cout << "|--------------------------------------------------------------------|";
			std::cout << std::endl;
		}
	}

	void gotoxy(int x, int y)
	{
		COORD d;
		d.X = x;
		d.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
	}
	
	void fontTextColor(int Color) {
		HANDLE FontColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(FontColor, Color);
	}
};

int main()
{
	DetailClass AboutUs;
	DetailClass TitleScreen;

	HeaderClass Choice;

	HeaderClass TitleText;
	HeaderClass UserTitleText;

	BackEnd Display_Menu;
	BackEnd Display_Color;
	BackEnd Reciept;
	BackEnd OrderLogs;
	BackEnd ViewCarData;
	BackEnd ViewEmployeeData;
	BackEnd Coordinate;
	BackEnd FontTextColor;
	BackEnd LoginLogs;

	// system title
	system("TITLE Car Dealership Management Program By: @PP-Namias");

	// system defaults
	system("mode 70, 150");

	// Font and Command Promt size
	static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 1, &fontex);
	fontex.FontWeight = 200;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex);

	// Loading screen
	system("CLS");
	system("COLOR 0A");
	char a = 219;
	Coordinate.gotoxy(30, 10);
	std::cout << "[Loading]" << std::endl;
	Coordinate.gotoxy(25, 12);
	for (int r = 1; r <= 20; r++)
	{
		for (int q = 0; q <= 100000000; q++);
		std::cout << a;
	}
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

	// Title screen call-out once [Flagging]
	bool flag = false;
	if (flag == false) {
		TitleScreen.titleScreen();
	}
	flag = true;

	std::string employeeLogin;

	// confirmation
	char order_more = 'n',
		order_confirmation;

	int Payment,
		Value,
		Change,
		Cars,
		Color;

	// access identifier
	int AccessLevel = 0;

	// main choices
	int choice;
	int adminchoice;
	int employeechoice;

	// sub choices
	int employeeData;
	int CarChoice;

	// Login Form
	LoginForm:
	
	// system title
	system("TITLE Car Dealership Management Program [Login Form]");

	TitleText.titleText("                    Welcome to the Login Menu                   ");

	std::cout << std::endl;
	Choice.choiceBlue("1", "Admin");
	Choice.choiceBlue("2", "Employee");
	Choice.choiceBlue("3", "Guest\n");

	Choice.choiceGreen("4", "About Us\n");

	Choice.choiceRed("5", "Exit\n");

	FontTextColor.fontTextColor(9);
	std::cout << "   Please insert your choice: ";
	FontTextColor.fontTextColor(11);
	std::cin >> choice;
	std::cin.ignore();

	// Admin
	if (choice == 1) {
	AdminLogin:

		// Loading screen
		system("CLS");
		system("COLOR 0F");
		char a = 219;
		Coordinate.gotoxy(30, 10);
		std::cout << "[Loading]" << std::endl;
		Coordinate.gotoxy(25, 12);
		for (int r = 1; r <= 20; r++)
		{
			for (int q = 0; q <= 10000000; q++);
			std::cout << a;
		}
		std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

		// system title
		system("TITLE Car Dealership Management Program [Admin Login]");

		int adminlogin = 0;
		std::string user, pass, u, p;

		TitleText.titleText("                           Admin Login                          ");

		Choice.choiceBack("ESC", "Back");

		FontTextColor.fontTextColor(1);
		std::cout << "\n   Please enter your login details";
		FontTextColor.fontTextColor(9);
		std::cout << "\n   Username: ";
		FontTextColor.fontTextColor(11);

		std::string userHider;
		char c_user;

		do {
			c_user = _getch();
			switch (c_user) {
			case 0:
				_getch();
				break;
			case 13:
				std::cout << std::endl;
				break;
			case 27:
				system("CLS");
				goto LoginForm;
			case 8:
				if (userHider.length() > 0) {
					userHider.erase(userHider.end() - 1);
					std::cout << c_user << ' ' << c_user;
				}
				break;
			default:
				userHider += c_user;
				std::cout << c_user;
				break;
			}
		} while (c_user != 13);

		if (userHider.length() == 0) {
			system("CLS");
			system("COLOR 4f");
			std::cout << "\n   Please enter Username!" << std::endl;
			std::cout << std::endl;
			std::cout << "   ";
			system("PAUSE");
			goto AdminLogin;
		}
		
		else {
			user = userHider;
		}

			FontTextColor.fontTextColor(9);
			std::cout << "   Password: ";
			FontTextColor.fontTextColor(11);

			int i = 0;

			std::string passHider;
			char c_pass;

			do {
				c_pass = _getch();
				switch (c_pass) {
				case 0:
					_getch();
					break;
				case 13:
					std::cout << std::endl;
					break;
				case 27:
					system("CLS");
					goto LoginForm;
				case 8:
					if (passHider.length() > 0) {
						passHider.erase(passHider.end() - 1);
						std::cout << c_pass << ' ' << c_pass;
					}
					break;
				default:
					passHider += c_pass;
					std::cout << '*';
					break;
				}
			} while (c_pass != 13);

			if (passHider.length() == 0) {
				system("CLS");
				system("COLOR 4f");
				std::cout << "\n   Please enter Password!" << std::endl;
				std::cout << std::endl;
				std::cout << "   ";
				system("PAUSE");
				goto AdminLogin;
			}

			else {
				pass = passHider;
			}

			// Loading XD
			FontTextColor.fontTextColor(9);
			std::cout << "\n   Verifying your login details please wait";
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
					std::cout << "\n   Admin login successful!";
					Sleep(2000);
					system("CLS");
				}

				else if (u != user)
				{
					std::cout << "\n   Invalid Username please try again";
					Sleep(2000);
					goto AdminLogin;
				}

				else if (p != pass)
				{
					std::cout << "\n   Invalid Password please try again";
					Sleep(2000);
					goto AdminLogin;
				}

				else {
					adminlogin = 0;
					system("CLS");
					system("COLOR 4f");
					std::cout << "\n   Wrong Username or Password!"
						<< "\n   Try to login again\n" << std::endl;
					Sleep(2000);
					goto AdminLogin;
				}
			}
			input.close();

			if (adminlogin == 1)
			{
				// Loading screen
				system("CLS");
				system("COLOR 0F");
				char a = 219;
				Coordinate.gotoxy(29, 10);
				std::cout << "[Logging in]" << std::endl;
				Coordinate.gotoxy(25, 12);
				for (int r = 1; r <= 20; r++)
				{
					for (int q = 0; q <= 10000000; q++);
					std::cout << a;
				}
				std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

				// Login Logs [INPUT]
				auto t = std::time(nullptr);
				auto tm = *std::localtime(&t);

				std::ostringstream oss;
				oss << std::put_time(&tm, "%b/%d/%Y\t%H:%M:%S");
				auto str = oss.str();

				std::ofstream Login_Logs("Text Files/Login_Logs.txt", std::ios::app);
				Login_Logs << std::endl << user << "\t" << "Admin" << "\t" << str;
				Login_Logs.close();

				// Login
			AdminMenu:

				// system title
				system("TITLE Car Dealership Management Program [Admin Menu]");

				UserTitleText.userTitleText("                           Admin Menu                         ", user, "                             [", "]                           ");

				std::cout << std::endl;
				Choice.choiceBlue("1", "Employee Data");
				Choice.choiceBlue("2", "Cars Data");
				Choice.choiceBlue("3", "Order Logs");
				Choice.choiceBlue("4", "Login Logs");
				Choice.choiceBlue("5", "Order Cars\n");

				Choice.choiceGreen("6", "About Us\n");

				Choice.choiceRed("7", "Logout\n");

				FontTextColor.fontTextColor(9);
				std::cout << "   Please insert your choice: ";

				FontTextColor.fontTextColor(11);
				std::cin >> adminchoice;
				std::cout << std::endl;
				std::cin.ignore();

				// Employee Data
				if (adminchoice == 1) {
				EmployeeData:

					// Loading screen
					system("CLS");
					system("COLOR 0F");
					char a = 219;
					Coordinate.gotoxy(30, 10);
					std::cout << "[Loading]" << std::endl;
					Coordinate.gotoxy(25, 12);
					for (int r = 1; r <= 20; r++)
					{
						for (int q = 0; q <= 10000000; q++);
						std::cout << a;
					}
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

					// system title
					system("TITLE Car Dealership Management Program [Employee Data]");

					TitleText.titleText("                          Employee Data                         ");

					std::cout << std::endl;
					Choice.choiceBlue("1", "Add Employee Data");
					Choice.choiceBlue("2", "View Employee Data");
					Choice.choiceBlue("3", "Search Employee Data");
					Choice.choiceBlue("4", "Edit Employee Data");
					Choice.choiceRed("5", "Delete Employee Data\n");

					Choice.choiceRed("6", "Back\n");

					FontTextColor.fontTextColor(9);
					std::cout << "   Please insert your choice: ";

					FontTextColor.fontTextColor(11);
					std::cin >> employeeData;
					std::cout << std::endl;
					std::cin.ignore();

					// Add Employee Data
					if (employeeData == 1) {


						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Add Employee Data]");

						TitleText.titleText("                         Add Employee Data                      ");

						Choice.choiceBack("ESC", "Back");

						std::string adduser, addpass, ru, rp;
						FontTextColor.fontTextColor(9);
						std::cout << "\n   Enter the Username: ";
						FontTextColor.fontTextColor(11);

						std::string userHider;
						char c_user;

						do {
							c_user = _getch();
							switch (c_user) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								goto EmployeeData;
							case 8:
								if (userHider.length() > 0) {
									userHider.erase(userHider.end() - 1);
									std::cout << c_user << ' ' << c_user;
								}
								break;
							default:
								userHider += c_user;
								std::cout << c_user;
								break;
							}
						} while (c_user != 13);
						adduser = userHider;

						//  std::cin >> adduser;
						FontTextColor.fontTextColor(9);
						std::cout << "   Enter the Password: ";
						FontTextColor.fontTextColor(11);

						std::string passHider;
						char c_pass;

						do {
							c_pass = _getch();
							switch (c_pass) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								goto EmployeeData;
							case 8:
								if (passHider.length() > 0) {
									passHider.erase(passHider.end() - 1);
									std::cout << c_pass << ' ' << c_pass;
								}
								break;
							default:
								passHider += c_pass;
								std::cout << '*';
								break;
							}
						} while (c_pass != 13);
						addpass = passHider;

						//  std::cin >> addpass;

						std::ofstream reg("Text Files/Employee.txt", std::ios::app);
						reg << adduser << '\t' << addpass << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "\n   Employee Data Added!" << std::endl;
						std::cout << "\n   ";
						system("PAUSE");
						goto EmployeeData;
					}

					// View Employee Data
					else if (employeeData == 2) {
						system("CLS");

						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [View Employee Data]");

						TitleText.titleText("                        View Employee Data                      ");

						ViewEmployeeData.viewEmployeeData();

						FontTextColor.fontTextColor(9);
						std::cout << std::endl;
						std::cout << "\n   All Employees Data Displayed!";
						std::cout << "\n   ";
						system("PAUSE");
						goto EmployeeData;
					}

					// Search Employee Data
					else if (employeeData == 3) {
					SearchEmployeeData:

						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Search Employee Data]");

						TitleText.titleText("                      Search Employee Data                      ");

						int ch;

						std::cout << std::endl;
						Choice.choiceBlue("1", "Search your Password by Username");
						Choice.choiceBlue("2", "Search your Username by Password\n");
						Choice.choiceRed("3", "Back\n");

						FontTextColor.fontTextColor(9);
						std::cout << "   Enter your choice: ";

						FontTextColor.fontTextColor(11);
						std::cin >> ch;

						switch (ch) {
							
							// Search your Password by Username
							case 1:
							{
								SearchPasswordUsername:
								// Loading screen
								system("CLS");
								system("COLOR 0F");
								char a = 219;
								Coordinate.gotoxy(30, 10);
								std::cout << "[Loading]" << std::endl;
								Coordinate.gotoxy(25, 12);
								for (int r = 1; r <= 20; r++)
								{
									for (int q = 0; q <= 10000000; q++);
									std::cout << a;
								}
								std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

								TitleText.titleText("                   Search Password by Username                  ");

								std::cout << std::endl;
								Choice.choiceGreen("ESC", "Back");

								int login = 0;
								std::string searchuser, su, sp;
								std::cout << std::endl;
								FontTextColor.fontTextColor(9);
								std::cout << "    Enter your Username: ";
								FontTextColor.fontTextColor(11);

								std::string searchuserHider;
								char c_searchuser;

								do {
									c_searchuser = _getch();
									switch (c_searchuser) {
									case 0:
										_getch();
										break;
									case 13:
										std::cout << std::endl;
										break;
									case 27:
										system("CLS");
										std::cin.clear();
										std::cin.ignore(22, '\n'); 
										goto SearchEmployeeData;
									case 8:
										if (searchuserHider.length() > 0) {
											searchuserHider.erase(searchuserHider.end() - 1);
											std::cout << c_searchuser << ' ' << c_searchuser;
										}
										break;
									default:
										searchuserHider += c_searchuser;
										std::cout << c_searchuser;
										break;
									}
								} while (c_searchuser != 13);

								if (searchuserHider.length() == 0) {
									system("CLS");
									system("COLOR 4f");
									std::cout << "\n   Please enter Username!" << std::endl;
									std::cout << std::endl;
									std::cout << "   ";
									system("PAUSE");
									goto SearchPasswordUsername;
								}

								else {
									searchuser = searchuserHider;
								}

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
									FontTextColor.fontTextColor(9);
									std::cout << "    Noice, your account has been found";
									std::cout << std::endl;
									std::cout << "    Your password is [";
									FontTextColor.fontTextColor(15);
									std::cout << sp;
									FontTextColor.fontTextColor(9);
									std::cout << "]";
									std::cout << std::endl;
									std::cout << std::endl;
									std::cout << "    ";

									system("PAUSE");
									goto SearchEmployeeData;
								}

							else
							{
								std::cout << std::endl;
								FontTextColor.fontTextColor(9);
								std::cout << "    Sorry, Your username is not found in our database";
								std::cout << std::endl;
								std::cout << "    Please kindly contact your system administrator for more details";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "    ";
								system("PAUSE");
								goto SearchEmployeeData;
							}

							break;

						}

						case 2:
						{
							SearchUsernamePassword:
							// Loading screen
							system("CLS");
							system("COLOR 0F");
							char a = 219;
							Coordinate.gotoxy(30, 10);
							std::cout << "[Loading]" << std::endl;
							Coordinate.gotoxy(25, 12);
							for (int r = 1; r <= 20; r++)
							{
								for (int q = 0; q <= 10000000; q++);
								std::cout << a;
							}
							std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

							TitleText.titleText("                   Search Username by Password                  ");

							std::cout << std::endl;
							Choice.choiceGreen("ESC", "Back");

							int login = 0;
							std::string searchpass, su2, sp2;
							std::cout << std::endl;
							FontTextColor.fontTextColor(9);
							std::cout << "    Enter in your Password: ";
							FontTextColor.fontTextColor(11);
							
							std::string searchpassHider;
							char c_searchpass;

							do {
								c_searchpass = _getch();
								switch (c_searchpass) {
								case 0:
									_getch();
									break;
								case 13:
									std::cout << std::endl;
									break;
								case 27:
									system("CLS");
									goto SearchEmployeeData;
								case 8:
									if (searchpassHider.length() > 0) {
										searchpassHider.erase(searchpassHider.end() - 1);
										std::cout << c_searchpass << ' ' << c_searchpass;
									}
									break;
								default:
									searchpassHider += c_searchpass;
									std::cout << c_searchpass;
									break;
								}
							} while (c_searchpass != 13);

							if (searchpassHider.length() == 0) {
								system("CLS");
								system("COLOR 4f");
								std::cout << "\n   Please enter Password!" << std::endl;
								std::cout << std::endl;
								std::cout << "   ";
								system("PAUSE");
								goto SearchUsernamePassword;
							}

							else {
								searchpass = searchpassHider;
							}


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
								FontTextColor.fontTextColor(9);
								std::cout << "    Noice, your account has been found";
								std::cout << std::endl;
								FontTextColor.fontTextColor(9);
								std::cout << "    Your username is [";
								FontTextColor.fontTextColor(15);
								std::cout << su2;
								FontTextColor.fontTextColor(9);
								std::cout << "]";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "    ";
								system("PAUSE");
								goto SearchEmployeeData;
							}

							else
							{
								FontTextColor.fontTextColor(9);
								std::cout << std::endl;
								std::cout << "    Sorry, We cannot found your password in our database";
								std::cout << std::endl;
								std::cout << "    Please kindly contact your system administrator for more details";
								std::cout << std::endl;
								std::cout << std::endl;
								std::cout << "    ";
								system("PAUSE");
								goto SearchEmployeeData;
							}

							break;
						}

						case 3:
						{
							goto EmployeeData;
						}

						default:
							std::cout << std::endl;
							FontTextColor.fontTextColor(9);
							std::cout << "    Sorry, You entered wrong choice. Kindly try again";
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "    ";
							system("PAUSE");
							std::cin.clear();
							std::cin.ignore(22, '\n');
							goto SearchEmployeeData;
						}
					}

					// Edit Employee Data
					else if (employeeData == 4) {
					EditEmployeeData:

						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Edit Employee Data]");

						TitleText.titleText("                        Edit Employee Data                      ");

						ViewEmployeeData.viewEmployeeData();

						std::cout << std::endl;
						Choice.choiceBack("0", "Back");

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Type the number of line to edit";

						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";

						FontTextColor.fontTextColor(11);
					
						std::cin >> line_number;

						if (line_number == 0) {
							std::cin.clear();
							std::cin.ignore(22, '\n');
							system("CLS");

							goto EmployeeData;
						}

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Employee.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("COLOR 4f");
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
							system("COLOR 4f");

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


						std::string adduser, addpass, ru, rp;
						FontTextColor.fontTextColor(9);
						std::cout << "\n   Enter the Username: ";
						FontTextColor.fontTextColor(11);
						std::cin >> adduser;
						FontTextColor.fontTextColor(9);
						std::cout << "   Enter the Password: ";
						FontTextColor.fontTextColor(11);
						std::cin >> addpass;

						std::ofstream reg("Text Files/Employee.txt", std::ios::app);
						reg << adduser << '\t' << addpass << std::endl;
						std::cout << std::endl;
						FontTextColor.fontTextColor(1);
						std::cout << "   Line " << line_number + 1 << " has been edited!";
						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");

						goto EmployeeData;
					}

					// Delete Employee Data
					else if (employeeData == 5) {
					DeleteEmployee:

						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Delete Employee Data]");

						TitleText.titleText("                       Delete Employee Data                     ");

						ViewEmployeeData.viewEmployeeData();

						std::cout << std::endl;
						Choice.choiceBack("0", "Back");

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Type the number of line to delete";
						std::cout << std::endl;

						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << "   Line: ";
						FontTextColor.fontTextColor(11);

						std::cin >> line_number;

						if (line_number == 0) {
							std::cin.clear();
							std::cin.ignore(22, '\n');
							system("CLS");

							goto EmployeeData;
						}

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Employee.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("COLOR 4f");
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
							system("COLOR 4f");

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

						FontTextColor.fontTextColor(9);
						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been deleted";

						Sleep(3000);
						goto EmployeeData;

					}

					// Back
					else if (employeeData == 6) {
						system("CLS");
						goto AdminMenu;
					}

					else {
						// system title
						system("TITLE Car Dealership Management Program [Error Employee Data]");

						system("CLS");
						system("COLOR 4f");
						std::cout << "\n   Wrong input entered!" << std::endl;
						std::cin.clear();
						std::cin.ignore(22, '\n');
						Sleep(2000);

						goto EmployeeData;
					}
				}

				// Cars Data
				else if (adminchoice == 2) {
				CarData:

					// Loading screen
					system("CLS");
					system("COLOR 0F");
					char a = 219;
					Coordinate.gotoxy(30, 10);
					std::cout << "[Loading]" << std::endl;
					Coordinate.gotoxy(25, 12);
					for (int r = 1; r <= 20; r++)
					{
						for (int q = 0; q <= 10000000; q++);
						std::cout << a;
					}
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

					// system title
					system("TITLE Car Dealership Management Program [Cars Data]");
					
					TitleText.titleText("                            Cars Data                           ");

					std::cout << std::endl;
					Choice.choiceBlue("1", "View Cars Name & Price");
					Choice.choiceBlue("2", "Add Cars Name & Price");
					Choice.choiceBlue("3", "Edit Cars Name & Price");
					Choice.choiceRed("4", "Delete Cars Name & Price\n");

					Choice.choiceBlue("5", "View Cars Color");
					Choice.choiceBlue("6", "Add Cars Color");
					Choice.choiceBlue("7", "Edit Cars Color");
					Choice.choiceRed("8", "Delete Cars Color\n");

					Choice.choiceRed("9", "Back\n");


					FontTextColor.fontTextColor(9);
					std::cout << "   Please enter your input: ";

					FontTextColor.fontTextColor(11);
					std::cin >> CarChoice;

					// View Cars Name & Price
					if (CarChoice == 1) {

						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [View Cars Name & Price]");

						TitleText.titleText("                      View Cars Name & Price                    ");

						ViewCarData.viewCarNamePrice();

						FontTextColor.fontTextColor(9);
						std::cout << std::endl;
						std::cout << "   All Cars Name & Price Data Displayed!";
						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");
						goto CarData;
					}

					// Add Cars Name & Price
					else if (CarChoice == 2) {
					AddCarsNamePrice:
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Add Cars Name & Price]");

						TitleText.titleText("                      Add Cars Name & Price                     ");

						Choice.choiceBack("ESC", "Back");

						std::string addname, addprice;
						FontTextColor.fontTextColor(9);
						std::cout << "\n   Enter the Car Name: ";
						FontTextColor.fontTextColor(11);

						std::string addnameHider;
						char c_addname;

						do {
							c_addname = _getch();
							switch (c_addname) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								std::cin.clear();
								std::cin.ignore(22, '\n');
								goto CarData;
							case 8:
								if (addnameHider.length() > 0) {
									addnameHider.erase(addnameHider.end() - 1);
									std::cout << c_addname << ' ' << c_addname;
								}
								break;
							default:
								addnameHider += c_addname;
								std::cout << c_addname;
								break;
							}
						} while (c_addname != 13);

						if (addnameHider.length() == 0) {
							system("CLS");
							system("COLOR 4f");
							std::cout << "\n   Please enter the name of the car!" << std::endl;
							std::cout << std::endl;
							std::cout << "   ";
							system("PAUSE");
							goto AddCarsNamePrice;
						}

						else {
							addname = addnameHider;
						}

						FontTextColor.fontTextColor(9);
						std::cout << "   Enter the Car Price: ";
						FontTextColor.fontTextColor(11);

						std::string addpriceHider;
						char c_addprice;

						do {
							c_addprice = _getch();
							switch (c_addprice) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								std::cin.clear();
								std::cin.ignore(22, '\n');
								goto EmployeeData;
							case 8:
								if (addpriceHider.length() > 0) {
									addpriceHider.erase(addpriceHider.end() - 1);
									std::cout << c_addprice << ' ' << c_addprice;
								}
								break;
							default:
								addpriceHider += c_addprice;
								std::cout << c_addprice;
								break;
							}
						} while (c_addprice != 13);

						if (addpriceHider.length() == 0) {
							system("CLS");
							system("COLOR 4f");
							std::cout << "\n   Please enter the price of the car!" << std::endl;
							std::cout << std::endl;
							std::cout << "   ";
							system("PAUSE");
							goto AddCarsNamePrice;
						}

						else {
							addprice = addpriceHider;
						}

						FontTextColor.fontTextColor(1);
						std::ofstream Cars_Name("Text Files/Cars_Name.txt", std::ios::app);
						Cars_Name << std::endl << addname;
						Cars_Name.close();

						std::ofstream Cars_Price("Text Files/Cars_Price.txt", std::ios::app);
						Cars_Price << std::endl << addprice;
						Cars_Price.close();

						std::cout << "\n   Car Name & Price Added!" << std::endl;

						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");
						goto CarData;
					}

					// Edit Cars Name & Price
					else if (CarChoice == 3) {
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Edit Cars Name & Price]");

						TitleText.titleText("                      Edit Car Name & Price                     ");

						ViewCarData.viewCarNamePrice();

						Choice.choiceBack("0", "Back");

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Type the number of line to edit";

						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";
						FontTextColor.fontTextColor(11);

						std::cin >> line_number;

						if (line_number == 0) {
							std::cin.clear();
							std::cin.ignore(22, '\n');
							system("CLS");

							goto CarData;
						}

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Name.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("COLOR 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
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
							goto DeleteCarsNamePrice;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Cars_Name.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("COLOR 4f");

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
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();

						// Deleting car prices
						line_number++;

						// std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file_Cars_Price;

						// Open the file with the provided filename
						read_file_Cars_Price.open("Text Files/Cars_Price.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file_Cars_Price.fail())
						{
							system("COLOR 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines_Cars_Price;
						std::string line_Cars_Price;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file_Cars_Price, line_Cars_Price))
							lines_Cars_Price.push_back(line_Cars_Price);

						// Close our access to the file since we are done reading with it  
						read_file_Cars_Price.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines_Cars_Price.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines_Cars_Price.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file_Cars_Price;

						// Open the file with the provided filename
						write_file_Cars_Price.open("Text Files/Cars_Price.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file_Cars_Price.fail())
						{
							system("COLOR 4f");

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
						for (int i = 0; i < lines_Cars_Price.size(); i++)
							if (i != line_number)
								write_file_Cars_Price << lines_Cars_Price[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file_Cars_Price.close();

						std::string addname, addprice;
						FontTextColor.fontTextColor(9);
						std::cout << "\n   Enter the Car Name: ";
						FontTextColor.fontTextColor(11);

						std::string userHider_addname;
						char c_user_addname;

						do {
							c_user_addname = _getch();
							switch (c_user_addname) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								std::cin.clear();
								std::cin.ignore(22, '\n');
								goto EmployeeData;
							case 8:
								if (userHider_addname.length() > 0) {
									userHider_addname.erase(userHider_addname.end() - 1);
									std::cout << c_user_addname << ' ' << c_user_addname;
								}
								break;
							default:
								userHider_addname += c_user_addname;
								std::cout << c_user_addname;
								break;
							}
						} while (c_user_addname != 13);
						addname = userHider_addname;

						// std::cin >> addname;
						FontTextColor.fontTextColor(9);
						std::cout << "   Enter the Car Price: ";
						FontTextColor.fontTextColor(11);

						std::string userHider_addprice;
						char c_user_addprice;

						do {
							c_user_addprice = _getch();
							switch (c_user_addprice) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								std::cin.clear();
								std::cin.ignore(22, '\n');
								goto CarData;
							case 8:
								if (userHider_addprice.length() > 0) {
									userHider_addprice.erase(userHider_addprice.end() - 1);
									std::cout << c_user_addprice << ' ' << c_user_addprice;
								}
								break;
							default:
								userHider_addprice += c_user_addprice;
								std::cout << c_user_addprice;
								break;
							}
						} while (c_user_addprice != 13);
						addprice = userHider_addprice;

						// std::cin >> addprice;
						FontTextColor.fontTextColor(1);

						std::ofstream Cars_Name("Text Files/Cars_Name.txt", std::ios::app);
						Cars_Name << addname << std::endl ;
						Cars_Name.close();

						FontTextColor.fontTextColor(10);
						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");
						goto CarData;
					}

					// Delete Cars Name & Price
					else if (CarChoice == 4) {
					DeleteCarsNamePrice:
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Delete Cars Name & Price]");

						TitleText.titleText("                     Delete Car Name & Price                    ");

						ViewCarData.viewCarNamePrice();

						Choice.choiceBack("0", "Back");

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Type the number of line to delete";

						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;

						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";
						FontTextColor.fontTextColor(11);

						std::cin >> line_number;

						if (line_number == 0) {
							std::cin.clear();
							std::cin.ignore(22, '\n');
							system("CLS");

							goto CarData;
						}

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Name.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("COLOR 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
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
							goto DeleteCarsNamePrice;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file;

						// Open the file with the provided filename
						write_file.open("Text Files/Cars_Name.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file.fail())
						{
							system("COLOR 4f");

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
						for (int i = 0; i < lines.size(); i++)
							if (i != line_number)
								write_file << lines[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file.close();

						// Deleting car prices
						line_number++;


						// std::cin >> line_number;

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file_Cars_Price;

						// Open the file with the provided filename
						read_file_Cars_Price.open("Text Files/Cars_Price.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file_Cars_Price.fail())
						{
							system("COLOR 4f");
							std::cout << std::endl;
							std::cout << "   Error opening file." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
							// returning 1 instead of 0 is a signal to the shell that something went 
							// wrong in the execution of the program    
						}

						// Create a vector to store all the file lines, and a string line to store 
						// each line that we read
						std::vector<std::string> lines_Cars_Price;
						std::string line_Cars_Price;

						// Read each line of the file and store it as the next element of the vector,
						// the loop will stop when there are no more lines to read
						while (getline(read_file_Cars_Price, line_Cars_Price))
							lines_Cars_Price.push_back(line_Cars_Price);

						// Close our access to the file since we are done reading with it  
						read_file_Cars_Price.close();

						// The vector will now contain an element for each line in the file, so the 
						 // size of the vector is the number of lines in the file.  Check to make 
						 // sure the line number requested does not exceed the number of lines in 
						 // the file, if it does, exit with an error message and status.
						if (line_number > lines_Cars_Price.size())
						{
							std::cout << std::endl;
							std::cout << "   Line " << line_number;
							std::cout << " not in file." << std::endl;

							// Inform user how many lines ARE in the file as part of the error message
							std::cout << "   File has " << lines_Cars_Price.size();
							std::cout << " lines." << std::endl;

							Sleep(3000);
							goto DeleteCarsNamePrice;
						}

						// Create ofstream object for writing to the file
						std::ofstream write_file_Cars_Price;

						// Open the file with the provided filename
						write_file_Cars_Price.open("Text Files/Cars_Price.txt");

						// If the file failed to open, exit with an error message and exit status
						if (write_file_Cars_Price.fail())
						{
							system("COLOR 4f");

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
						for (int i = 0; i < lines_Cars_Price.size(); i++)
							if (i != line_number)
								write_file_Cars_Price << lines_Cars_Price[i] << std::endl;

						// Close our access to the file since we are done working with it
						write_file_Cars_Price.close();

						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been deleted";

						FontTextColor.fontTextColor(10);
						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");
						goto CarData;
					}

					// View Cars Color
					else if (CarChoice == 5)
					{
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [View Cars Color]");

						TitleText.titleText("                         View Cars Color                        ");

						ViewCarData.viewCarColor();

						FontTextColor.fontTextColor(9);
						std::cout << std::endl;
						std::cout << "   All Cars Color Data Displayed!";
						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");
						goto CarData;
					}

					// Add Cars Color
					else if (CarChoice == 6) {
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Add Cars Color]");

						TitleText.titleText("                          Add Car Colors                        ");

						Choice.choiceBack("ESC", "Back");

						std::string addcolor;
						FontTextColor.fontTextColor(9);
						std::cout << "\n   Enter the Color: ";
						FontTextColor.fontTextColor(11);

						std::string addcolorHider;
						char c_Color;

						do {
							c_Color = _getch();
							switch (c_Color) {
							case 0:
								_getch();
								break;
							case 13:
								std::cout << std::endl;
								break;
							case 27:
								system("CLS");
								goto CarData;
							case 8:
								if (addcolorHider.length() > 0) {
									addcolorHider.erase(addcolorHider.end() - 1);
									std::cout << c_Color << ' ' << c_Color;
								}
								break;
							default:
								addcolorHider += c_Color;
								std::cout << c_Color;
								break;
							}
						} while (c_Color != 13);

						if (addcolorHider.length() == 0) {
							system("CLS");
							system("a 4f");
							std::cout << "\n   Please enter the name of the car!" << std::endl;
							std::cout << std::endl;
							std::cout << "   ";
							system("PAUSE");
							goto AddCarsNamePrice;
						}

						else {
							addcolor = addcolorHider;
						}

						FontTextColor.fontTextColor(1);
						std::ofstream Cars_Color("Text Files/Cars_Color.txt", std::ios::app);
						Cars_Color << addcolor << std::endl;
						std::cout << "\n   Car Color Added!" << std::endl;
						std::cout << "   ";
						goto CarData;
					}

					// Edit Cars Color
					else if (CarChoice == 7) {
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Edit Cars Color]");

						TitleText.titleText("                          Edit Car Color                        ");

						ViewCarData.viewCarColor();

						Choice.choiceBack("0", "Back");

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Type the number of line to edit";

						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;
						std::string strColor;

						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";
						FontTextColor.fontTextColor(11);

						std::cin >> line_number;

						if (line_number == 0) {
							std::cin.clear();
							std::cin.ignore(22, '\n');
							system("CLS");

							goto CarData;
						}

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Color.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("COLOR 4f");
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
							system("COLOR 4f");

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

						// Add COLOR to text file

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Enter the Color: ";
						FontTextColor.fontTextColor(11);
						std::cin >> strColor;
						FontTextColor.fontTextColor(1);

						std::ofstream addcolor("Text Files/Cars_Color.txt", std::ios::app);
						addcolor << std::endl << strColor;

						std::cout << std::endl;
						std::cout << "   Line " << line_number + 1 << " has been editted!";
						std::cout << std::endl;
						std::cout << "   ";

						system("PAUSE");
						goto CarData;
					}

					// Delete Cars Color
					else if (CarChoice == 8) {
					DeleteCarsColor:
						// Loading screen
						system("CLS");
						system("COLOR 0F");
						char a = 219;
						Coordinate.gotoxy(30, 10);
						std::cout << "[Loading]" << std::endl;
						Coordinate.gotoxy(25, 12);
						for (int r = 1; r <= 20; r++)
						{
							for (int q = 0; q <= 10000000; q++);
							std::cout << a;
						}
						std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

						// system title
						system("TITLE Car Dealership Management Program [Delete Cars Color]");

						TitleText.titleText("                         Delete Car Color                       ");

						ViewCarData.viewCarColor();
					
						Choice.choiceBack("0", "Back");

						std::cout << std::endl;
						FontTextColor.fontTextColor(9);
						std::cout << "   Type the number of line to delete";

						// deletion per line

						// variables for storing the filename of the file and the line number to 
						// delete in the file  
						int line_number;


						// Prompt the user to enter the line number to delete in the file, store it 
						// into line_number

						std::cout << std::endl;
						std::cout << "   Line: ";
						FontTextColor.fontTextColor(11);
					 
						std::cin >> line_number;

						if (line_number == 0) {
							std::cin.clear();
							std::cin.ignore(22, '\n');
							system("CLS");

							goto CarData;
						}

						// fstream object will be used to read all of the existing lines in the file
						std::fstream read_file;

						// Open the file with the provided filename
						read_file.open("Text Files/Cars_Color.txt");

						// If file failed to open, exit with an error message and error exit status
						if (read_file.fail())
						{
							system("COLOR 4f");
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
							system("COLOR 4f");

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

						system("PAUSE");
						goto CarData;
					}

					// Back
					else if (CarChoice == 9) {
						system("CLS");
						goto AdminMenu;
					}

					else {
						// system title
						system("TITLE Car Dealership Management Program [Error Cars Data]");
					
						system("CLS");
						system("COLOR 4f");
						std::cout << "\n   Wrong input entered!" << std::endl;
						std::cin.clear();
						std::cin.ignore(22, '\n');
						std::cout << std::endl;
						std::cout << "   ";
						system("PAUSE");
						goto CarData;
					}
				}

				// Order Logs
				else if (adminchoice == 3) {
					// Loading screen
					system("CLS");
					system("COLOR 0F");
					char a = 219;
					Coordinate.gotoxy(30, 10);
					std::cout << "[Loading]" << std::endl;
					Coordinate.gotoxy(25, 12);
					for (int r = 1; r <= 20; r++)
					{
						for (int q = 0; q <= 10000000; q++);
						std::cout << a;
					}
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
					
					// system title
					system("TITLE Car Dealership Management Program [Order Logs]");

					TitleText.titleText("                           Order Logs                           ");

					OrderLogs.orderLogs();

					FontTextColor.fontTextColor(9);
					std::cout << "\n   All Order Logs Data!";
					std::cout << std::endl;
					std::cout << "   ";
					system("PAUSE");
					goto AdminMenu;
				}

				// Login Logs
				else if (adminchoice == 4) {
					// Loading screen
					system("CLS");
					system("COLOR 0F");
					char a = 219;
					Coordinate.gotoxy(30, 10);
					std::cout << "[Loading]" << std::endl;
					Coordinate.gotoxy(25, 12);
					for (int r = 1; r <= 20; r++)
					{
						for (int q = 0; q <= 10000000; q++);
						std::cout << a;
					}
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

					// system title
					system("TITLE Car Dealership Management Program [Login Logs]");

					TitleText.titleText("                           Login Logs                           ");

					LoginLogs.loginLogs();

					FontTextColor.fontTextColor(9);
					std::cout << "\n   All Login Logs Data!";
					std::cout << std::endl;
					std::cout << "   ";
					system("PAUSE");
					goto AdminMenu;
				}

				// Order Cars
				else if (adminchoice == 5) {
					// Loading screen
					system("CLS");
					system("COLOR 0F");
					char a = 219;
					Coordinate.gotoxy(30, 10);
					std::cout << "[Loading]" << std::endl;
					Coordinate.gotoxy(25, 12);
					for (int r = 1; r <= 20; r++)
					{
						for (int q = 0; q <= 10000000; q++);
						std::cout << a;
					}
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

					AccessLevel = 1;
					
					// system title
					system("TITLE Car Dealership Management Program [Admin Order Cars]");

					goto OrderCars;
				}

				// About Us
				else if (adminchoice == 6) {
					// Loading screen
					system("CLS");
					system("COLOR 09");
					char a = 219;
					Coordinate.gotoxy(30, 10);
					std::cout << "[Loading]" << std::endl;
					Coordinate.gotoxy(25, 12);
					for (int r = 1; r <= 20; r++)
					{
						for (int q = 0; q <= 10000000; q++);
						std::cout << a;
					}
					std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

					// system title
					system("TITLE Car Dealership Management Program [About Us]");

					AboutUs.AboutUs();
					std::cout << "   ";
					system("PAUSE");

					goto AdminMenu;
				}

				// Logout
				else if (adminchoice == 7) {
					system("COLOR A");
					system("CLS");
					goto LoginForm;
				}

				// Wrong input
				else {
					// system title
					system("TITLE Car Dealership Management Program [Error Admin Menu]");
				
					system("CLS");
					system("COLOR 4f");
					std::cout << "\n   Wrong input entered!" << std::endl;
					std::cin.clear();
					std::cin.ignore(22, '\n');
					std::cout << std::endl;
					std::cout << "   ";
					system("PAUSE");
					goto AdminMenu;
				}
			}

			// Wrong login
			else
			{
				// system title
				system("TITLE Car Dealership Management Program [Error Wrong login]");

				system("CLS");
				system("COLOR 4f");
				std::cout << "\n   Wrong input entered!" << std::endl;
				std::cin.clear();
				std::cin.ignore(22, '\n');
				std::cout << std::endl;
				std::cout << "   ";
				system("PAUSE");
				goto AdminLogin;
			}
		}

	// Employee 
	else if (choice == 2) {
	Employeelogin:
		// Loading screen
		system("CLS");
		system("COLOR 09");
		char a = 219;
		Coordinate.gotoxy(30, 10);
		std::cout << "[Loading]" << std::endl;
		Coordinate.gotoxy(25, 12);
		for (int r = 1; r <= 20; r++)
		{
			for (int q = 0; q <= 10000000; q++);
			std::cout << a;
		}
		std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

		system("COLOR A");
		system("CLS");

		int Employeelogin = 0;
		std::string user, pass, u, p;

		// system title
		system("TITLE Car Dealership Management Program [Employee Login]");

		TitleText.titleText("                          Employee Login                        ");

		Choice.choiceBack("ESC", "Back");

		FontTextColor.fontTextColor(1);
		std::cout << "\n   Please enter your login details";

		FontTextColor.fontTextColor(9);
		std::cout << "\n   Username: ";
		FontTextColor.fontTextColor(11);

		std::string userHider;
		char c_user;

		do {
			c_user = _getch();
			switch (c_user) {
			case 0:
				_getch();
				break;
			case 13:
				std::cout << std::endl;
				break;
			case 27:
				system("CLS");
				goto LoginForm;
			case 8:
				if (userHider.length() > 0) {
					userHider.erase(userHider.end() - 1);
					std::cout << c_user << ' ' << c_user;
				}
				break;
			default:
				userHider += c_user;
				std::cout << c_user;
				break;
			}
		} while (c_user != 13);

		if (userHider.length() == 0) {
			system("CLS");
			system("COLOR 4f");
			std::cout << "\n   Please enter Username!" << std::endl;
			std::cout << std::endl;
			std::cout << "   ";
			system("PAUSE");
			goto Employeelogin;
		}

		else {
			user = userHider;
		}

		FontTextColor.fontTextColor(9);
		std::cout << "   Password: ";
		FontTextColor.fontTextColor(11);

		int i = 0;

		std::string passHider;
		char c;

		do {
			c = _getch();
			switch (c) {
			case 0:
				_getch();
				break;
			case 13:
				std::cout << std::endl;
				break;
			case 27:
				system("CLS");
				goto LoginForm;
			case 8:
				if (passHider.length() > 0) {
					passHider.erase(passHider.end() - 1);
					std::cout << c << ' ' << c;
				}
				break;
			default:
				passHider += c;
				std::cout << '*';
				break;
			}
		} while (c != 13);

		if (passHider.length() == 0) {
			system("CLS");
			system("COLOR 4f");
			std::cout << "\n   Please enter Password!" << std::endl;
			std::cout << std::endl;
			std::cout << "   ";
			system("PAUSE");
			goto Employeelogin;
		}

		else {
			pass = passHider;
		}

		// Loading XD
		FontTextColor.fontTextColor(9);
		std::cout << "\n   Verifying you login details please wait";
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
				std::cout << "\n   Employee login successful!";
				employeeLogin = user;
				Sleep(2000);
				system("CLS");
			}

			else if (u != user)
			{
				std::cout << "\n   Invalid Username please try again";
				Sleep(2000);
				goto Employeelogin;
			}

			else if (p != pass)
			{
				std::cout << "\n   Invalid Password please try again";
				Sleep(2000);
				goto Employeelogin;
			}

			else {
				Employeelogin = 0;
				system("CLS");
				system("COLOR 4f");
				std::cout << "\n   Wrong Username or Password!"
					<< "\n   Try to login again" << std::endl;
				Sleep(2000);
				goto Employeelogin;
			}
		}
		input.close();

		if (Employeelogin == 1)
		{

			// Login Logs [INPUT]
			auto t = std::time(nullptr);
			auto tm = *std::localtime(&t);

			std::ostringstream oss;
			oss << std::put_time(&tm, "%b/%d/%Y\t%H:%M:%S");
			auto str = oss.str();

			std::ofstream Login_Logs("Text Files/Login_Logs.txt", std::ios::app);
			Login_Logs << std::endl << user << "\t" << "Employee" << "\t" << str;
			Login_Logs.close();

		EmployeeMenu:

			// system title
			system("TITLE Car Dealership Management Program [Employee Menu]");

			UserTitleText.userTitleText("                         Employee Menu                        ", user, "                             [", "]                             ");

			std::cout << std::endl;
			Choice.choiceBlue("1", "Order Logs");
			Choice.choiceBlue("2", "Order Cars\n");

			Choice.choiceGreen("3", "About Us\n");

			Choice.choiceRed("4", "Logout\n");

			FontTextColor.fontTextColor(9);
			std::cout << "   Please insert your choice: ";
			FontTextColor.fontTextColor(11);
			std::cin >> employeechoice;
			std::cout << std::endl;
			std::cin.ignore();

			// Order Logs
			if (employeechoice == 1) {
				// Loading screen
				system("CLS");
				system("COLOR 09");
				char a = 219;
				Coordinate.gotoxy(30, 10);
				std::cout << "[Loading]" << std::endl;
				Coordinate.gotoxy(25, 12);
				for (int r = 1; r <= 20; r++)
				{
					for (int q = 0; q <= 10000000; q++);
					std::cout << a;
				}
				std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

				// system title
				system("TITLE Car Dealership Management Program [Order Logs]");

				TitleText.titleText("                           Order Logs                           ");

				OrderLogs.orderLogs();

				FontTextColor.fontTextColor(9);
				std::cout << "\n   All Order Logs Data!";
				std::cout << std::endl;
				std::cout << "   ";
				system("PAUSE");
				system("CLS");

				goto EmployeeMenu;
			}

			// Order Cars
			else if (employeechoice == 2) {
				// Loading screen
				system("CLS");
				system("COLOR 09");
				char a = 219;
				Coordinate.gotoxy(30, 10);
				std::cout << "[Loading]" << std::endl;
				Coordinate.gotoxy(25, 12);
				for (int r = 1; r <= 20; r++)
				{
					for (int q = 0; q <= 10000000; q++);
					std::cout << a;
				}
				std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

				AccessLevel = 2;

				// system title
				system("TITLE Car Dealership Management Program [Employee Order Cars]");

				goto OrderCars;
			}

			// About Us
			else if (employeechoice == 3) {
				// Loading screen
				system("CLS");
				system("COLOR 09");
				char a = 219;
				Coordinate.gotoxy(30, 10);
				std::cout << "[Loading]" << std::endl;
				Coordinate.gotoxy(25, 12);
				for (int r = 1; r <= 20; r++)
				{
					for (int q = 0; q <= 10000000; q++);
					std::cout << a;
				}
				std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

				// system title
				system("TITLE Car Dealership Management Program [About Us]");

				AboutUs.AboutUs();
				std::cout << "   ";
				system("PAUSE");

				goto EmployeeMenu;
			}

			// Logout
			else if (employeechoice == 4) {
				system("CLS");
				system("COLOR A");
				goto LoginForm;
			}

			// Wrong input
			else {
				// system title
				system("TITLE Car Dealership Management Program [Error Wrong Input]");

				system("CLS");
				system("COLOR 4f");
				std::cout << "\n   Wrong input entered!" << std::endl;
				std::cin.clear();
				std::cin.ignore(22, '\n');
				std::cout << std::endl;
				std::cout << "   ";
				system("PAUSE");
				goto LoginForm;
			}
		}

		// Wrong login
		else
		{
			// system title
			system("TITLE Car Dealership Management Program [Error Wrong Login]");

			system("CLS");
			system("COLOR 4f");
			std::cout << "\n   LOGIN ERROR!!!"
				<< "\n   Please check your Username and Password" << std::endl;
			Sleep(3000);
			std::cin.ignore();
			goto LoginForm;
		}
	}

	// Guest
	else if (choice == 3) {
		// Loading screen
		system("CLS");
		system("COLOR 0A");
		char a = 219;
		Coordinate.gotoxy(30, 10);
		std::cout << "[Loading]" << std::endl;
		Coordinate.gotoxy(25, 12);
		for (int r = 1; r <= 20; r++)
		{
			for (int q = 0; q <= 10000000; q++);
			std::cout << a;
		}
		std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;


		// Login Logs [INPUT]
		auto t = std::time(nullptr);
		auto tm = *std::localtime(&t);

		std::ostringstream oss;
		oss << std::put_time(&tm, "%b/%d/%Y\t%H:%M:%S");
		auto str = oss.str();

		std::ofstream Login_Logs("Text Files/Login_Logs.txt", std::ios::app);
		Login_Logs << std::endl << "Guest" << "\t" << "Guest" << "\t" << str;
		Login_Logs.close();

		AccessLevel = 3;
		
		// system title
		system("TITLE Car Dealership Management Program [Guest Order Cars]");

		goto OrderCars;
	}

	// About Us
	else if (choice == 4) {
		// Loading screen
		system("CLS");
		system("COLOR 09");
		char a = 219;
		Coordinate.gotoxy(30, 10);
		std::cout << "[Loading]" << std::endl;
		Coordinate.gotoxy(25, 12);
		for (int r = 1; r <= 20; r++)
		{
			for (int q = 0; q <= 10000000; q++);
			std::cout << a;
		}
		std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

		// system title
		system("TITLE Car Dealership Management Program [About Us]");

		AboutUs.AboutUs();
		std::cout << "   ";
		system("PAUSE");

		goto LoginForm;
	}

	// Exit
	else if (choice == 5) {
		// system title
		system("TITLE Car Dealership Management Program [Exiting. Thank you for using my program <3]");

		system("CLS");
		system("COLOR 01");
		FontTextColor.fontTextColor(9);
		std::cout << "\n   Thanks for using this program\n";
		std::cout << "\n   This program is created by ";
		FontTextColor.fontTextColor(11);
		std::cout << "@PP-Namias\n" << std::endl;
		FontTextColor.fontTextColor(10);
		
		std::cout << "   ";
		system("PAUSE");
		return 0;
	}

	// Wrong input
	else {
		// system title
		system("TITLE Car Dealership Management Program [Error Wrong Input]");
	
		system("CLS");
		system("COLOR 4f");
		std::cout << "\n   Wrong input entered!" << std::endl;
		std::cin.clear();
		std::cin.ignore(22, '\n');
		Sleep(2000);

		goto LoginForm;
	}

OrderCars:
	// Text file to array dynamically XD [Color]
	std::string toyota_car_color[15];
	int number_of_color = 0;
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

	system("COLOR 0A");

	if (AccessLevel == 1) {
		UserTitleText.userTitleText("                        Admin Order Cars                      ", "Namias", "                             [", "]                           ");
	}
	
	else if (AccessLevel == 2) {
		UserTitleText.userTitleText("                      Employee Order Cars                     ", employeeLogin, "                             [", "]                             ");
	}
	
	else if (AccessLevel == 3) {
		UserTitleText.userTitleText("                       Guest Order Cars                       ", "Guest", "                             [", "]                            ");
	}
	
	else {
		UserTitleText.userTitleText("                     \"Unknown Order Cars\"                     ", "Unknown", "                            [", "]                           ");
	}

	Choice.choiceBack("0", "Back");

	// Callout car names/prices [formated]
	FontTextColor.fontTextColor(9);
	Display_Menu.display_menu("\n  Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));

	FontTextColor.fontTextColor(9);
	std::cout << "\n  Input Number According to the type of Car: ";

	FontTextColor.fontTextColor(11);

	std::cin >> Cars;

	if (Cars == 0) {
		std::cin.clear();
		std::cin.ignore(22, '\n');
		system("CLS");

		goto LoginForm;
	}

	else if (Cars < 1 || Cars > sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
		system("CLS");
		system("COLOR 4f");
		std::cout << "\n  Invalid input please try ordering again." << std::endl;
		std::cin.clear();
		std::cin.ignore(22, '\n');

		Sleep(2000);
		goto OrderCars;
	}

	else if (Cars >= 1 || Cars <= sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
		// Order confirmation
		FontTextColor.fontTextColor(9);
		std::cout << "\n  You selected ";
		FontTextColor.fontTextColor(11);
		std::cout << toyota_car_names[Cars - 1];
		FontTextColor.fontTextColor(9);
		std::cout << " for ";
		FontTextColor.fontTextColor(11);
		std::cout << toyota_car_prices[Cars - 1];
		std::cout << " pesos";
		std::cout << std::endl;

		FontTextColor.fontTextColor(9);
		std::cout << "  To be confirmed type Y Yes, Type N if No: ";

		FontTextColor.fontTextColor(11);
		std::cin >> order_confirmation;

		if (order_confirmation == 'y' || order_confirmation == 'Y') {

			// Select Color
		SelectColor:
			system("CLS");
			system("COLOR 0A");

			FontTextColor.fontTextColor(9);
			std::cout << std::endl;
			std::cout << "   What Color of ";
			FontTextColor.fontTextColor(11);
			std::cout << toyota_car_names[Cars - 1];
			FontTextColor.fontTextColor(9);
			std::cout << " do you want?";
			std::cout << std::endl;

			// Callout all Color [Fomated]
			Display_Color.display_color(toyota_car_color, sizeof(toyota_car_color) / sizeof(toyota_car_color[0]));

			FontTextColor.fontTextColor(9);
			std::cout << "\n   Please insert the number of Color: ";

			FontTextColor.fontTextColor(11);
			std::cin >> Color;

			// Verification
			if (Color < 1 || Color > sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
				system("CLS");
				system("COLOR 4f");
				std::cout << "\n   Please try again if you entered the incorrect information.";
				std::cout << std::endl;
				std::cout << "   ";
				std::cin.clear();
				std::cin.ignore(22, '\n'); 
				system("PAUSE");
				goto SelectColor;
			}

			else if (Color >= 1 || Color <= sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {

				Value = toyota_car_prices[Cars - 1];


				// Cashier 
				system("CLS");
				system("COLOR 0E");

				// Your order summary
				std::cout << std::endl;
				FontTextColor.fontTextColor(9);
				std::cout << "  You selected ";
				FontTextColor.fontTextColor(15);
				std::cout << "[";
				FontTextColor.fontTextColor(11);
				std::cout << toyota_car_color[Color - 1];
				FontTextColor.fontTextColor(15);
				std::cout << "] ";
				FontTextColor.fontTextColor(11);
				std::cout << toyota_car_names[Cars - 1];
				FontTextColor.fontTextColor(9);
				std::cout << " for ";
				FontTextColor.fontTextColor(11);
				std::cout << toyota_car_prices[Cars - 1];
				FontTextColor.fontTextColor(11);
				std::cout << " pesos";
				std::cout << std::endl;;

				// Total of the order
				std::cout << std::endl;
				FontTextColor.fontTextColor(9);
				std::cout << "  Total Amount: ";
				FontTextColor.fontTextColor(11);
				std::cout << Value;
				std::cout << std::endl;

				FontTextColor.fontTextColor(9);
				std::cout << std::endl;
				std::cout << "  Enter The Amount of Payment: ";

				FontTextColor.fontTextColor(11);
				std::cin >> Payment;

				Change = Payment - Value;

				if (Change >= 1) {
					std::cout << "\n  Change: " << Change << "\n" << std::endl;

					std::cout << std::endl;
					std::cout << "  ";
					system("PAUSE");
				}

				else if (Change == 0) {
					std::cout << "\n  You paid the exact amount of money needed.\n" << std::endl;

					std::cout << std::endl;
					std::cout << "  ";
					system("PAUSE");
				}

				else if (Change <= -1) {
					system("CLS");
					system("COLOR 4f");
					std::cout << "\n  You don't have enough money.";
					std::cin.clear();
					std::cin.ignore(22, '\n');

					Sleep(2000);
					goto OrderCars;
				}

				else {
					system("CLS");
					system("COLOR 4f");
					std::cout << "\n  Invalid input please try ordering again." << std::endl;
					std::cin.clear();
					std::cin.ignore(22, '\n');

					Sleep(2000);
					goto OrderCars;
				}


				// Order Logs [INPUT]
				auto t = std::time(nullptr);
				auto tm = *std::localtime(&t);

				std::ostringstream oss;
				oss << std::put_time(&tm, "%b/%d/%Y\t%H:%M:%S");
				auto str = oss.str();

				std::ofstream Order_Logs("Text Files/Order_Logs.txt", std::ios::app);
				Order_Logs << std::endl << str << "\t" << toyota_car_names[Cars - 1] << '\t' << toyota_car_color[Color - 1] << '\t' << toyota_car_prices[Cars - 1];
				Order_Logs.close();

				Reciept.Reciept(str, toyota_car_names[Cars - 1], toyota_car_color[Color - 1], toyota_car_prices[Cars - 1], Payment, Change);

				// Order again?
				FontTextColor.fontTextColor(9);
				std::cout << "\n  Do you want to order again? Type Y if yes and type N if no: ";
				FontTextColor.fontTextColor(11);
				std::cin >> order_more;

				if (order_more == 'n' || order_more == 'N') {

					std::cout << "  Thank you for your purchase! <3";

					Sleep(2000);
					goto LoginForm;
				}

				else if (order_more == 'y' || order_more == 'Y') {
					std::cout << "  Thank you for your purchase! <3";

					Sleep(2000);
					goto OrderCars;
				}

				else {
					system("CLS");
					system("COLOR 4f");
					std::cout << "\n  Invalid input! Type only Y or N" << std::endl;

					std::cout << "\n   Press Enter to Continue!";
					std::cin.get();

					std::cout << std::endl;
					std::cout << "   ";
					system("PAUSE");					goto OrderCars;
				}
			}

			else {
				system("CLS");
				system("COLOR 4f");
				std::cout << "\n  Invalid input please try again." << std::endl;
				std::cin.clear();
				std::cin.ignore(22, '\n');
				goto OrderCars;
			}
		}

		else if (order_confirmation == 'n' || order_confirmation == 'N') {
			std::cout << "\n  You Canceled the order." << std::endl;
			Sleep(2000);

			goto OrderCars;
		}

		else {
			system("CLS");
			system("COLOR 4f");
			std::cout << "\n  Invalid input! Type only Y or N" << std::endl;
			std::cin.clear();
			std::cin.ignore(22, '\n');
			
			Sleep(2000);

			goto OrderCars;
		}
	}

	else {
		system("CLS");
		system("COLOR 4f");
		std::cout << "\n  Invalid input please try ordering again.";
		std::cin.clear();
		std::cin.ignore(22, '\n');

		std::cout << "   ";
		system("PAUSE");

		goto OrderCars;
	}
}
