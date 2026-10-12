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
    std:: cout << "Average: "<< calculateAverage() << "\n";
    // TODO: Display the status
    std:: cout << "Status: " << getStatus() << "\n";
  }
};

int main (){
  Student student;
  Student students[3];

    // TODO: Ask the user for the student's information

    for (int i = 0; i < 3; i++) {
        std:: cout << "Student#: " << i + 1;

        std:: cout << "Enter your ID: \n";
        std:: cin >> students[i].id;

        std:: cout << "Enter your Name: \n";
        std:: cin >> students[i].name;

        std:: cout << "Enter your Grade in Programming: \n";
        std:: cin >> students[i].programming;

        std:: cout << "Enter your Grade in Database: \n";
        std:: cin >> students[i].database;

        std:: cout << "Enter your Grade in Mathematics: \n";
        std:: cin >> students[i].mathematics;
    };


    // TODO: Display the student's information
  student.display();
  student.displayReport();

  return 0;
}
