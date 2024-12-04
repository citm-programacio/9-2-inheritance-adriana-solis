//Buildings of Rome
//Implement the class Building with the string name as protected member, a constructor that receives a string nameand a public method getName() that returns the name of the building.
// 
//Implement the class Warehouse derived from Building that contains :
//The members wood, rocksand wheat(integers) that cannot be accessed from outside the class
//A constructor that receives a string name, and three integers(wood, rocksand wheat).
//A public method printResources() that prints on the screen the value of the members of the class (in the same way as it can be seen in the screenshot of the next page).
// 
//Implement the class House derived from Building that contains :
//The members floors, inhabitantsand servants(integers) that cannot be accessed from outside the class
//A constructor that receives a string name, and three integers(floors, inhabitantsand servants).
//A public method printHouse() that prints on the screen the value of the members of the class.
// 
//Implement the class Temple derived from Building that contains :
//The members god(string) and priests(integer) that cannot be accessed from outside the class
//A constructor that receives a string name, a string godand the number of priests of the temple(an integer called priest).
//A public method printTemple() that prints on the screen the value of the members of the class.
//Your program must create one of each classand use their print function to display the data

#include <iostream>
#include <string>
using namespace std; 

class Building
{
private:
	string name;
public:
	Building(const string& name) : name(name){}

	string getName()
	const {
		return name;
	}
};

class Warehouse : public Building
{
private:
	int wood;
	int rocks;
	int wheat;
public:
	Warehouse(const string& name, int wood, int rocks, int wheat) 
		: Building(name), wood(wood), rocks(rocks), wheat(wheat) {}

	void printResources()
	{
		cout << "Warehouse " << getName() << " has: " << endl;
		cout << wood << " units of Wood" << endl;
		cout << rocks << " Rocks" << endl;
		cout << wheat << " units of Wheat" << endl;
	}
};

class House : public Building
{
private:
	int floors, inhabitants, servants;
public:
	House(const string& name, int floors, int inhabitants, int servants)
		: Building(name), floors(floors), inhabitants(inhabitants), servants(servants) {}

	void printHouse()
	{
		cout << "House " << getName() << " has: " << endl;
		cout << floors << " floors" << endl;
		cout << inhabitants << " inhabitants" << endl;
		cout << servants << " servants" << endl;
	}
};
class Temple : public Building
{
private:
	string god;
	int priests;
public:
	Temple(const string& name, const string& god, int priests)
		: Building(name), god(god), priests(priests) {}

	void printTemple()
	{
		cout << "Temple " << getName() << " is: " << endl;
		cout << "Dedicated to: " << god << endl;
		cout << "Has " << priests << " priests" << endl;
	}

};
int main()
{
	Warehouse w("Lucia", 4, 7, 13);
	House h("Pepe", 6, 3, 7);
	Temple t("Marcos", "Dana", 69);

	w.printResources();
	h.printHouse();
	t.printTemple();
}

