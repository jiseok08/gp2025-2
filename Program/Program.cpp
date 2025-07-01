#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너입니다.

#pragma region vector container

	// std::vector<int> vector;
	// 
	// vector.reserve(8);
	// 
	// vector.push_back(10);
	// vector.push_back(20);
	// vector.push_back(30);
	// vector.push_back(40);
	// vector.push_back(50);
	// 
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << endl;
	// }
	// 
	// vector.clear();
	// 
	// cout << "Vector의 Size의 값 : " << vector.size() << endl;
	// cout << "Vector의 Capacity의 값 : " << vector.capacity() << endl;
	// 
	// cout << vector.capacity() << endl;

#pragma endregion

#pragma region list container

	std::list<int> list;
	list.push_back(20);
	list.push_back(30);
	list.push_front(10);

	list.pop_front();

	for (int data : list)
	{
		cout << data << ' ';
	}

#pragma endregion


#pragma endregion


	return 0;
}