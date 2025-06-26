#include <iostream>

using namespace std;

class Packit
{
private:
	int errorCode = -9999;

public:
	Packit()
	{
		cout << "Created Packit" << endl;
	}

	~Packit()
	{
		cout << "Delete Packit" << endl;
	}
};

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 포인터입니다.

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수
	// 있도록 되어 있는 포인터입니다.

	unique_ptr<Packit> uniquePointer = make_unique<Packit>();



#pragma endregion

#pragma endregion


	return 0;
}