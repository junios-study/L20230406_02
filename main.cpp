#include <iostream>
#include "State.h"
#include "Transition.h"

using namespace std;

int main()
{
	FState* State[4];
	FTransition* Transition[5];

	State[0] = new FState(1, "��ȸ");
	State[1] = new FState(2, "�߰�");
	State[2] = new FState(3, "����");
	State[3] = new FState(4, "����");

	Transition[0] = new FTransition(1, "���߰�", 2);
	Transition[1] = new FTransition(2, "����ħ", 1);
	Transition[2] = new FTransition(2, "�����Ÿ�����", 3);
	Transition[3] = new FTransition(3, "�����Ÿ���Ż", 2);
	Transition[4] = new FTransition(3, "HP����", 4);

	int MonsterCurrentState = 3;
	std::string MonsterCondition = "HP����";
	int MonsterNextState;

	for (int i = 0; i < 5; ++i)
	{
		if (Transition[i]->CurrentState == MonsterCurrentState &&
			Transition[i]->Condition == MonsterCondition)
		{
			MonsterNextState = Transition[i]->NextState;
		}
	}

	cout << "���� ������ ���´� " << State[MonsterCurrentState - 1]->Name;
	cout << "�̰� ������  " << MonsterCondition << "�� �ؼ� �������� ";
	cout << "���Ͱ�  �������� " << State[MonsterNextState - 1]->Name ;
	cout << " �ൿ�� �մϴ�. " << endl;





	return 0;
}
