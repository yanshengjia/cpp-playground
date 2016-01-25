//Gradebook.h Modified

#include <string>
using namespace std;

class Gradebook
{
public:
	Gradebook(string,string);
	void setCourseName(string);
	string getCourseName();
	void setTeacherName(string);
	string getTeacherName();
	void displayMessage();

private:
	string courseName;
	string teacherName;
};