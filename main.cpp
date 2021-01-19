#include <iostream>
#include <string>
#include <vector>


using std::cout;
using std::endl;


std::vector<std::string> make_grlex(const std::vector<std::string>& grlex_vec)
{
	std::vector<std::string> ret_vec(grlex_vec.begin(), grlex_vec.end());

	std::vector<std::string>::iterator it;
	bool swap = true;
	while (swap)
	{
		swap = false;
		for (it = ret_vec.begin(); it != ret_vec.end() - 1; ++it)
		{
			auto first = it;
			auto second = (it + 1);

			if (first->size() > second->size())
			{
				std::iter_swap(first, second);
				swap = true;
			}
		}
	}

	for (it = ret_vec.begin(); it != ret_vec.end() - 1; ++it)
	{
		auto first = it;
		auto second = (it + 1);

		if (first->size() == second->size())
		{
			if (!std::lexicographical_compare(first->begin(), first->end(), second->begin(), second->end()))
				std::iter_swap(first, second);
		}
	}

	return ret_vec;
}


int main()
{
	std::vector<std::string> make_me_grlex{ "this", "is", "a", "small", "test" }; // { "a", "is", "test", "this", "small" };
	
	puts("Grlex Results:");
	for (auto& i : make_grlex(make_me_grlex))
	{
		cout << i << endl;
	}

	return 0;
}
