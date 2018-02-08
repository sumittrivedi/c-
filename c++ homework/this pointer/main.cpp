#include<iostream>
using namespace std;

class person
{
    string Name;
    int Age;

	public:
    	person(string PName, int PAge)
    	{
        	Name = PName;
        	Age = PAge;
    	}

    	person Elder(person OtherPerson)
    	{
        	if(Age > OtherPerson.Age)
                return *this;
                /* Returning the invoking object, that is the object
                representing Steve in this case */
        	else
                return OtherPerson;
    	}

		friend ostream & operator << (ostream & TempOut, person & TempPerson);
    	// The << operator can be overloaded only as a friend
};

ostream & operator << (ostream & TempOut, person & TempPerson)
/* The overloaded operator must be passed as a reference
and must return a reference */
{
    TempOut << "The person " << TempPerson.Name << " is ";
    TempOut << TempPerson.Age << " years old \n";
    return TempOut;
}

int main ()
{
	person Amit("Amit Kumar", 25);
    person Ananya("Ananya Chauhan", 20);
    person BigBrother = Amit.Elder(Ananya);
    cout << BigBrother;
return 0;
}
