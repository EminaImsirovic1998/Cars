

//Each comment in main() gives parameters to classes and gets something in return. :D

#include <iostream>
using std::string;

class AbstractCars{
	virtual void SellingCars() = 0;
};

class Cars : AbstractCars{
protected:
	string Brand;
	int YearOfManufacture;
	string Type;
	int EnginePower;
public:	
	Cars(string brand, string type, int yearofmanufacture, int enginepower){
		Brand = brand;
		Type = type;
		YearOfManufacture = yearofmanufacture;
		EnginePower = enginepower;
	}
	
	void setBrand(string brand){
		Brand = brand;
	}
	string getBrand(){
		return Brand;
	}
	
	void setType(string type){
		Type = type;
	}
	string getType(){
		return Type;
	}
	
	void setYearOfManufacture(int yearofmanufacture){
		YearOfManufacture = yearofmanufacture;
	}
	int getYearOfManufacture(){
		if(YearOfManufacture>2000)
		return YearOfManufacture;
		else
		std::cout << "The car is old." << std::endl;
	}
	
	void setEnginePower(int enginepower){
		EnginePower = enginepower;
	}
	int getEnginePower(){
		return EnginePower;
	}
	
	virtual void Driving(){
		std::cout << Brand << " is driving on highway." << std::endl;
	}
	
	void SellingCars(){
		if(YearOfManufacture>=2000)
		std::cout << Brand << " " << Type << " can still be sold." << std::endl;
		else
		std::cout << Brand << " " << Type << " cant be sold, because its too old." << std::endl;
	}
	
};

class ElectricalCars : public Cars{
private:
	int BatteryCapacity;
public:
	ElectricalCars(string brand, string type, int yearofmanufacture, int enginepower, int batterycapacity)
	:Cars(brand, type, yearofmanufacture, enginepower)
	{
		BatteryCapacity = batterycapacity;
	}
	
	void KiloWatHours(){
		std::cout << Brand << " has " << BatteryCapacity << " kWh Battery Capacity." << std::endl;
	}
	
	void Driving(){
		std::cout << "Driving with a " << Brand << " is environmentally friendly" << std::endl;
	}
};

class FuelCars : public Cars{
private:
	int FuelTank;
public:
	FuelCars(string brand, string type, int yearofmanufacture, int enginepower, int fueltank)
	:Cars(brand, type, yearofmanufacture, enginepower)
	{
		FuelTank = fueltank;
	}
	
	void Liters(){
		std::cout << Brand << " has a " << FuelTank << " liter tank." << std::endl;
	}
	
	void Driving(){
		std::cout << "Driving with a " << Brand << " it is not environmentally acceptable" << std::endl;
	}
	
};

int main() {
	/*
	Cars car1 = Cars("VW", "Tiguan", 2009, 103);
	car1.setBrand("Fiat");
	car1.setType("Punto");
	car1.setYearOfManufacture(2005);
	car1.setEnginePower(59);
	std::cout << car1.getBrand() << " " << car1.getType() << " from " << car1.getYearOfManufacture() << " has " << car1.getEnginePower() << " kW." << std::endl;
	*/
	
	
	/*
	ElectricalCars car2 = ElectricalCars("Tesla", "3 Dual Motor Long Range", 2020, 327, 75);
	car2.KiloWatHours();
	car2.Driving();
	
	FuelCars car3 = FuelCars("Fiat", "Punto", 2005, 59, 45);
	car3.Liters();
	car3.Driving();
	*/
	
	/*
	ElectricalCars car4 = ElectricalCars("Tesla", "3 Dual Motor Long Range", 2020, 327, 75);
	FuelCars car5 = FuelCars("Fiat", "Punto", 2005, 59, 45);
	Cars* p1 = &car4;
	Cars* p2 = &car5;
	p1->Driving();
	p2->Driving();
	*/
	
	/*
	Cars car6 = Cars("VW", "Polo", 1999, 54);
	car6.getYearOfManufacture();
	*/
	
	
	/*
	Cars car7 = Cars("VW", "Polo", 1999, 54);
	car7.SellingCars();
	*/
	
	return 0;
}
