# Student Management System


## Project Overview

The **Student Management System** is a C++ console application that simulates the registration process for students in various courses within a university.  
The system supports different types of courses (Normal and Summer courses) and different types of students (General Program Students and Special Program Students).  
Each student can register for up to six courses, and the system ensures that the registration process adheres to certain constraints, such as student level and course availability.

---

## Classes Overview

- **Course**: Abstract base class representing a course. Derived classes implement the `generateCode()` method.  
- **NormalCourse**: Represents standard courses offered during regular semesters.  
- **SummerCourse**: Represents courses offered during the summer semester.  
- **Rational**: Encapsulates rational numbers with arithmetic operations and simplification.  
- **Student**: Abstract base class representing a student, managing course registration and grade storage.  
- **GeneralProgramStudent**: Derived from Student representing general program students.  
- **SpecialProgramStudent**: Derived from Student representing special program students.  
- **CourseList**: Utility class to manage all available courses and provide search functionality.  

---

## Features

### Student Management
- **Dual Program Support**: Handle both general and special program students  
- **Differentiated Registration Rules**: Unique registration processes for each student type  
- **Level-based Management**: Organize students by academic level (1-4)  

### Course System
- **Multiple Course Types**: Support for both normal and summer courses  
- **Automatic Code Generation**: Intelligent course code creation based on type and level  
- **Course Catalog**: Comprehensive list of available courses with search functionality  

### GPA Calculation System
- **Precision Grading**: Advanced GPA calculation using rational numbers for exact results  
- **4.0 Scale Conversion**: Accurate conversion from percentage scores to standard GPA scale  
- **Weighted Average**: Credit hour-based calculation for precise academic assessment  
- **Transcript Generation**: Complete academic performance reporting  

### Tuition Management
- **Flexible Pricing Models**:  
  - General Program: Level-based fixed tuition (Level × 1000 EGP)  
  - Special Program: Credit hour-based pricing (Hours × 500 EGP)  
- **Automatic Expense Calculation**: Instant tuition calculation upon registration  
- **Financial Summary**: Comprehensive cost breakdown for each student  

### Course Registration
- **Intelligent Validation**: Level-based course eligibility checking  
- **Capacity Management**: Maximum 6 courses per student limit enforcement  
- **Prerequisite Checking**: Automated course requirement validation  
- **Multiple Registration Methods**: Different processes for different student types  

### Rational Number Handling
- **Fraction Precision**: Exact grade representation using numerator/denominator  
- **Mathematical Operations**: Full arithmetic support (addition, subtraction, multiplication, division)  
- **Automatic Simplification**: Fractions reduced to lowest terms automatically  
- **Flexible Input**: Support for both fraction and percentage input formats  

### Search & Validation
- **Course Search**: Find courses by code with instant results  
- **Level Validation**: Prevent registration for courses above student level  
- **Availability Checking**: Ensure courses are available before registration 
---

## OOP Concepts Applied

- **Encapsulation**: Classes encapsulate their data and provide public methods (e.g., `Rational` class).  
- **Inheritance**: `NormalCourse` and `SummerCourse` inherit from `Course`.  
- **Polymorphism**: Virtual methods like `generateCode()` are overridden in derived classes.  
- **Abstraction**: Abstract classes `Course` and `Student` define interfaces for derived classes.  

---

## SOLID Principles Applied

- **Single Responsibility Principle (SRP)**: Each class has a single responsibility (e.g., `Rational` handles rational numbers, `CourseList` handles course list).  
- **Open/Closed Principle (OCP)**: New courses or students can be added by extending base classes.  
- **Liskov Substitution Principle (LSP)**: Derived class objects can replace base class objects where expected.  
- **Interface Segregation Principle (ISP)**: Minimal, specific interfaces in `Course` and `Student`.  
- **Dependency Inversion Principle (DIP)**: High-level modules depend on abstractions, not low-level modules.  

---

## Future Enhancements
- **Database Integration**: Persistent storage for student and course data.  
- **Graphical User Interface**: Modern GUI for improved user experience.  
- **Additional Student/Course Types**: Expanded system capabilities.  
- **Advanced Reporting & Analytics**: Comprehensive data analysis features.  
---
