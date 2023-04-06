#include <iostream>
#include "State.h"
#include "Transition.h"

using namespace std;

int main()
{
	FState* State[4];
	FTransition* Transition[5];

	State[0] = new FState(1, "배회");
	State[1] = new FState(2, "추격");
	State[2] = new FState(3, "공격");
	State[3] = new FState(4, "죽음");

	Transition[0] = new FTransition(1, "적발견", 2);
	Transition[1] = new FTransition(2, "적놓침", 1);
	Transition[2] = new FTransition(2, "사정거리접근", 3);
	Transition[3] = new FTransition(3, "사정거리이탈", 2);
	Transition[4] = new FTransition(3, "HP없음", 4);

	int MonsterCurrentState = 3;
	std::string MonsterCondition = "HP없음";
	int MonsterNextState;

	for (int i = 0; i < 5; ++i)
	{
		if (Transition[i]->CurrentState == MonsterCurrentState &&
			Transition[i]->Condition == MonsterCondition)
		{
			MonsterNextState = Transition[i]->NextState;
		}
	}

	cout << "현재 몬스터의 상태는 " << State[MonsterCurrentState - 1]->Name;
	cout << "이고 조건은  " << MonsterCondition << "을 해서 다음에는 ";
	cout << "몬스터가  다음에는 " << State[MonsterNextState - 1]->Name ;
	cout << " 행동을 합니다. " << endl;





	return 0;
}
