#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
#include <string>


using namespace std;
struct house
{
    int reg_num;
    char name[100];
    string type[3] = { "Low Density", "Medium Density", "High Density" };
    double cost;
};
struct house_search
{
    char reg_num[100];
    char name[100];
    char cost[100];
    string type[3] = { "Low Density", "Medium Density", "High Density" };
};

void addHouse()
{
    int i = 0;
    std::vector<house> hse(1);
    fstream myfile;
    myfile.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", ios::out | ios::app);
    while (i < 1)
    {



        cout << "Enter Registration Number: ";
        cin >> hse[i].reg_num;
        cout << endl << "Enter Name:" << endl;
        cin >> hse[i].name;
        cout << "Enter Cost :" << endl;
        cin >> hse[i].cost;

        myfile << hse[i].reg_num << " " << hse[i].name << " " << hse[i].cost << "\n";

        i++;
    }


    myfile.close();
    hse.clear();
}

void listHouses()
{
    int i = 0;
    std::vector<house_search> hse(10);
    fstream file1;
    file1.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", ios::in);

    while (!file1.eof()) {
        // string line;
        file1.getline(hse[i].reg_num, 150, ' ');
        file1.getline(hse[i].name, 150, ' ');
        file1.getline(hse[i].cost, 150, '\n');




        i++;
    }
    file1.close();


    cout << "============================================" << endl;
    cout << "Reg_Num" << "\t Hse Name " << "\t Cost" << "\t Type" << endl;
    cout << "============================================" << endl;

    int j = 0;
    i = i - 1;
    while (j < i)
    {

        cout << hse[j].reg_num << "\t\t" << hse[j].name << "\t " << hse[j].cost;
        if (atoi(hse[j].cost) < 15000)
        {
            cout << "\t " << hse[j].type[2] << endl;
        }
        else if (atoi(hse[j].cost) >= 15000 && atoi(hse[j].cost) < 25000)
        {
            cout << "\t " << hse[j].type[1] << endl;
        }
        else if (atoi(hse[j].cost) >= 25000)
        {
            cout << "\t " << hse[j].type[0] << endl;
        }

        cout << "--------------------------------------------" << endl;
        j++;
    }
    hse.clear();

}

void searchHouse()
{
    char ch[100];
    int choise;
    int result = 0;
    int i = 0;
    std::vector<house_search> hse(10);

    cout << "\t\t\t*******SEARCH MENU**********" << endl;
    cout << "\t\t\t (1) To search by Registration Number " << endl;
    cout << "\t\t\t (2) To Search by House Name " << endl;
    cout << "\t\t\t*************************" << endl;
    cout << "Enter your choice : ";
    cin >> choise;
    if (choise == 1) {
        cout << "Enter House Reg_Num : ";
        cin >> ch;
    }
    else if (choise == 2) {
        cout << "Enter House Name : ";
        cin >> ch;
    }


    fstream myfile;
    myfile.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", ios::in);
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
                cout << "--------------------------------------------" << endl;
                cout << hse[i].reg_num << "\t " << hse[i].name << "\t " << hse[i].cost << endl;
                cout << "--------------------------------------------" << endl;
                result = 1;
            }

        }
        else if (choise == 2)
        {
            if (strcmp(ch, hse[i].name) == 0)
            {
                cout << "--------------------------------------------" << endl;
                cout << hse[i].reg_num << "\t " << hse[i].name << "\t " << hse[i].cost << endl;
                cout << "--------------------------------------------" << endl;
                result = 1;
            }

        }

    }
    if (result == 0)
    {
        cout << "***No Record Found!***" << endl;
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

    cout << "\t\t\t****************************" << endl;
    cout << "\t\t\t (1) To DELETE by Reg_Num" << endl;
    cout << "\t\t\t (2) tO delete by Name" << endl;
    cout << "\t\t\t****************************" << endl;
    cout << "Enter your choice : ";
    cin >> way;
    if (way == 1) {
        cout << "Enter House Reg_Num To DELETE : ";
        cin >> id;
    }
    else
        if (way == 2) {
            cout << "Enter House Name To DELETE : ";
            cin >> name;
        }

    std::vector<house_search> hse(10);
    fstream myfile;
    fstream search_file;
    myfile.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", ios::in);//read
    search_file.open("C:/Users/jkrbn/OneDrive/Desktop/Project/C++/test/house_storage.txt", ios::out);//write

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
        cout << "Nothing to Delete was found" << endl;
    }
}

int main()
{

    int f = 10;

    while (f == 10) {
        cout << "\t\t\t*********MAIN MENU**********" << endl;
        cout << "\t\t\t (1) To Add New House" << endl;
        cout << "\t\t\t (2) To View Houses" << endl;
        cout << "\t\t\t (3) To search For Houses" << endl;
        cout << "\t\t\t (4) To Delete A House" << endl;
        cout << "\t\t\t (0) To EXIT" << endl;
        cout << "\t\t\t*****************************" << endl;
        cout << "Enter Your Option >> ";
        cin >> f;

        while (f == 1) {
            addHouse();
            cout << "(1) To ADD Another House \n (0) To EXIT \n (10) Back To MAIN MENU >> ";
            cin >> f;

        }
        while (f == 2) {
            listHouses();
            cout << endl;
            cout << "(0) To EXIT \n (10) Back To MAIN MENU >> ";
            cin >> f;
        }
        while (f == 4) {
            deleteHouse();

            cout << "(4) To DELETE Another House \n (0) To EXIT \n (10) Back To MAIN MENU >> ";
            cin >> f;
        }
        while (f == 3) {
            searchHouse();
            cout << "(3) To SEARCH Again \n (0) To EXIT \n (10) Back To MAIN MENU >>  ";
            cin >> f;
        }
    }
    if (f == 0)
    {
        exit(0);

    }
    if (f != 10 || f != 1 || f != 2 || f != 3 || f != 4 || f != 0)
    {
        cout << "Sorry Your Input Is Not Supported!!!" << endl;

    }



    return 0;
}



void login()
{
    Student laccount;
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