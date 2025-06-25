#include <iostream>
#include "Vector2.h"

using namespace std;



int main()
{
#pragma region 캡슐화
	// 객체의 상태와 그 상태를 조작하는 기능을 하나로 합친 다음,
	// 객체 외부에서 직접 접근하지 못하도록 제한하는 기능입니다.

	Vector2 vector1;
	Vector2 vector2; 

	vector1.Coordinate(1,1);

	vector2.Coordinate(2,3);

	vector2++;
	vector2++;
	vector2++;
	vector2--;

	Vector2 direction = vector1 + vector2;
	

	cout << direction.X() << ' ' << direction.Y();

#pragma endregion


	return 0;
}