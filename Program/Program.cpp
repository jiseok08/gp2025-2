#include <iostream>
#include "Packit.h"
#include "Resource.h"

using namespace std;

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 포인터입니다.

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수
	// 있도록 되어 있는 포인터입니다.

	// unique_ptr<Packit> uniquePointer = make_unique<Packit>();
	// 
	// cout << "Error Code : " << uniquePointer->Error() << endl;
	// 
	// unique_ptr<Packit> reference = std::move(uniquePointer);
	// 
	// cout << "Error Code : " << reference->Error() << endl;

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요로 하지 않을 때 
	// 자원 객체를 해제하도록 설계되어 있는 포인터입니다.

	// shared_ptr<Resource> oil = make_shared<Resource>();
	// 
	// shared_ptr<Resource> mineral = make_shared<Resource>();
	// 
	// Resource resource;
	// 
	// oil->Share(mineral);
	// mineral->Share(oil);
	// 
	// cout << "oil Reference count : " << oil.use_count() << endl;

#pragma endregion


#pragma endregion


	return 0;
}