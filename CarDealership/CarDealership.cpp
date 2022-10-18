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

#include <iostream>
#include <string>
#include <Windows.h>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <conio.h>

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










int main()
{
	// Text color
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// SetConsoleTextAttribute(h, 1);

	// system defaults
	system("color 01");
	system("mode 70,25");

	// Font and CMD size
	static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 70;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex);

	char order_more = 'n',
		 order_confirmation;

	int Payment,
		Value,
		Change,
		Cars,
		Color,
		toyota_car_prices[] = {
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
		"Corolla Cross",
		"FJ Cruiser",
		"Fortuner",
		"Land Cruiser",
		"Accord",
		"Accord Hybrid",
		"Civic",
		"Clarity",
		"CR-V",
		"HR-V",
		"Insight",
		"Odyssey"
	},
		toyota_car_color[] = {
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

	do {
		// system defaults
		system("color 01");
		system("mode 70,25");

		int choice;
		int adminchoice;
		int employeechoice;

		int employeeData;
		int carsData;


		std::cout << std::endl;
		SetConsoleTextAttribute(h, 13);
		std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
		SetConsoleTextAttribute(h, 1);
		std::cout << "                   Car Dealership Management (CDM)                    \n\n";
		SetConsoleTextAttribute(h, 10);
		std::cout << "                              Login Form                              \n\n";
		SetConsoleTextAttribute(h, 13);
		std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
		SetConsoleTextAttribute(h, 1);
		
		std::cout << "   (1) Admin\n";
		std::cout << "   (2) Employee\n";
		std::cout << "   (3) Guest\n\n";

		SetConsoleTextAttribute(h, 2);
		std::cout << "   (4) About Us\n\n";

		SetConsoleTextAttribute(h, 4);
		std::cout << "   (5) Quit\n\n";
		
		SetConsoleTextAttribute(h, 1);
		std::cout << "   Please insert your choice: ";
		SetConsoleTextAttribute(h, 13);
		std::cin >> choice;
		
		// Admin
		if (choice == 1) {
			system("cls");
			
			int login;
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

			std::cout << "\n   Please enter the following details" << std::endl;
			std::cout << "\n   Username: ";
			SetConsoleTextAttribute(h, 13);
			std::cin >> user;
			
			SetConsoleTextAttribute(h, 1);
			std::cout << "   Password: ";
			SetConsoleTextAttribute(h, 13);
			std::cin >> pass;

			std::ifstream input("Admin.txt");
			
			while (input >> u >> p)
			{
				if (u == user && p == pass)
				{
					login = 1;
					system("cls");
				}

				else {
					login = 0;
					system("cls");
					system("color 4f");
					std::cout << "\n   Wrong username or password!"
							  << "\n   Try to login again\n\n";
					
					std::cout << "\n   Press Enter to Continue!";
					std::cin.get();
					std::cin.get();

					main();
				}

			}

			input.close();
			
			if (login == 1)
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
				std::cout << "                             Admin Access                             \n";
				std::cout << "                               (" << user << ")                       \n\n";
				SetConsoleTextAttribute(h, 13);
				std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
				SetConsoleTextAttribute(h, 1);

				std::cout << "   (1) Employee Data\n";
				std::cout << "   (2) Cars Data\n";
				std::cout << "   (3) Order Logs\n";
				std::cout << "   (4) Order Cars\n";
				SetConsoleTextAttribute(h, 2);
				std::cout << "   (5) About Us\n\n";
				SetConsoleTextAttribute(h, 4);
				std::cout << "   (6) Exit\n\n";
				SetConsoleTextAttribute(h, 1);
				
				std::cout << "   Please insert your choice: ";

				SetConsoleTextAttribute(h, 13);
				std::cin >> adminchoice;
				std::cout << std::endl;
				
				// Employee Data
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

					std::cout << "   (1) Add Employee Data\n";
					std::cout << "   (2) Display Employee Data\n";
					std::cout << "   (3) Search Employee Data\n";
					std::cout << "   (4) Edit Employee Data\n";
					SetConsoleTextAttribute(h, 4);
					std::cout << "   (5) Delete Employee Data\n\n";
					std::cout << "   (6) Exit\n\n";

					SetConsoleTextAttribute(h, 1);
					std::cout << "   Please insert your choice: ";

					SetConsoleTextAttribute(h, 13);
					std::cin >> employeeData;
					std::cout << std::endl;

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

						std::ofstream reg("Employee.txt", std::ios::app);
						reg << adduser << ' ' << addpass << std::endl;
						std::cout << "\n   Employee Data Added!\n";
						std::cout << "\n   Press Enter to Continue!";
						std::cin.get();
						std::cin.get();
						main();

					}

					// Display Employee Data
					else if (employeeData == 2) {

					}

					// Search Employee Data
					else if (employeeData == 3) {

					}

					// Delete Employee Data
					else if (employeeData == 4) {

					}

					// Delete Employee Data
					else if (employeeData == 5) {

					}

					// Exit
					else if (employeeData == 6) {
						system("cls");
						main();
					}






				}

				// Cars Data
				else if (adminchoice == 2) {
				
				}

				// Order Logs
				else if (adminchoice == 3) {

				}

				// Order Cars
				else if (adminchoice == 4) {

				}

				// About Us
				else if (adminchoice == 5) {

				}

				// Exit
				else if (adminchoice == 6) {

				}

				// Wrong input
				else {
					system("cls");
					system("color 4f");
					std::cout << "\n   Wrong input entered!\n" << std::endl;
					return 0;
				}

			}

			// Wrong login
			else
			{
				system("cls");
				system("color 4f");
				std::cout << "\n   Wrong input entered!\n" << std::endl;
				return 0;
			}
		}
		
		// Employee (not done yet)
		else if (choice == 2) {
			system("cls");

			int login;
			std::string user, pass, u, p;

			std::cout << std::endl;
			SetConsoleTextAttribute(h, 13);
			std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
			SetConsoleTextAttribute(h, 1);
			std::cout << "                   Car Dealership Management (CDM)                    \n\n";
			SetConsoleTextAttribute(h, 10);
			std::cout << "                           Employee Login                             \n\n";
			SetConsoleTextAttribute(h, 13);
			std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\n";
			SetConsoleTextAttribute(h, 1);

			std::cout << "\n   Please enter the following details" << std::endl;
			std::cout << "\n   Username: ";
			SetConsoleTextAttribute(h, 13);
			std::cin >> user;

			SetConsoleTextAttribute(h, 1);
			std::cout << "   Password: ";
			SetConsoleTextAttribute(h, 13);
			std::cin >> pass;

			std::ifstream input("Employee.txt");

			while (input >> u >> p)
			{
				if (u == user && p == pass)

				{
					login = 1;
					system("cls");
				}
				else {
					login = 0;
					system("cls");
					system("color 4f");
					std::cout << "\n   Wrong username or password!"
							  << "\n   Try to login again\n\n";

					std::cout << "\n   Press Enter to Continue!";
					std::cin.get();
					std::cin.get();

					main();
				}

			}

			input.close();

			if (login == 1)
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

				std::cout << "   (1) Order Logs\n";
				std::cout << "   (2) Order Cars\n";
				SetConsoleTextAttribute(h, 2);
				std::cout << "   (3) About Us\n\n";
				SetConsoleTextAttribute(h, 4);
				std::cout << "   (4) Exit\n\n";
				SetConsoleTextAttribute(h, 1);

				std::cout << "   Please insert your choice: ";

				SetConsoleTextAttribute(h, 13);
				std::cin >> adminchoice;
				std::cout << std::endl;

				// Order Logs
				if (adminchoice == 1) {

				}

				// Order Cars
				else if (adminchoice == 2) {

				}

				// About Us
				else if (adminchoice == 3) {

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
		system("cls");
		std::cout << "\n\n   Programmer: Namias, Jhon Keneth Ryan B.\n"
			   	  << "\n\n   Title: Car Dealership Management (CDM)\n"
				  << "\n\n   Course/Section: CS1A North"
				  << "\n\n   Date: October 22, 2022"
				  << "\n\n   Professor: Alban Rei Ryan"
				  << "\n\n   Info:"
				  << "\n\n   \tMidterm Program\n\n";

		std::cin.get();
		std::cin.get();
		main();

		}
		// Exit
		else if (choice == 5) {
			system("color 9f");
			std::cout << "   \nThanks for using this program\n"
					  << "   \nThis program is created by @PP_Namias\n\n";
			return 0;
		}

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




		system("cls");
	
		std::cout << std::endl;
		std::cout << "  Welcome to Toyota Car Dealership\n"
			      << "  Here's the list of Cars: \n ";
		
		NamiasClass NamiasObject;
		NamiasObject.display_menu("\n   Toyota", toyota_car_names, toyota_car_prices, sizeof(toyota_car_names) / sizeof(toyota_car_names[0]));
		
		std::cout << "\n  Input Number According to the type of Car: ";
		std::cin >> Cars;
		

		if (Cars < 1 || Cars > sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
			std::cout << "  Please try again if you entered the incorrect information.";
			return 0;
		}

		else if (Cars >= 1 || Cars <= sizeof(toyota_car_names) / sizeof(toyota_car_names[0])) {
			std::cout << "  You selected "
				<< toyota_car_names[Cars - 1]
				<< " for "
				<< toyota_car_prices[Cars - 1]
				<< " pesos\n";
		}

		// Order confirmation
		std::cout << "\n  To be confirmed type Y Yes, Type N if No: ";
		std::cin >> order_confirmation;
		
		if (order_confirmation == 'y' || order_confirmation == 'Y') {
			
			std::cout << "\n  You Ordered "
				<< toyota_car_names[Cars - 1]
			    << std::endl;

			system("cls");
			system("color 0A");

			// Select Color
			std::cout << "\n   What Color of "
				<< toyota_car_names[Cars - 1]
				<< " do you want?"
				<< std::endl;


			NamiasClass NamiasObject2;
			NamiasObject2.display_color(toyota_car_color, sizeof(toyota_car_color) / sizeof(toyota_car_color[0]));
			std::cin >> Color;
			
			if (Color < 1 || Color > sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
				std::cout << "  Please try again if you entered the incorrect information."
				<< std::endl;
				return 0;
			}
			
			else if (Color >= 1 || Color <= sizeof(toyota_car_color) / sizeof(toyota_car_color[0])) {
				std::cout << "  You pick color "
					<< toyota_car_color[Color - 1]
					<< std::endl;
			}
			
			else {
				std::cout << "\n  Invalid input please try ordering again.\n";
				return 0;
			}

			Value = toyota_car_prices[Cars - 1];
			
			system("cls");
			system("color 05");

			// Your order summary
			std::cout << "\n  You selected (" 
				<< toyota_car_color[Color - 1]
				<< ") "
				<< toyota_car_names[Cars - 1]
				<< " for "
				<< toyota_car_prices[Cars - 1]
				<< " pesos\n";

			// Total of the order
			std::cout << "\n  Total Amount: " << Value << "\n  ";
			std::cout << "  Enter The Amount of Payment:\n    ";
			std::cin >> Payment;
			Change = Payment - Value;
			
			if (Change >= 1) {
				std::cout << "\n  Change: " << Change << "\n\n";

			}
			else if (Change == 0) {
				std::cout << "\n  You paid the exact amount of money needed.\n\n";
			}

			else if (Change <= -1) {
				std::cout << "\n  You don't have enough money.";
				return 0;
			}
			
			else {
				std::cout << "\n  Invalid input please try ordering again.\n";
				return 0;
			}

			// Receipt
			std::cout << "  ************************************************\n"
					<< "                Thank for your purchase           \n"
					<< "            We love to hear your feedback         \n"
					<< "                Call: (02) 8-361-8794             \n"
					<< "                 Globe: 09272533969               \n"
					<< "              Email: jkrbn99@gmail.com            \n"
					<< "                Website: Toyota.com.ph            \n"
					<< "  ************************************************\n";
			
			std::cout << "\n  Do you want to order more? Type Y if yes and type N if no: ";
			std::cin >> order_more;
			
			if (order_more == 'n' || order_more == 'N') {
				std::cout << "Thank you for your purchase! <3";
				return 0;
			}

			else if (order_more == 'y' || order_more == 'Y') {
				std::cout << "Thank you for your purchase! <3";

				system("cls");
				system("color 0A");
			}
			else {
				std::cout << "\n  Invalid input! Type only Y or N\n";
				return 0;
			}

		}
		else if (order_confirmation == 'n' || order_confirmation == 'N') {
			std::cout << "\n  You Canceled the order.\n";
			return 0;
		}

		else {
			std::cout << "\n  Invalid input! Type only Y or N\n";
			return 0;
		}

	} 
	while (order_more == 'y' || order_more == 'Y');
	
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

	std::ifstream input("database.txt");
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

	std::ofstream reg("Employee.txt", std::ios::app);
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

		std::ifstream searchu("database.txt");
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

		std::ifstream searchp("database.txt");
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