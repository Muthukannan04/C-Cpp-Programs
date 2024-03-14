#include <iostream>
#include <vector>
#include <string>

class Car {
private:
    std::string carModel;
    std::string carNumber;
    bool available;

public:
    Car(const std::string& model, const std::string& number) : carModel(model), carNumber(number), available(true) {}

    bool isAvailable() const {
        return available;
    }

    void setAvailability(bool status) {
        available = status;
    }

    std::string getModel() const {
        return carModel;
    }

    std::string getNumber() const {
        return carNumber;
    }
};

class CarRentalSystem {
private:
    std::vector<Car> cars;

public:
    void addCar(const std::string& model, const std::string& number) {
        cars.emplace_back(model, number);
    }

    void displayAvailableCars() const {
        std::cout << "Available Cars:\n";
        for (const auto& car : cars) {
            if (car.isAvailable()) {
                std::cout << "Model: " << car.getModel() << ", Number: " << car.getNumber() << std::endl;
            }
        }
    }

    void rentCar(const std::string& number) {
        for (auto& car : cars) {
            if (car.getNumber() == number && car.isAvailable()) {
                car.setAvailability(false);
                std::cout << "Car " << car.getModel() << " with number " << car.getNumber() << " rented successfully.\n";
                return;
            }
        }
        std::cout << "Car not available or not found.\n";
    }

    void returnCar(const std::string& number) {
        for (auto& car : cars) {
            if (car.getNumber() == number && !car.isAvailable()) {
                car.setAvailability(true);
                std::cout << "Car " << car.getModel() << " with number " << car.getNumber() << " returned successfully.\n";
                return;
            }
        }
        std::cout << "Car not rented or not found.\n";
    }
};

int main() {
    CarRentalSystem rentalSystem;

    // Adding cars to the system
    rentalSystem.addCar("Toyota", "ABC123");
    rentalSystem.addCar("Honda", "XYZ456");
    rentalSystem.addCar("Tesla", "DEF789");

    // Display available cars
    rentalSystem.displayAvailableCars();

    // Rent a car
    rentalSystem.rentCar("XYZ456");

    // Display available cars after renting
    rentalSystem.displayAvailableCars();

    // Return a rented car
    rentalSystem.returnCar("XYZ456");

    // Display available cars after returning
    rentalSystem.displayAvailableCars();

    return 0;
}