//fizzBuzz using maps

#include<iostream>
#include<map>
using std::cout;
using std::string;
using std::endl;

int main()
{
	int len = 100;
	std::map<int, string> fb = { {3,"Fizz"}, {5,"Buzz"}, {7,"Blob"} };
	
	for (int i = 1; i <= len; i++)
	{
		string label = "";
		for (auto const& f : fb)
		{
			if(i%f.first==0)
			{
				label.append(f.second);
			}
		}

		if (label == ""|| i == 0)
		{
			cout << i << endl;
		}
		else
		{
			cout << label << endl;
		}
	}
	system("pause");
}