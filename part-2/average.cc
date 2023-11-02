// Kaitlyn Cavan
// kcavan@csu.fullerton.edu
// @kcavan
// Partners: @igobybb

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cerr << "Error: At least one command line argument is required."
              << std::endl;
    return 1;
  }

  size_t num_values = arguments.size();
  // Store the size of arguments vector
  double sum = 0.0;

  // Write a for-each loop to sum (add up) all of the command line arguments.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod function.

  for (int i = 1; i < argc; i++) {
    sum += std::stod(arguments[i]);
  }

  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  if (num_values > 0) {
    double average =
        sum /
        static_cast<double>(num_values - 1);  // Perform a static cast to double
    // Use cout to print out a message of the form
    // average = *AVERAGE*
    // on its own line.
    std::cout << "average = " << average << std::endl;
  } else {
    std::cerr << "Error: No valid numbers to calculate the average."
              << std::endl;
    return 1;
  }

  return 0;
}
