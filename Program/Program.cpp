#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
#pragma region unordered set

	unordered_set<const char *> unordered_set;

	unordered_set.max_load_factor(2.0);

	unordered_set.insert("James");
	unordered_set.insert("Harry");
	unordered_set.insert("Bob");
	unordered_set.insert("Bob1");
	unordered_set.insert("Bob2");
	unordered_set.insert("Bob3");
	unordered_set.insert("Bob4");
	unordered_set.insert("Bob5");
	unordered_set.insert("Bob6");
	unordered_set.insert("Bob7");
	

	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;

	for (const char * element : unordered_set)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}