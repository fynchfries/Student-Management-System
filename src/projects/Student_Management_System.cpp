#include <iostream>
#include <string>

struct Student {
  //Data Members
  int id;
  std:: string name;

  double programming;
  double database;
  double mathematics;

  //Member function
  double calculateAverage(){
    const double Total_Grade = 3;
    return (programming + database + mathematics) / Total_Grade;
  }
  //Get the student grade status depending of its average
  std:: string getStatus(){
    double average = calculateAverage();
    return (average >= 75) ? "Passed" : "Failed";
  }

  void display(){
    std :: cout << "-------------------\n";
    std :: cout << "ID: " << id << "\n";
    std :: cout << "Name: " << name << "\n";
    std :: cout << "Programming: " << programming  << "\n";
    std :: cout << "Database: " << database  << "\n";
    std :: cout << "Mathematics: " << mathematics  << "\n";
  }

  void displayReport(){
    // TODO: Display the student's information
    display();
    // TODO: Display the average
    std:: cout << calculateAverage();
    // TODO: Display the status
    std:: cout << getStatus();
  }
};

int main (){
  Student student;

    // TODO: Ask the user for the student's information
  std:: cout << "---------------------\n";
  std:: cout << "Enter you ID: \n";
  std:: cin >> student.id;
  std:: cout << "Enter your Name: \n";
  std:: cin >> student.name;
  std:: cout << "Enter your Grade in Programming: \n";
  std:: cin >> student.programming;
  std:: cout << "Enter your Grade in Database: \n";
  std:: cin >> student.database;
  std:: cout << "Enter your Grade in Mathematics: \n";
  std:: cin >> student.mathematics;
    // TODO: Display the student's information
  student.display();
  student.displayReport();

  return 0;
}
