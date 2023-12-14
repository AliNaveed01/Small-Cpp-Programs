### Small C++ Programs for Fundamentals of coding

# Small CPP Programs Repository

This repository houses small C++ programs, including assignments and labs from the first three semesters. The content covers programming fundamentals, Object-Oriented Programming (OOP), and Data Structures concepts.

## Installation and Execution Guide

### 1. Install Visual Studio

1. **Download Visual Studio:**
   Download and install Visual Studio from [Visual Studio Downloads](https://visualstudio.microsoft.com/downloads/).

2. **Install C++ Workload:**
   During installation, make sure to select the "Desktop development with C++" workload.

### 2. Run C++ Code

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/AliNaveed01/small-cpp-programs.git
   cd small-cpp-programs
   ```

2. **Open the Code in Visual Studio:**
   - Open Visual Studio.
   - Select "File" > "Open" > "Project/Solution" and choose the C++ program's `.sln` file.

3. **Build and Run:**
   - Build the project by selecting "Build" > "Build Solution."
   - Run the program by pressing `F5` or selecting "Debug" > "Start Debugging."

4. **View Output:**
   - The program output will be displayed in the console.

### Sample C++ Program

```cpp
#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Input values
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate and display the sum
    int result = add(num1, num2);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
```

This is a simple C++ program that takes two numbers as input, adds them, and displays the result.

## Contributing

Contributions to this repository are welcome. If you have additional programs, improvements, or corrections, feel free to open an issue or submit a pull request.

