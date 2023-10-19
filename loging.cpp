#include <iostream>
#include <string>

int main() {
    std::string correctEmail = "example@example.com";
    std::string correctPassword = "password123";
    std::string enteredEmail, enteredPassword;

    std::cout << "Welcome to the Login Page\n";
    std::cout << "Email: ";
    std::cin >> enteredEmail;
    std::cout << "Password: ";
    std::cin >> enteredPassword;

    if (enteredEmail == correctEmail && enteredPassword == correctPassword) {
        std::cout << "Login successful! Welcome, " << enteredEmail << "\n";
        // You can perform additional actions or redirect the user here.
    } else {
        std::cout << "Login failed. Please input the correct email and password.\n";
    }

    return 0;
}
