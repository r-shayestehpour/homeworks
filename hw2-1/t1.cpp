#include <iostream>
#include <string>

using namespace std;

class Employee
{
	private:
		string first_name;
		string last_name;
		int monthly_salary;
	
	public:
		Employee::Employee(string firstName, string lastName, int salary)
		{
			this->first_name = firstName;
			this->last_name = lastName;
			if (salary >= 0)
				this->monthly_salary = salary;
			else
				this->monthly_salary = 0;
		}
		
		void Employee::set_first_name(string name)
		{
			this->first_name = name;
		}
		
		void Employee::set_last_name(string name)
		{
			this->last_name = name;
		}
		
		void Employee::set_monthly_salary(int salary)
		{
			if (salary >= 0)
				this->monthly_salary = salary;
			else
				this->monthly_salary = 0;
		}
		
		string Employee::get_first_name()
		{
			return this->first_name;
		}
		
		string Employee::get_last_name()
		{
			return this->last_name;
		}

		int Employee::get_monthly_salary()
		{
			return this->monthly_salary;
		}
};

int main()
{
	Employee first("afae", "rergfe", 1400);
	Employee second("rgerg", "srfhdr", 1700);
	cout << "First one's yearly salary:" << (first.get_monthly_salary() * 12) << "\n Second one's yearly salary:" << (second.get_monthly_salary() * 12);
	first.set_monthly_salary(first.get_monthly_salary() * 11 / 10)
	second.set_monthly_salary(second.get_monthly_salary() * 11 / 10)
	cout << "\nAfter the the rise: First one's yearly salary:" << (first.get_monthly_salary() * 12) << "\n Second one's yearly salary:" << (second.get_monthly_salary() * 12);
	system("PAUSE");
	return 0;
}