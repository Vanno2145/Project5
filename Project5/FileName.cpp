#include <iostream>
#include <string>

using namespace std;

class Car {
	string model;
	string color;
	string country;
	double price;
	int year;
public:
	Car() {
		year = 0;
		model = "";
		color = "";
		country = "";
		price = 0;
	}
	Car(string mod, string col, string coun, double pr, int ye) {
		year = ye;
		model = mod;
		color = col;
		country = coun;
		price = pr;
	}

	void Init() {
		string mod;
		cout << "Enter model: ";
		cin >> mod;
		model = mod;

		string col;
		cout << "Enter color: ";
		cin >> col;
		color = col;

		string coun;
		cout << "Enter country: ";
		cin >> coun;
		country = coun;

		double p;
		cout << "Enter price: ";
		cin >> p;
		price = p;

		int y;
		cout << "Enter year: ";
		cin >> y;
		year = y;
	}

	string getModel() {
		return model;
	}
	string getColor() {
		return color;
	}
	string getCountry() {
		return country;
	}
	double getPrice() {
		return price;
	}
	int getYear() {
		return year;
	}

	string setModel(string m) {
		model = m;
	}
	string setColor(string c) {
		color = c;
	}
	string setCountry(string c) {
		country = c;
	}
	double setPrice(double p) {
		price = p;
	}
	int setYear(int y) {
		year = y;
	}
	
};

ostream& operator<<(ostream& os, Car& obj)
{
	os << obj.getModel() << "\t" << obj.getColor() << "\t" << obj.getCountry() << "\t" <<
		obj.getPrice() << "\t" << obj.getYear() << endl;
	return os;
}

int main() {
	Car obj1;
	obj1.Init();

	cout << obj1;
}