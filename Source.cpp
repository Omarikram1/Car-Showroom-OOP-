//Concepts included:
//Abstract class
//Inheritance
//Composition
//Templates
//FileHandling
//BasicprogrammingrulesofSem1
#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<fstream>
using namespace std;

string idcardnumber;
char name[50];
int choice;
string anotherchoice;
string num;

class buyingfunctions{
public:
	virtual void buyingfunc() = 0;
};
class color {

public:
	string s1;

};

class showroom{
public:

	string s1;
	string e1;

	string m1;

	string r1;

	string answer;
	//compisiton
	
	color compositionvariable;
	void hondasfunction(){

		cout << "IN HONDA SECTION WE HAVE 5 CARS AVAILABLE: " << endl;
		cout << "1: CIVIC" << endl; cout << "2: CITY" << endl; cout << "3: BRV" << endl; cout << "4: ACCORD" << endl;
		cout << "5: INSIGHT" << endl;
		cout << "WHICH CAR YOU WANT TO SEE: ";
		cin >> answer;

		if (answer == "civic" || answer == "Civic" || answer == "CIVIC")
		{

			compositionvariable.s1 = "White";
			e1 = "2.0-liter four-cylinder engine that pumps out 158 horsepower.";
			m1 = "Model Year 20' ";
			r1 = "LEO 4646";
			fun(compositionvariable.s1, e1, m1, r1);

		}
		else if (answer == "city" || answer == "City" || answer == "CITY")
		{
			compositionvariable.s1 = "Gray";
			e1 = "1.5-liter four-cylinder engine.";
			m1 = "Model Year 2018 ";
			r1 = "LEB 4567";
			fun(compositionvariable.s1, e1, m1, r1);
		}
		else if (answer == "BRV" || answer == "brv" || answer == "BRV")
		{
			compositionvariable.s1 = "Red";
			e1 = "1.5-liter four-cylinder engine.";
			m1 = "Model Year 2017 ";
			r1 = "LEO 2344";
			fun(compositionvariable.s1, e1, m1, r1);
		}
		else if (answer == "accord" || answer == "Accord" || answer == "ACCORD")
		{
			compositionvariable.s1 = "Metalic Gray";
			e1 = "2.0-liter four-cylinder engine.";
			m1 = "Model Year 2016 ";
			r1 = "ISB 2345";
			fun(compositionvariable.s1, e1, m1, r1);
		}
		else if (answer == "Insight" || answer == "insight" || answer == "INSIGHT")
		{
			compositionvariable.s1 = "Purple";
			e1 = "1.5-liter four-cylinder engine with hybride Motor.";
			m1 = "Model Year 19' ";
			r1 = "LEB 9999";
			fun(compositionvariable.s1, e1, m1, r1);
		}

	}


