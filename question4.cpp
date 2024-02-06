#include <iostream>
#include <string>

class Student
{
    private:
    std::string name;
    std::string className;;
    int rollNumber;
    float marks;
    
    public:
    Student(const std::string& n,const std::string& cls,int roll, float m)
    : name(n), className(cls), rollNumber(roll), marks(m){}

    char calculateGrade() const 
    {
        if (marks >= 90)
        {
            return 'A';
        }else if (marks >= 80)
        {
            return 'B';
        }else if (marks >= 70)
        {
            return 'C';
        }else if (marks >=60)
        {
            return 'D';
        
        }else
        {
            return 'F';
        }
    }

    void displayInformation() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
    };

    int main()
    {
        Student student1 ("John","Class 10",101,87.5);
        student1.displayInformation();

        return 0;
    }
    
