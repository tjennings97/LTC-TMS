//This program creates a car object, it adds 5 to the speed each time the car accelerate or subtracts 5  to the speed each time the car hit the brake
//it displays the current speed each time 

//Duong Doan

#include<iostream>
#include<string>
using namespace std;

class Car					//the class called Car
{
private:
	int year;				//Three member variables
	string make;
	int speed;

public:

	Car(int,string);	 //constructor
	void accessors();	//function that retrive information and display 
	void accelerate();	//function that add 5 to the speed for each time it gets call
	void brake();		//function that subtract 5 to the speedfor each time it gets call
		


};


Car::Car(int y, string m)
{
	year = y;
	make = m;
	speed = 0;
}

void Car::accessors()
{
	cout << "The car is " << year << " " << make << " with the current speed is " << speed << endl;
}

void Car::accelerate()
{
		speed = speed + 5;
}

void Car::brake()
{	
	
		speed -= 5;
	
}

int main()
{ 
	int year, speed;
	string make;
	cout << "Please enter the year the war was made" << endl;
	cin >> year;
	cout << "What company make the car?" << endl;
	cin >> make;
	

	Car car(year, make);

	car.accessors(); //display the information user enters with the default value speed = 0

	for (int count = 1; count <= 5; count++) 
	{
		car.accelerate();
		car.accessors();
	}

	for (int count = 1; count <= 5; count++)
	{
		car.brake();
		car.accessors();
	}
	
	return 0;
}