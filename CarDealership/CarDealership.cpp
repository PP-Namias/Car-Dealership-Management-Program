/*
 * Programmer: Namias, Jhon Keneth Ryan B.
 *
 *          Title: Car Dealership Management Program
 * Course/Section: CS1A North
 *           Date: November 13, 2022
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

class DetailClass {
public:
	void AboutUs() {
		system("cls");
		system("color 09");

		// Text color settings
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
		std::cout << "November 26, 2022" << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << "   Professor: ";
		SetConsoleTextAttribute(aboutUsColor, 11);
		std::cout << "Alban Ryan Rei" << std::endl;
		std::cout << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 9);
		std::cout << "   Info:" << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 15);
		std::cout << "              This project [Car Dealership Management Program], " << std::endl;
		std::cout << "     which is a topic of the [Fundamentals of Programming] course, " << std::endl;
		std::cout << "     involves creating a car dealership management entirely in C++." << std::endl;
		std::cout << "     We are pleased to announce the release of a convenient console" << std::endl;
		std::cout << "     application for performing management system tasks like adding" << std::endl;
		std::cout << "     new car(s) to a data set, modifying and deleting car(s) from a" << std::endl;
		std::cout << "     data set, exporting order logs, etc." << std::endl;
		std::cout << "     Involves creating a car dealership management entirely in C++." << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		SetConsoleTextAttribute(aboutUsColor, 10);
	}

	void TitleScreen() {
		// Text color settings
		HANDLE TitleScreenColor = GetStdHandle(STD_OUTPUT_HANDLE);
		
		system("color a");
		system("cls");
		
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
		system("pause");

	}
};

class HeaderClass {
public:
	void titleText(std::string TitleText) {
		// Text color settings
		HANDLE titleTextColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("color a");
		system("cls");

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
		std::cout << std::endl;
	}

	void userTitleText(std::string UserTitleText, std::string UserTitle, std::string UserTitleSeparatorLeft, std::string UserTitleSeparatorRight) {
		// Text color settings
		HANDLE userTitleTextColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("color a");
		system("cls");

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
		std::cout << std::endl;
	}

	void choiceBlue(std::string choiceNumber, std::string choice) {
		// Text color settings
		HANDLE ChoiceBlue = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(ChoiceBlue, 10);
		std::cout << "    [";
		SetConsoleTextAttribute(ChoiceBlue, 15);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(ChoiceBlue, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(ChoiceBlue, 1);
		std::cout << choice << std::endl;
	}

	void choiceGreen(std::string choiceNumber, std::string choice) {
		// Text color settings
		HANDLE ChoiceGreen = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(ChoiceGreen, 10);
		std::cout << "    [";
		SetConsoleTextAttribute(ChoiceGreen, 15);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(ChoiceGreen, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(ChoiceGreen, 2);
		std::cout << choice << std::endl;
	}

	void choiceRed(std::string choiceNumber, std::string choice) {
		// Text color settings
		HANDLE ChoiceRed = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(ChoiceRed, 10);
		std::cout << "    [";
		SetConsoleTextAttribute(ChoiceRed, 4);
		std::cout << choiceNumber;
		SetConsoleTextAttribute(ChoiceRed, 10);
		std::cout << "] ";
		SetConsoleTextAttribute(ChoiceRed, 4);
		std::cout << choice << std::endl;
	}
};

class BackEnd {
public:
	void display_menu(const std::string& manufacturer, const std::string names[], const int prices[], const size_t numCars) {
		std::cout << manufacturer << " Cars:" << std::endl;

		// Text color settings
		HANDLE Display_Menu_Color = GetStdHandle(STD_OUTPUT_HANDLE);

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
			SetConsoleTextAttribute(Display_Menu_Color, 11);
			std::cout << std::endl;
		}
	}

	void display_color(const std::string color_index[], const size_t numColors) {

		// Text color settings
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
			SetConsoleTextAttribute(Display_Color_Color, 10);
			std::cout << std::endl;
		}
	}

	void Reciept(std::string DateTime, std::string CarNames, std::string CarColors, int Price, int Payment, int Change) {
		// Text color settings
		HANDLE RecieptColor = GetStdHandle(STD_OUTPUT_HANDLE);

		system("color a");
		system("cls");

		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\n\t+----------------------------------------------------+" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "            ___ ___ ___ ___ ___ ___ _____           ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "           | _ \\ __/ __| __|_ _| _ \\_   _|          ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "           |   / _| (__| _| | ||  _/ | |            ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << "           |_|_\\___\\___|___|___|_|   |_|            ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|                                                    |" << std::endl;
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Store: ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << "Car Dealership Management (CDM)             ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
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
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Address: ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << "936 Llano rd. Caloocan City               ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|                                                    |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t| ";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << DateTime;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "                             |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|                                                    |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " ================================================== ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "     Menu	   Price      Quant.  Total Price    ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " ================================================== ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
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
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " -------------------------------------------------- ";
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "|" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Total Price                          ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Price;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "     |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|                                                    |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Cash                                 ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Payment;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "     |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|";
		SetConsoleTextAttribute(RecieptColor, 9);
		std::cout << " Change                               ";
		SetConsoleTextAttribute(RecieptColor, 11);
		std::cout << Change;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t     |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t|                                                    |" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);
		std::cout << "\t+----------------------------------------------------+" << std::endl;
		SetConsoleTextAttribute(RecieptColor, 7);


	}

	void orderLogs() {
		// Text color settings
		HANDLE OrderLogsColor = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream Order_Logs("Text Files/Order_Logs.txt");

		std::string date;
		std::string time;
		std::string car_name;
		std::string car_color;
		int car_price;
		std::string car_payment;
		std::string car_change;

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



			// std::cout << car_price;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "\t|";
			std::cout << std::endl;
			SetConsoleTextAttribute(OrderLogsColor, 7);
			std::cout << "|--------------------------------------------------------------------|";
			std::cout << std::endl;
		}
		SetConsoleTextAttribute(OrderLogsColor, 9);

	}

	void viewEmployeeData() {
		// Text color settings
		HANDLE ViewEmployeeData = GetStdHandle(STD_OUTPUT_HANDLE);

		std::ifstream EmployeeFile("Text Files/Employee.txt");

		std::string name;
		std::string pass;

		SetConsoleTextAttribute(ViewEmployeeData, 7);
		std::cout << "\n======================================================================" << std::endl;
		SetConsoleTextAttribute(ViewEmployeeData, 7);
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
		SetConsoleTextAttribute(ViewEmployeeData, 7);
		std::cout << "\n======================================================================" << std::endl;

		SetConsoleTextAttribute(ViewEmployeeData, 1);

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
			SetConsoleTextAttribute(ViewEmployeeData, 7);
			std::cout << "|--------------------------------------------------------------------|";
			std::cout << std::endl;

		}


	}
	
	void viewCarNamePrice() {
		// Text color settings
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
		// Text color settings
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


// Title screen call-out once [Flagging]
bool flag = false;

int main()
{
	DetailClass AboutUs;
	DetailClass TitleScreen;

	HeaderClass ChoiceBlue;
	HeaderClass ChoiceGreen;
	HeaderClass ChoiceRed;

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
	system("cls");
	system("color 0A");
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


	if (flag == false) {
		TitleScreen.TitleScreen();
	}
	
	flag = true;

	std::string employeeLogin;

	char order_more = 'n',
		order_confirmation;

	int Payment,
		Value,
		Change,
		Cars,
		Color,
		AccessLevel = 0;

	// main choices
	int choice;
	int adminchoice;
	int employeechoice;

	// sub choices
	int employeeData;
	int CarChoice;

	// Login Form
LoginForm:

	TitleText.titleText("                    Welcome to the Login Menu                   ");

	ChoiceBlue.choiceBlue("1", "Admin");
	ChoiceBlue.choiceBlue("2", "Employee");
	ChoiceBlue.choiceBlue("3", "Guest\n");

	ChoiceGreen.choiceGreen("4", "About Us\n");

	ChoiceRed.choiceRed("5", "Exit\n");

	FontTextColor.fontTextColor(9);
	std::cout << "   Please insert your choice: ";
	FontTextColor.fontTextColor(11);
	std::cin >> choice;
	std::cin.ignore();

	// Admin
	if (choice == 1) {
	AdminLogin:

		// Loading screen
		system("cls");
		system("color 0F");
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

		int adminlogin = 0;
		std::string user, pass, u, p;



		TitleText.titleText("                           Admin Login                          ");


		FontTextColor.fontTextColor(10);
		std::cout << "\n   Press ESC button to go back" << std::endl;

		FontTextColor.fontTextColor(1);
		std::cout << "\n   Please enter the following details" << std::endl;

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
				system("cls");
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

		user = userHider;

		//std::cin >> user;
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
				system("cls");
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

		pass = passHider;

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
					<< "\n   Try to login again\n" << std::endl;
				Sleep(2000);
				goto AdminLogin;
			}
		}
		input.close();

		if (adminlogin == 1)
		{
			system("cls");

			// Loading screen
			system("cls");
			system("color 0F");
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


			// Login
		AdminMenu:

			UserTitleText.userTitleText("                           Admin Menu                         ", user, "                             [", "]                           ");


			ChoiceBlue.choiceBlue("1", "Employee Data");
			ChoiceBlue.choiceBlue("2", "Cars Data");
			ChoiceBlue.choiceBlue("3", "Order Logs");
			ChoiceBlue.choiceBlue("4", "Order Cars\n");

			ChoiceGreen.choiceGreen("5", "About Us\n");

			ChoiceRed.choiceRed("6", "Logout\n");

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
				system("cls");
				system("color 0F");
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

				TitleText.titleText("                          Employee Data                         ");

				ChoiceBlue.choiceBlue("1", "Add Employee Data");
				ChoiceBlue.choiceBlue("2", "View Employee Data");
				ChoiceBlue.choiceBlue("3", "Search Employee Data");
				ChoiceBlue.choiceBlue("4", "Edit Employee Data");
				ChoiceRed.choiceRed("5", "Delete Employee Data\n");

				ChoiceRed.choiceRed("6", "Back\n");

				FontTextColor.fontTextColor(9);
				std::cout << "   Please insert your choice: ";

				FontTextColor.fontTextColor(11);
				std::cin >> employeeData;
				std::cout << std::endl;
				std::cin.ignore();

				// Add Employee Data
				if (employeeData == 1) {


					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                         Add Employee Data                      ");

					FontTextColor.fontTextColor(10);
					std::cout << "\n   Press ESC button to go back" << std::endl;

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
							system("cls");
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
							system("cls");
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
					std::cout << "\n   Employee Data Added!" << std::endl;
					std::cout << "\n   ";
					system("pause");
					goto EmployeeData;
				}

				// View Employee Data
				else if (employeeData == 2) {
					system("cls");

					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                        View Employee Data                      ");

					ViewEmployeeData.viewEmployeeData();

					FontTextColor.fontTextColor(9);
					std::cout << std::endl;
					std::cout << "\n   All Employees Data Displayed!";
					std::cout << "\n   ";
					system("pause");
					goto EmployeeData;
				}

				// Search Employee Data
				else if (employeeData == 3) {
				SearchEmployeeData:

					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                      Search Employee Data                      ");

					int ch;

					std::cout << std::endl;
					FontTextColor.fontTextColor(10);
					std::cout << "    [";
					FontTextColor.fontTextColor(15);
					std::cout << "1";
					FontTextColor.fontTextColor(10);
					std::cout << "] ";
					FontTextColor.fontTextColor(1);
					std::cout << "Search your Password by Username";
					std::cout << std::endl;

					FontTextColor.fontTextColor(10);
					std::cout << "    [";
					FontTextColor.fontTextColor(15);
					std::cout << "2";
					FontTextColor.fontTextColor(10);
					std::cout << "] ";
					FontTextColor.fontTextColor(1);
					std::cout << "Search your Username by Password";
					std::cout << std::endl;

					FontTextColor.fontTextColor(10);
					std::cout << "    [";
					FontTextColor.fontTextColor(4);
					std::cout << "3";
					FontTextColor.fontTextColor(10);
					std::cout << "] ";
					FontTextColor.fontTextColor(4);
					std::cout << "Back";
					std::cout << std::endl;
					std::cout << std::endl;

					FontTextColor.fontTextColor(9);
					std::cout << "    Enter your choice: ";
					FontTextColor.fontTextColor(11);

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
							std::cout << "   Your password is |[\"" << sp << "\"]|";
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   ";

							system("pause");
							// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							goto SearchEmployeeData;
						}

						else
						{
							std::cout << std::endl;
							std::cout << "   Sorry, Your username is not found in our database";
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   Please kindly contact your system administrator for more details";
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   ";

							system("pause");
							goto SearchEmployeeData;
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
							std::cout << "   ";
							system("pause");
							goto SearchEmployeeData;

						}

						else
						{
							std::cout << std::endl;
							std::cout << "   Sorry, We cannot found your password in our database";
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   Please kindly contact your system administrator for more details";
							std::cout << std::endl;
							std::cout << std::endl;
							std::cout << "   ";
							system("pause");
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
						std::cout << "   Sorry, You entered wrong choice. Kindly try again";
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "   ";
						system("pause");
						std::cin.clear();
						std::cin.ignore(22, '\n');
						goto SearchEmployeeData;
					}
				}

				// Edit Employee Data
				else if (employeeData == 4) {
				EditEmployeeData:

					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                        Edit Employee Data                      ");

					ViewEmployeeData.viewEmployeeData();

					FontTextColor.fontTextColor(10);
					std::cout << std::endl;
					std::cout << "   Press ESC button to go back" << std::endl;
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

					line_number = std::stoi(userHider);

					// std::cin >> line_number;

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
					system("pause");

					goto EmployeeData;
				}

				// Delete Employee Data
				else if (employeeData == 5) {
				DeleteEmployee:

					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                       Delete Employee Data                     ");

					ViewEmployeeData.viewEmployeeData();

					FontTextColor.fontTextColor(10);
					std::cout << std::endl;
					std::cout << "   Press ESC button to go back" << std::endl;
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
							system("cls");
							std::cin.clear();
							std::cin.ignore(22, '\n');
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


					line_number = std::stoi(userHider);

					// std::cin >> line_number;

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
					std::cout << "   Line " << line_number + 1 << " has been deleted";

					Sleep(3000);
					goto EmployeeData;

				}

				// Back
				else if (employeeData == 6) {
					system("cls");
					goto AdminMenu;
				}

				else {
					system("cls");
					system("color 4f");
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
				system("cls");
				system("color 0F");
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

				TitleText.titleText("                            Cars Data                           ");


				ChoiceBlue.choiceBlue("1", "View Cars Name & Price");
				ChoiceBlue.choiceBlue("2", "Add Cars Name & Price");
				ChoiceBlue.choiceBlue("3", "Edit Cars Name & Price");
				ChoiceRed.choiceRed("4", "Delete Cars Name & Price\n");

				ChoiceBlue.choiceBlue("5", "View Cars Color");
				ChoiceBlue.choiceBlue("6", "Add Cars Color");
				ChoiceBlue.choiceBlue("7", "Edit Cars Color");
				ChoiceRed.choiceRed("8", "Delete Cars Color\n");

				ChoiceRed.choiceRed("9", "Back\n");


				FontTextColor.fontTextColor(9);
				std::cout << "   Please enter your input: ";

				FontTextColor.fontTextColor(11);
				std::cin >> CarChoice;

				// View Cars Name & Price
				if (CarChoice == 1) {

					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                      View Cars Name & Price                    ");

					ViewCarData.viewCarNamePrice();

					FontTextColor.fontTextColor(9);
					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					goto CarData;
				}

				// Add Cars Name & Price
				else if (CarChoice == 2) {

					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                      Add Cars Name & Price                     ");

					FontTextColor.fontTextColor(10);
					std::cout << "   Press ESC button to go back";
					std::cout << std::endl;

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
							system("cls");
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
							system("cls");
							std::cin.clear();
							std::cin.ignore(22, '\n');
							goto EmployeeData;
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
					Cars_Name << std::endl << addname;
					Cars_Name.close();

					std::ofstream Cars_Price("Text Files/Cars_Price.txt", std::ios::app);
					Cars_Price << std::endl << addprice;
					Cars_Price.close();

					std::cout << "\n   Car Name & Price Added!" << std::endl;

					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					goto CarData;
				}

				// Edit Cars Name & Price
				else if (CarChoice == 3) {
					TitleText.titleText("                      Edit Car Name & Price                     ");

					ViewCarData.viewCarNamePrice();

					FontTextColor.fontTextColor(10);
					std::cout << std::endl;
					std::cout << std::endl;
					std::cout << "   Press ESC button to go back" << std::endl;
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
							system("cls");
							std::cin.clear();
							std::cin.ignore(22, '\n');
							goto CarData;
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


					line_number = std::stoi(userHider);

					// std::cin >> line_number;

					// fstream object will be used to read all of the existing lines in the file
					std::fstream read_file;

					// Open the file with the provided filename
					read_file.open("Text Files/Cars_Name.txt");

					// If file failed to open, exit with an error message and error exit status
					if (read_file.fail())
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
							system("cls");
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
							system("cls");
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
					system("pause");
					goto CarData;
				}

				// Delete Cars Name & Price
				else if (CarChoice == 4) {
				DeleteCarsNamePrice:
					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                     Delete Car Name & Price                    ");

					ViewCarData.viewCarNamePrice();

					FontTextColor.fontTextColor(10);
					std::cout << std::endl;
					std::cout << "   Press ESC button to go back" << std::endl;
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
					read_file.open("Text Files/Cars_Name.txt");

					// If file failed to open, exit with an error message and error exit status
					if (read_file.fail())
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
					system("pause");
					goto CarData;
				}

				// View Cars Color
				else if (CarChoice == 5)
				{
					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                         View Cars Color                        ");

					ViewCarData.viewCarColor();

					FontTextColor.fontTextColor(9);
					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					goto CarData;
				}

				// Add Cars Color
				else if (CarChoice == 6) {
					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                          Add Car Colors                        ");

					FontTextColor.fontTextColor(10);
					std::cout << "   Press ESC button to go back" << std::endl;

					std::string addcolor;
					FontTextColor.fontTextColor(9);
					std::cout << "\n   Enter the Color: ";
					FontTextColor.fontTextColor(11);

					std::string hideColor;
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
							system("cls");
							std::cin.clear();
							std::cin.ignore(22, '\n');
							goto CarData;
						case 8:
							if (hideColor.length() > 0) {
								hideColor.erase(hideColor.end() - 1);
								std::cout << c_Color << ' ' << c_Color;
							}
							break;
						default:
							hideColor += c_Color;
							std::cout << c_Color;
							break;
						}
					} while (c_Color != 13);
					addcolor = hideColor;

					// std::cin >> addcolor;
					FontTextColor.fontTextColor(1);

					std::ofstream Cars_Color("Text Files/Cars_Color.txt", std::ios::app);
					Cars_Color << addcolor << std::endl;
					std::cout << "\n   Car Color Added!" << std::endl;

					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					goto CarData;
				}

				// Edit Cars Color
				else if (CarChoice == 7) {
					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                          Edit Car Color                        ");

					ViewCarData.viewCarColor();

					FontTextColor.fontTextColor(10);
					std::cout << std::endl;
					std::cout << "   Press ESC button to go back" << std::endl;
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

					// Add color to text file

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

					system("pause");
					goto CarData;
				}

				// Delete Cars Color
				else if (CarChoice == 8) {
				DeleteCarsColor:
					// Loading screen
					system("cls");
					system("color 0F");
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

					TitleText.titleText("                         Delete Car Color                       ");

					ViewCarData.viewCarColor();

					FontTextColor.fontTextColor(10);
					std::cout << std::endl;
					std::cout << "   Press ESC button to go back" << std::endl;
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
					system("cls");
					goto AdminMenu;
				}

				else {
					system("cls");
					system("color 4f");
					std::cout << "\n   Wrong input entered!" << std::endl;
					std::cin.clear();
					std::cin.ignore(22, '\n');
					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
					goto CarData;
				}
			}

			// Order Logs
			else if (adminchoice == 3) {
				// Loading screen
				system("cls");
				system("color 0F");
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

				TitleText.titleText("                           Order Logs                           ");

				OrderLogs.orderLogs();

				FontTextColor.fontTextColor(9);
				std::cout << std::endl;
				std::cout << "\n   All Order Logs Data!";
				std::cout << std::endl;
				std::cout << "   ";
				system("pause");
				goto AdminMenu;
			}

			// Order Cars
			else if (adminchoice == 4) {
				// Loading screen
				system("cls");
				system("color 0F");
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

				goto OrderCars;
			}

			// About Us
			else if (adminchoice == 5) {
				// Loading screen
				system("cls");
				system("color 09");
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

				AboutUs.AboutUs();
				std::cout << "   ";
				system("pause");

				goto AdminMenu;
			}

			// Logout
			else if (adminchoice == 6) {
				system("color a");
				system("cls");
				goto LoginForm;
			}

			// Wrong input
			else {
				system("cls");
				system("color 4f");
				std::cout << "\n   Wrong input entered!" << std::endl;
				std::cin.clear();
				std::cin.ignore(22, '\n');
				std::cout << std::endl;
				std::cout << "   ";
				system("pause");
				goto AdminMenu;
			}
		}

		// Wrong login
		else
		{
			system("cls");
			system("color 4f");
			std::cout << "\n   Wrong input entered!" << std::endl;
			std::cin.clear();
			std::cin.ignore(22, '\n');
			std::cout << std::endl;
			std::cout << "   ";
			system("pause");
			goto AdminLogin;
		}
	}

	// Employee 
	else if (choice == 2) {
	Employeelogin:

		// Loading screen
		system("cls");
		system("color 09");
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

		system("color a");
		system("cls");

		int Employeelogin = 0;
		std::string user, pass, u, p;

		TitleText.titleText("                          Employee Login                        ");

		FontTextColor.fontTextColor(10);
		std::cout << "\n   Press ESC button to go back" << std::endl;

		FontTextColor.fontTextColor(1);
		std::cout << "\n   Please enter the following details" << std::endl;

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
				system("cls");
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
		user = userHider;

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
				system("cls");
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
		pass = passHider;

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
				employeeLogin = user;
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
					<< "\n   Try to login again\n" << std::endl;
				Sleep(2000);
				goto Employeelogin;
			}
		}
		input.close();

		if (Employeelogin == 1)
		{
		EmployeeMenu:
			UserTitleText.userTitleText("                         Employee Menu                        ", user, "                             [", "]                             ");

			ChoiceBlue.choiceBlue("1", "Order Logs");
			ChoiceBlue.choiceBlue("2", "Order Cars\n");

			ChoiceGreen.choiceGreen("3", "About Us\n");

			ChoiceRed.choiceRed("4", "Logout\n");

			FontTextColor.fontTextColor(9);
			std::cout << "   Please insert your choice: ";
			FontTextColor.fontTextColor(11);
			std::cin >> employeechoice;
			std::cout << std::endl;
			std::cin.ignore();

			// Order Logs
			if (employeechoice == 1) {
				// Loading screen
				system("cls");
				system("color 09");
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

				TitleText.titleText("                           Order Logs                           ");

				OrderLogs.orderLogs();

				FontTextColor.fontTextColor(9);
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
				// Loading screen
				system("cls");
				system("color 09");
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

				goto OrderCars;
			}

			// About Us
			else if (employeechoice == 3) {
				// Loading screen
				system("cls");
				system("color 09");
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

				AboutUs.AboutUs();
				std::cout << "   ";
				system("pause");

				goto EmployeeMenu;
			}

			// Logout
			else if (employeechoice == 4) {
				system("cls");
				system("color a");
				goto LoginForm;
			}

			// Wrong input
			else {
				system("cls");
				system("color 4f");
				std::cout << "\n   Wrong input entered!" << std::endl;
				std::cin.clear();
				std::cin.ignore(22, '\n');
				std::cout << std::endl;
				std::cout << "   ";
				system("pause");
				goto LoginForm;
			}
		}

		// Wrong login
		else
		{
			system("cls");
			system("color 4f");
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
		system("cls");
		system("color 0A");
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

		AccessLevel = 3;

		goto OrderCars;
	}

	// About Us
	else if (choice == 4) {
		// Loading screen
		system("cls");
		system("color 09");
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

		AboutUs.AboutUs();
		std::cout << "   ";
		system("pause");

		goto LoginForm;
	}

	// Exit
	else if (choice == 5) {
		system("cls");
		system("color 01");
		FontTextColor.fontTextColor(9);
		std::cout << "\n   Thanks for using this program\n";
		std::cout << "\n   This program is created by ";
		FontTextColor.fontTextColor(11);
		std::cout << "@PP-Namias\n" << std::endl;
		FontTextColor.fontTextColor(10);
		
		std::cout << "   ";
		system("pause");
		return 0;
	}

	// Wrong input
	else {
		system("cls");
		system("color 4f");
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

	system("color 0A");

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

	FontTextColor.fontTextColor(10);
	std::cout << "\n  Press \'0\' to go back" << std::endl;

	FontTextColor.fontTextColor(9);
	// Callout car names/prices [formated]
	Display_Menu.display_menu("\n  Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));

	FontTextColor.fontTextColor(9);
	std::cout << "\n  Input Number According to the type of Car: ";

	FontTextColor.fontTextColor(11);

	std::cin >> Cars;

	if (Cars == 0) {
		std::cin.clear();
		std::cin.ignore(22, '\n');
		system("cls");

		goto LoginForm;

	}

	else if (Cars < 1 || Cars > sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
		system("cls");
		system("color 4f");
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
			system("cls");
			system("color 0A");

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
			std::cout << "\n  Please insert the number of Color: ";

			FontTextColor.fontTextColor(11);
			std::cin >> Color;

			// Verification
			if (Color < 1 || Color > sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
				system("cls");
				system("color 4f");
				std::cout << "\n  Please try again if you entered the incorrect information.";
				std::cout << std::endl;
				std::cout << "   ";
				system("pause");				goto SelectColor;
			}

			else if (Color >= 1 || Color <= sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {

				Value = toyota_car_prices[Cars - 1];


				// Cashier 
				system("cls");
				system("color 0E");

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
					std::cout << "   ";
					system("pause");
				}

				else if (Change == 0) {
					std::cout << "\n  You paid the exact amount of money needed.\n" << std::endl;

					std::cout << std::endl;
					std::cout << "   ";
					system("pause");
				}

				else if (Change <= -1) {
					system("cls");
					system("color 4f");
					std::cout << "\n  You don't have enough money.";
					std::cin.clear();
					std::cin.ignore(22, '\n');

					Sleep(2000);
					goto OrderCars;
				}

				else {
					system("cls");
					system("color 4f");
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
					std::cout << "\n  Invalid input! Type only Y or N" << std::endl;

					std::cout << "\n   Press Enter to Continue!";
					std::cin.get();

					std::cout << std::endl;
					std::cout << "   ";
					system("pause");					goto OrderCars;
				}
			}

			else {
				system("cls");
				system("color 4f");
				std::cout << "\n  Invalid input please try again." << std::endl;
				Sleep(2000);
				goto OrderCars;
			}
		}

		else if (order_confirmation == 'n' || order_confirmation == 'N') {
			std::cout << "\n  You Canceled the order." << std::endl;
			Sleep(2000);

			goto OrderCars;
		}

		else {
			system("cls");
			system("color 4f");
			std::cout << "\n  Invalid input! Type only Y or N" << std::endl;
			std::cin.clear();
			std::cin.ignore(22, '\n');
			
			Sleep(2000);

			goto OrderCars;
		}
	}

	else {
		system("cls");
		system("color 4f");
		std::cout << "\n  Invalid input please try ordering again.";
		std::cin.clear();
		std::cin.ignore(22, '\n');

		std::cout << "   ";
		system("pause");

		goto OrderCars;
	}
}
