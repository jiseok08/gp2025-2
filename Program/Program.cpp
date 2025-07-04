#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
#pragma region unordered set

	// unordered_set<const char *> unordered_set;
	// 
	// unordered_set.max_load_factor(2.0);
	// 
	// unordered_set.insert("James");
	// unordered_set.insert("Harry");
	// unordered_set.insert("Bob");
	// unordered_set.insert("Bob1");
	// unordered_set.insert("Bob2");
	// unordered_set.insert("Bob3");
	// unordered_set.insert("Bob4");
	// unordered_set.insert("Bob5");
	// unordered_set.insert("Bob6");
	// unordered_set.insert("Bob7");
	// 
	// cout << "Load Factor : " << unordered_set.load_factor() << endl;
	// cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
	// 
	// cout << endl;
	// 
	// if (unordered_set.find("Bob") != unordered_set.end())
	// {
	// 	cout << "the data exists..." << endl;
	// }
	// else 
	// {
	// 	cout << "the data does not exist..." << endl;
	// }
	// 
	// unordered_set.erase("Bob");
	// 
	// for (const char* element : unordered_set)
	// {
	// 	cout << element << " ";
	// }

#pragma endregion

#pragma region unordered map

	// std::unordered_map<const char *, int> unordered_map;
	// 
	// unordered_map.insert({ "Infinity Edge", 2900 });
	// unordered_map.insert({ "Essence Reaver", 3100 });
	// unordered_map.insert({ "Bloodthirster", 3333 });
	// unordered_map.insert({ "Kraken Slayer", 3300 });
	// unordered_map.insert({ "Rapid Firecannon", 3400 });
	// unordered_map.insert({ "Thornmail", 3400 });
	// 
	// cout << "Load Factor : " << unordered_map.load_factor() << endl;
	// 
	// cout << "unordered_map size : " << unordered_map.size() << endl;
	// 
	// unordered_map.erase("Bloodthirster");
	// 
	// for (const auto & element : unordered_map)
	// {
	// 	cout << "Key : " << element.first << endl;
	// 	cout << "Value : " << element.second << endl;
	// 	cout << endl;
	// }
	// 
	// unordered_map.clear();
	// 
	// cout << "Load Factor : " << unordered_map.load_factor() << endl;

#pragma endregion

	// 10 6 4 8 20

	// 6 4 

	// 6 4 8 20 10

	return 0;
}