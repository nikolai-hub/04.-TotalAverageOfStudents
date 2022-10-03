#include <iostream>
#include <vector>

class Student {
private:
	std::string name;
	std::string surname;
	double average;
public:
	void input(std::istream& istr);
	 const std::string& getName(void) const { return name; }
	 const std::string& getSurname(void) const { return surname;}
	 double getAverage(void) const { return average; }
	 double getTotalAverage(void) const { return average; }
	void output(std::ostream& ostr);
};

void Student::input(std::istream& istr) {
	istr >> name >> surname >> average;
}

void Student::output(std::ostream& ostr) {
	ostr << name <<" "<< surname <<" " <<average<<std::endl;
}

int main()
{
	int numberOfStudenst = 0;
	std::cin >> numberOfStudenst;
	if (numberOfStudenst <= 0)
	{
		std::cout << "Invalid input" << std::endl;
		return 0;
	}
	typedef std::vector<Student> myVec;
	myVec allStudenst(numberOfStudenst);
	double averageOfAll = 0.0;
	for (int i = 0; i < numberOfStudenst; i++)
	{
		allStudenst[i].input(std::cin);
	}
	for (int i = 0; i < numberOfStudenst; i++)
	{
		allStudenst[i].output(std::cout);
		averageOfAll += allStudenst[i].getTotalAverage();
	}

	std::cout << averageOfAll / numberOfStudenst << std::endl;

	return 0;
}
