#include <iostream>
#include <vector>

using namespace std;



bool maxSearch(vector<int> vec, int& maxValue, int& maxIdx)
{
	bool l = false;
	for (int i = 0; i < vec.size() - 1; ++i)
	{
		if (l && vec[i + 1] > vec[i] && vec[i - 1] > vec[i])
		{
			if (vec[i] > maxValue)
			{
				maxValue = vec[i];
				maxIdx = i;
			}
		}
		else if (!l && vec[i + 1] > vec[i] && vec[i - 1] > vec[i])
		{
			l = true;
			maxValue = vec[i];
			maxIdx = i;
		}
	}
}

int main()
{

	std::cout << "Hello World!\n";
	return 0;
}
