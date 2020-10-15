#include <iostream>
#include <string>
using namespace std;

int main()

{
	string answer;

	do
	{
		cout << "Please enter your ID: \n";
		bool firstCheck = true;
		bool isItNumber = false;
		bool secondCheck = false;
		bool thirdCheck = false;
		int count = 0;
		string id;
		cin >> id;


		for (int i = 0; i < id.size(); i++)
		{

			if (!isdigit(id[i]))
			{
				cout << "Please enter whole positive numbers only!" << endl;
				firstCheck = false;
				break;
			}
		}

		if (firstCheck == true)
		{
			isItNumber = true;
		}
				

		for (int i = 0; i < id.size(); i++)
		{

			if (id.size() != 10)
			{
				cout << "Please enter exactly 10 digits!" << endl;
				break;
			}
			else
			{
				secondCheck = true;
			}
		}

		for (int i = 0; i < id.size(); i++)
		{
			for (int j = i + 1; j < id.size(); j++)
			{
				if (id[i] == id[j])
				{
					count++;
				}

			}
			if (count == 9)
			{
				cout << "Please do not enter consist of 10 identical digits!" << endl;
				break;
			}

			else
			{
				thirdCheck = true;
			}
				
		}

		if (isItNumber == true and secondCheck == true and thirdCheck == true)
		{
			cout << "Thank you!\nYour ID is accepted!" << endl;
		}
		else
		{
			cout << "Do you want to try again? (y/n)" << endl;
			cin >> answer;
		}			
	}

	while ((answer == "y") || (answer == "Y"));

	return 0;

}