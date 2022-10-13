/*
 * Programmer: Namias, Jhon Keneth Ryan B.
 *
 *          Title: Car Dealership
 * Course/Section: CS1A North
 *           Date: October 15, 2022
 *      Professor: Alban Rei Ryan
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

int main()
{
	system("color 01");
	system("mode 70,25");

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
		color_index[] = {
			"Black",
			"Blue",
			"Gray",
			"Green",
			"Red",
			"Cyan",
			"Yellow",
			"Voilet",
			"Pink",
			"White",
			"Lime",
	};

	do {
		system("color 01");
		system("mode 70,25");

		std::cout << "\n  Welcome to Toyota Car Dealership\n"
			<< "  Here's the list of Cars: \n ";
		
		NamiasClass NamiasObject;
		NamiasObject.display_menu("\n   Toyota", toyota_car_names, toyota_car_prices, 17);
		
		std::cout << "\n  Input Number According to the type of Car: ";
		std::cin >> Cars;

		if (Cars < 1 || Cars > 17) {
			std::cout << "  Please try again if you entered the incorrect information.";
			return 0;
		}

		else if (Cars >= 1 || Cars <= 17) {
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
				<< " do you want?\n";

			NamiasClass NamiasObject2;
			NamiasObject2.display_color(color_index, 11);
			std::cin >> Color;
			
			if (Color < 1 || Color > 11) {
				std::cout << "  Please try again if you entered the incorrect information.";
				return 0;
			}
			
			else if (Color >= 1 || Color <= 11) {
				std::cout << "  You pick color "
					<< color_index[Color - 1]
					<< std::endl;
			}

			Value = toyota_car_prices[Cars - 1];
			
			system("cls");
			system("color 05");

			// Your order summary
			std::cout << "\n  You selected (" 
				<< color_index[Color - 1]
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
				std::cout << "\n  Invalid input please try ordering again.";
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

		}
		else if (order_confirmation == 'n' || order_confirmation == 'N') {
			std::cout << "\n  You Canceled the order.";
			return 0;
		}

		else {
			std::cout << "\n  Invalid input! Type only Y or N";
			return 0;
		}

	} 
	while (order_more == 'y' || order_more == 'Y');
	
}