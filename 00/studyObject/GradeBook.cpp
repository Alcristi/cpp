#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
    public:
        void displayMessage()
        {
            cout << "Welcome to the Grade Book!\n" << getCourseName() << "!" << endl;
        }

        void setCourseName(string name){
            courseName = name;
        }

        string getCourseName(){
            return courseName;
        }

    private:
        string courseName;
};

int main(void)
{
    GradeBook myGradeBook;
    string nameOfCourse;

    cout << "Inital course name is:" << myGradeBook.getCourseName() << endl;    

    cout<< "Please enter the course name: " << endl;
    
    getline(cin,nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;

    myGradeBook.displayMessage();




    return 0;
}