	void corollasfunction(){
		{

			cout << "IN Toyota's SECTION WE HAVE 5 CARS AVAILABLE: " << endl;
			cout << "1: GRANDE" << endl; cout << "2: REVO" << endl; cout << "3: YARIS" << endl; cout << "4: FORTUNER" << endl;
			cout << "5: COROLLA CROSS" << endl;
			cout << "WHICH CAR YOU WANT TO SEE: ";
			cin >> answer;


			if (answer == "Grande" || answer == "grande" || answer == "GRANDE")
			{
				compositionvariable.s1 = "Black";
				e1 = "1.8-liter four-cylinder DOHC engine. ";
				m1 = "Model Year 2019 ";
				r1 = "KRI 3456";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Revo" || answer == "revo" || answer == "REVO")
			{
				compositionvariable.s1 = "Black";
				e1 = "2.7-liter five-cylinder engine. ";
				m1 = "Model Year 2017 ";
				r1 = "LEO 7978";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Yaris" || answer == "yaris" || answer == "YARIS")
			{
				compositionvariable.s1 = "Purple";
				e1 = "1.5-liter four-cylinder engine. ";
				m1 = "Model Year 2021 ";
				r1 = "LEO 5678";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "fortuner" || answer == "Fortuner" || answer == "FORTUNER")
			{
				compositionvariable.s1 = "Gray";
				e1 = "2.7-liter five-cylinder engine ( Petrol).";
				m1 = "Model Year 2016 ";
				r1 = "IZB 2345";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Corolla cross " || answer == "corolla cross" || answer == "COROLLA CROSS")
			{
				compositionvariable.s1 = "White";
				e1 = "2.5-liter four-cylinder engine with Hybride Motor.";
				m1 = "Model Year 2021 ";
				r1 = "LEZ 7812";
				fun(compositionvariable.s1, e1, m1, r1);

			}
		}
	}




	void hyundaisfunction() {
		{
			cout << "IN Hyundai's SECTION WE HAVE 5 CARS AVAILABLE: " << endl;
			cout << "1: TUCSON" << endl; cout << "2: ELANTRA" << endl; cout << "3: SONATA" << endl; cout << "4: SANTAFE" << endl;
			cout << "5: IONIQ" << endl;
			cout << "WHICH CAR YOU WANT TO SEE: ";
			cin >> answer;

			if (answer == "Tucson" || answer == "tucson" || answer == "TUCSON")
			{
				compositionvariable.s1 = "Dark Gray";
				e1 = "2.0-liter four-cylinder engine. ";
				m1 = "Model Year 2020 ";
				r1 = "LEB 5689";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Elantra" || answer == "elantra" || answer == "ELANTRA")
			{
				compositionvariable.s1 = "Purple";
				e1 = "2.0-liter four-cylinder engine.";
				m1 = "Model Year 2021 ";
				r1 = "RWP 2367";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Sonata" || answer == "sonata" || answer == "SONATA")
			{
				compositionvariable.s1 = "Purple";
				e1 = "2.5-liter four-cylinder engine. ";
				m1 = "Model Year 2020 ";
				r1 = "LEG 2390";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Santafe" || answer == "santafe" || answer == "SANTAFE")
			{
				compositionvariable.s1 = "Black";
				e1 = " Turbo Charged 2.0-liter four-cylinder engine.";
				m1 = "Model Year 2021 ";
				r1 = "GUV 1234";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Ioniq" || answer == "ioniq" || answer == "IONIQ")
			{
				compositionvariable.s1 = "Mid Night Blue";
				e1 = "1.6-liter four-cylinder engine with Hybride Motor.";
				m1 = "Model Year 2018 ";
				r1 = "LEO 0909";
				fun(compositionvariable.s1, e1, m1, r1);

			}
		}
	}



	void KIAsfunction() {
		{
			cout << "IN KIA's SECTION WE HAVE 5 CARS AVAILABLE: " << endl;
			cout << "1: SPORTAGE" << endl; cout << "2: PICANTO" << endl; cout << "3: CARNIVAL" << endl; cout << "4: RIO" << endl;
			cout << "5: STINGER" << endl;
			cout << "WHICH CAR YOU WANT TO SEE: ";
			cin >> answer;

			if (answer == "Sportage" || answer == "sportage" || answer == "SPORTAGE")
			{
				compositionvariable.s1 = "Black";
				e1 = "2.0-liter four-cylinder engine.";
				m1 = "Model Year 2019 ";
				r1 = "LEH 3333";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Picanto" || answer == "picanto" || answer == "PICANTO")
			{
				compositionvariable.s1 = "BLUE";
				e1 = "1.0-liter four-cylinder engine.";
				m1 = "Model Year 2018 ";
				r1 = "LEZ 4646";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Carnival" || answer == "carnival" || answer == "CARNIVAL")
			{
				compositionvariable.s1 = "Metalic Blue";
				e1 = "3.0-liter Six-cylinder engine.";
				m1 = "Model Year 2017 ";
				r1 = "KRI 4444";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Rio" || answer == "rio" || answer == "RIO")
			{
				compositionvariable.s1 = "Brown";
				e1 = " Turbo Charged 1.0-liter four-cylinder engine.";
				m1 = "Model Year 2016 ";
				r1 = "LEO 0012";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Stinger" || answer == "stinger" || answer == "STINGER")
			{
				compositionvariable.s1 = "Purple";
				e1 = "3.0-liter Six-cylinder engine.";
				m1 = "Model Year 2021 ";
				r1 = "IEB 2356";
				fun(compositionvariable.s1, e1, m1, r1);

			}
		}
	}



	void suzukisfunction() {
		{
			cout << "IN Suzuki's SECTION WE HAVE 5 CARS AVAILABLE: " << endl;
			cout << "1: ALTO" << endl; cout << "2: SWIFT" << endl; cout << "3: CULTUS" << endl; cout << "4: WAGONR" << endl;
			cout << "5: CIAZ" << endl;
			cout << "WHICH CAR YOU WANT TO SEE: ";
			cin >> answer;

			if (answer == "Alto" || answer == "alto" || answer == "ALTO")
			{
				compositionvariable.s1 = "Purple";
				e1 = " 660 CC Three-cylinder engine.";
				m1 = "Model Year 2019 ";
				r1 = "LEO 1012";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Swift" || answer == "swift" || answer == "SWIFT")
			{
				compositionvariable.s1 = "Purple";
				e1 = "1.3-liter four-cylinder engine.";
				m1 = "Model Year 2015 ";
				r1 = "LEF 2233";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Cultus" || answer == "cultus" || answer == "CULTUS")
			{
				compositionvariable.s1 = "Purple";
				e1 = "1.0-liter Three-cylinder engine.";
				m1 = "Model Year 2015 ";
				r1 = "LEO 4647";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Wagonr" || answer == "wagonr" || answer == "WAGONR")
			{
				compositionvariable.s1 = "Dark Gray";
				e1 = "1.0-liter Three-cylinder engine.";
				m1 = "Model Year 2013 ";
				r1 = "LEO 3008";
				fun(compositionvariable.s1, e1, m1, r1);
			}
			else if (answer == "Ciaz" || answer == "ciaz" || answer == "CIAZ")
			{
				compositionvariable.s1 = "Black";
				e1 = "1.5-liter four-cylinder engine.";
				m1 = "Model Year 2019 ";
				r1 = "LEO 4009";
				fun(compositionvariable.s1, e1, m1, r1);

			}
		}
	}


	void fun(string s1, string  e1, string m1, string r1)
	{


		cout << "  Car's Color is: " << compositionvariable.s1 << endl;

		cout << "  ENGINE SPECS are : " << e1 << endl;

		cout << "  Model of your chosen car is: " << m1 << endl;

		cout << "  Registration number of chosen car is: " << r1 << endl;


	}



};

template <class T>
class corolla : public showroom, public buyingfunctions{
public:

	void function(T num)
	{

		cout << "ARE YOU SURE YOU WANT TO BUY THIS CAR? (YES/NO)" << endl;

		cin >> anotherchoice;
		if (anotherchoice == "yes" || anotherchoice == "yes" || anotherchoice == "YES"){
			cout << "PLEASE ENTER YOUR NAME: " << endl;
			cin.ignore();
			cin.getline(name, 50);
			cout << "PLEASE ENTER YOUR ID CARD NUMBER:" << endl;
			cin >> idcardnumber;
			cout << "RECIEPT IS: " << endl;
			cout << "THE CAR IS BEING BUYED BY: " << name << endl;
			cout << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
			cout << "PRICE OF THE CAR IS:" << num << endl;

			ofstream myfile("receipt.txt", ios::app);
			if (myfile.is_open())
			{
				myfile << "RECIEPT IS: " << endl;
				myfile << "THE CAR IS BEING BUYED BY: " << name << endl;
				myfile << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
				myfile << "PRICE OF THE CAR IS:" << num << endl;
				myfile.close();
			}
			else cout << "Unable to open file";

		}
	}


	void buyingfunc()
	{

		cout << "THERE ARE 5 OPTIONS OF CARS AVAILABLE: " << endl <<
			"\n1: Grande " << endl << "\n2: Revo " << endl << "\n3: Yaris " << endl << "\n4: Fortuner " << endl << "\n5: Corolla Cross " << endl << endl << endl;
		cout << "\nSELECT FROM ABOVE OPTIONS :" << endl;
		cin >> choice;
		if (choice == 1)
		{
			num = "4,000,000 RUPEES.";
			function(num);

		}
		else if (choice == 2)
		{
			num = "7,000,000 RUPEES";
			function(num);


		}
		else if (choice == 3){
			num = " 2,500,000 RUPEES";
			function(num);

		}
		else if (choice == 4)
		{
			num = "7,000,000 RUPEES";
			function(num);

		}
		else if (choice == 5)
		{
			num = "8,500,000 RUPEES";
			function(num);



		}

	}


};

template <typename P>
class honda : public showroom, public buyingfunctions{
public:


	void function(P num)
	{

		cout << "ARE YOU SURE YOU WANT TO BUY THIS CAR? (YES/NO)" << endl;

		cin >> anotherchoice;
		if (anotherchoice == "Yes" || anotherchoice == "yes" || anotherchoice == "YES"){
			cout << "PLEASE ENTER YOUR NAME: " << endl;
			cin.ignore();
			cin.getline(name, 50);
			cout << "PLEASE ENTER YOUR ID CARD NUMBER:" << endl;
			cin >> idcardnumber;
			cout << "RECIEPT IS: " << endl;
			cout << "THE CAR IS BEING BUYED BY: " << name << endl;
			cout << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
			cout << "PRICE OF THE CAR IS:" << num << endl;

			ofstream myfile("receipt.txt", ios::app);
			if (myfile.is_open())
			{
				myfile << "RECIEPT IS: " << endl;
				myfile << "THE CAR IS BEING BUYED BY: " << name << endl;
				myfile << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
				myfile << "PRICE OF THE CAR IS:" << num << endl;
				myfile.close();
			}
			else cout << "Unable to open file";




		}
	}



	void buyingfunc()
	{

		cout << "THERE ARE 5 OPTIONS OF CARS AVAILABLE: " << endl <<
			"\n1: CIVIC " << endl << "\n2: CITY " << endl << "\n3: BRV " << endl << "\n4: ACCORD " << endl << "\n5: INSIGHT " << endl << endl << endl;
		cout << "\nSELECT FROM ABOVE OPTIONS :" << endl;
		cin >> choice;
		if (choice == 1)
		{


			num = "4,000,000 RUPEES";
			function(num);

		}
		else if (choice == 2)
		{

			num = "3,000,000 RUPEES";
			function(num);


		}
		else if (choice == 3){

			num = "2,500,000 RUPEES";
			function(num);
		}
		else if (choice == 4)
		{
			num = " 5,500,000 RUPEES";
			function(num);
		}
		else if (choice == 5)
		{

			num = "8,000,000 RUPEES";
			function(num);

		}

	}

};

template <class S>
class hyundai : public showroom, public buyingfunctions
{

public:
	void function(S num)
	{

		cout << "ARE YOU SURE YOU WANT TO BUY THIS CAR? (YES/NO)" << endl;

		cin >> anotherchoice;
		if (anotherchoice == "yes" || anotherchoice == "yes" || anotherchoice == "YES"){
			cout << "PLEASE ENTER YOUR NAME: " << endl;
			cin.ignore();
			cin.getline(name, 50);
			cout << "PLEASE ENTER YOUR ID CARD NUMBER:" << endl;
			cin >> idcardnumber;
			cout << "RECIEPT IS: " << endl;
			cout << "THE CAR IS BEING BUYED BY: " << name << endl;
			cout << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
			cout << "PRICE OF THE CAR IS:" << num << endl;


			ofstream myfile("receipt.txt", ios::app);
			if (myfile.is_open())
			{
				myfile << "RECIEPT IS: " << endl;
				myfile << "THE CAR IS BEING BUYED BY: " << name << endl;
				myfile << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
				myfile << "PRICE OF THE CAR IS:" << num << endl;
				myfile.close();
			}
			else cout << "Unable to open file";


		}
	}

	void buyingfunc()
	{



		cout << "THERE ARE 5 OPTIONS OF CARS AVAILABLE: " << endl;
		cout << "1: TUCSON" << endl; cout << "2: ELANTRA" << endl; cout << "3: SONATA" << endl; cout << "4: SANTAFE" << endl;
		cout << "5: IONIQ" << endl;
		cout << "\nSELECT FROM ABOVE OPTIONS :" << endl;
		cin >> choice;
		if (choice == 1)
		{
			num = "5,500,000 RUPEES";
			function(num);
		}
		else if (choice == 2)
		{

			num = "4,000,000 RUPEES";
			function(num);


		}
		else if (choice == 3){

			num = "9,000,000 RUPEES";
			function(num);
		}
		else if (choice == 4)
		{
			num = "9,500,000 RUPEES";
			function(num);
		}
		else if (choice == 5)
		{
			num = "3,800,000 RUPEES";
			function(num);


		}

	}


};
template <class K>
class KIA : public showroom, public buyingfunctions{
public:

	void function(K num)
	{

		cout << "ARE YOU SURE YOU WANT TO BUY THIS CAR? (YES/NO)" << endl;

		cin >> anotherchoice;
		if (anotherchoice == "yes" || anotherchoice == "yes" || anotherchoice == "YES"){
			cout << "PLEASE ENTER YOUR NAME: " << endl;
			cin.ignore();
			cin.getline(name, 50);
			cout << "PLEASE ENTER YOUR ID CARD NUMBER:" << endl;
			cin >> idcardnumber;
			cout << "RECIEPT IS: " << endl;
			cout << "THE CAR IS BEING BUYED BY: " << name << endl;
			cout << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
			cout << "PRICE OF THE CAR IS:" << num << endl;

			ofstream myfile("receipt.txt", ios::app);
			if (myfile.is_open())
			{
				myfile << "RECIEPT IS: " << endl;
				myfile << "THE CAR IS BEING BUYED BY: " << name << endl;
				myfile << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
				myfile << "PRICE OF THE CAR IS:" << num << endl;
				myfile.close();
			}
			else cout << "Unable to open file";

		}
	}



	void buyingfunc()
	{

		cout << "THERE ARE 5 OPTIONS OF CARS AVAILABLE: " << endl;
		cout << "1: SPORTAGE" << endl; cout << "2: PICANTO" << endl; cout << "3: CARNIVAL" << endl; cout << "4: RIO" << endl;
		cout << "5: STINGER" << endl;
		cout << "\nSELECT FROM ABOVE OPTIONS :" << endl;
		cin >> choice;
		if (choice == 1)
		{

			num = "5,000,000 RUPEES";
			function(num);

		}
		else if (choice == 2)
		{

			num = "2,000,000 RUPEES";
			function(num);


		}
		else if (choice == 3){

			num = "7,000,000 RUPEES";
			function(num);
		}
		else if (choice == 4)
		{
			num = "2,500,000 RUPEES";
			function(num);
		}
		else if (choice == 5)
		{

			num = "9,800,000 RUPEES";
			function(num);

		}

	}


};
template <class D>
class suzuki : public buyingfunctions, public showroom{
public:

	void function(D num)
	{

		cout << "ARE YOU SURE YOU WANT TO BUY THIS CAR? (YES/NO)" << endl;

		cin >> anotherchoice;
		if (anotherchoice == "yes" || anotherchoice == "yes" || anotherchoice == "YES"){
			cout << "PLEASE ENTER YOUR NAME: " << endl;
			cin.ignore();
			cin.getline(name, 50);
			cout << "PLEASE ENTER YOUR ID CARD NUMBER:" << endl;
			cin >> idcardnumber;
			cout << "RECIEPT IS: " << endl;
			cout << "THE CAR IS BEING BUYED BY: " << name << endl;
			cout << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
			cout << "PRICE OF THE CAR IS:" << num << endl;

			ofstream myfile("receipt.txt", ios::app);
			if (myfile.is_open())
			{
				myfile << "RECIEPT IS: " << endl;
				myfile << "THE CAR IS BEING BUYED BY: " << name << endl;
				myfile << "ID CARD NUMBER OF BUYER IS :" << idcardnumber << endl;
				myfile << "PRICE OF THE CAR IS:" << num << endl;
				myfile.close();
			}
			else cout << "Unable to open file";

		}
	}



	void buyingfunc()
	{

		cout << "THERE ARE 5 OPTIONS OF CARS AVAILABLE: " << endl;

		cout << "\nSELECT FROM ABOVE OPTIONS :" << endl;
		cout << "1: ALTO" << endl; cout << "2: SWIFT" << endl; cout << "3: CULTUS" << endl; cout << "4: WAGONR" << endl;
		cout << "5: CIAZ" << endl;
		cin >> choice;
		if (choice == 1)
		{

			num = "1,300,000 RUPEES";
			function(num);

		}
		else if (choice == 2)
		{

			num = "1,800,000 RUPEES";
			function(num);


		}
		else if (choice == 3){

			num = "1,500,000 RUPEES";
			function(num);
		}
		else if (choice == 4)
		{
			num = "1,300,000 RUPEES";
			function(num);
		}
		else if (choice == 5)
		{

			num = "2,500,000 RUPEES";
			function(num);

		}

	}



};



void main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 3);
	cout << endl;
	cout << " **  WELCOME TO BAHRIA MOTORS LAHORE **  " << endl << endl;
	char answerrrr;
	showroom show1;
	string s1;
	honda <string> h1;
	string s2;
	hyundai <string> hy1;
	KIA <string> kia1;
	suzuki <string> su1;
	showroom q1;
	corolla <string> c1;
	int mainanswer;
	buyingfunctions *ptr;

	SetConsoleTextAttribute(h, 11);
	do{

		cout << "IF YOU WANT TO GO ON A SURVEY ONLY PRESS 1" << endl;
		cout << "IF YOU WANT TO CHECK IN CARS AND BUY THEM PRESS 2" << endl;
		cin >> mainanswer;

		if (mainanswer == 1)
		{
			cout << "THE AVAIVABLE COMPANIES OF CARS IN BAHRIA MOTORS SHOWROOM ARE: " << endl <<
				"\n1: HONDA " << endl << "\n2: TOYOTA " << endl << "\n3: HYUNDAI " << endl << "\n4: SUZUKI " << endl << "\n5: KIA " << endl << endl << endl;
			cout << "\nENTER CAR BRAND:" << endl;
			cin >> s1;

			if (s1 == "honda" || s1 == "Honda")
			{
				h1.hondasfunction();
			}
			else if (s1 == "Toyota" || s1 == "toyota"){
				c1.corollasfunction();
			}
			else if (s1 == "Hyundai" || s1 == "hyundai"){
				hy1.hyundaisfunction();
			}
			else if (s1 == "suzuki" || s1 == "Suzuki"){
				su1.suzukisfunction();
			}
			else if (s1 == "KIA" || s1 == "kia"){
				kia1.KIAsfunction();
			}
			else  {
				cout << "We dont deal in such " << s1 << "company please enter the given ones only. " << endl;
			}
		}

		else if (mainanswer == 2)
		{
			cout << "THE AVAIVABLE COMPANIES OF CARS IN BAHRIA MOTORS SHOWROOM ARE: " << endl <<
				"\n1: HONDA " << endl << "\n2: TOYOTA " << endl << "\n3: HYUNDAI " << endl << "\n4: SUZUKI " << endl << "\n5: KIA " << endl << endl << endl;
			cout << "\nENTER CAR BRAND:" << endl;
			cin >> s2;
			if (s2 == "honda" || s2 == "Honda")
			{
				ptr = &h1;
				ptr->buyingfunc();

			}
			else if (s2 == "Toyota" || s2 == "toyota"){
				ptr = &c1;
				ptr->buyingfunc();
			}
			else if (s2 == "Hyundai" || s2 == "hyundai"){
				ptr = &hy1;
				ptr->buyingfunc();
			}
			else if (s2 == "suzuki" || s2 == "Suzuki"){
				ptr = &su1;
				ptr->buyingfunc();
			}
			else if (s2 == "KIA" || s2 == "kia"){
				ptr = &kia1;
				ptr->buyingfunc();
			}
			else {
				cout << "We dont deal in such " << s2 << "company please enter the given ones only. " << endl;
			}

		}
		cout << "IF YOU WISH TO CONTINUE SURVEYING/BUYING PLEASE PRESS Y " << endl;
		cin >> answerrrr;

	} while (answerrrr == 'y' || answerrrr == 'Y');
	cout << "THANK YOU FOR SHOOPING HERE " << endl;

	system("pause");


}