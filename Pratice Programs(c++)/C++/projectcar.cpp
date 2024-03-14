#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    bool available;

public:
    Car(string _make, string _model, int _year) : make(_make), model(_model), year(_year), available(true) {}

    string getMake() {
        return make;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    bool isAvailable() {
        return available;
    }

    void rentCar() {
        available = false;
    }

    void returnCar() {
        available = true;
    }
};

class CarRentalSystem {
private:
    vector<Car> cars;

public:
    void addCar(string make, string model, int year) {
        Car newCar(make, model, year);
        cars.push_back(newCar);
    }

    void displayAvailableCars() {
        cout << "Available Cars:\n";
        for (const auto &car : cars) {
            if (car.isAvailable()) {
                cout << car.getYear() << " " << car.getMake() << " " << car.getModel() << endl;
            }
        }
    }

    void rentCar(int carIndex) {
        if (carIndex >= 0 && carIndex < cars.size()) {
            if (cars[carIndex].isAvailable()) {
                cars[carIndex].rentCar();
                cout << "You have rented the car: " << cars[carIndex].getYear() << " " << cars[carIndex].getMake() << " " << cars[carIndex].getModel() << endl;
            } else {
                cout << "Car is not available for rent." << endl;
            }
        } else {
            cout << "Invalid car index." << endl;
        }
    }

    void returnCar(int carIndex) {
        if (carIndex >= 0 && carIndex < cars.size()) {
            cars[carIndex].returnCar();
            cout << "You have returned the car: " << cars[carIndex].getYear() << " " << cars[carIndex].getMake() << " " << cars[carIndex].getModel() << endl;
        } else {
            cout << "Invalid car index." << endl;
        }
    }
};

int main() {
    CarRentalSystem rentalSystem;

    // Adding cars to the system
    rentalSystem.addCar("Toyota", "Corolla", 2020);
    rentalSystem.addCar("Honda", "Civic", 2019);
    rentalSystem.addCar("Ford", "Fusion", 2021);

    // Displaying available cars
    rentalSystem.displayAvailableCars();

    // Renting a car
    rentalSystem.rentCar(0);

    // Displaying available cars after renting
    rentalSystem.displayAvailableCars();

    // Returning a car
    rentalSystem.returnCar(0);

    // Displaying available cars after returning
    rentalSystem.displayAvailableCars();

    return 0;
}
