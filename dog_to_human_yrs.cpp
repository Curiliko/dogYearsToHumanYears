#include <iostream>

int main() 
{
  // Initialize variable for dog's age and get age from user input
  int dog_age;
  std::cout << "Enter your dog's age: \n";
  std::cin >> dog_age;
  // The first 2 years of a dog's life equals 21 human years
  int early_years = 21;
  // Calculate dog's age in human years after the first 2 years
  int later_years = (dog_age - 2) * 4;
  // Find total age in human years
  int human_years = early_years + later_years;
  // Print result to console
  std::cout << "I am a dog named Maya and my age in human years is " << human_years << "!\n";
}