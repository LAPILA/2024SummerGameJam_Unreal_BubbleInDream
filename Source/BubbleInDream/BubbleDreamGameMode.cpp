#include "BubbleDreamGameMode.h"

// �ʱ� ���� 0
ABubbleDreamGameMode::ABubbleDreamGameMode()
{
	MemoryPoints = 0;
}

// Called when the game starts or when spawned
void ABubbleDreamGameMode::BeginPlay()
{
	Super::BeginPlay();
}

// �޸� ���� �߰�(���� ���� �� 1�� ����ȭ)
void ABubbleDreamGameMode::AddMemoryPoint()
{
	MemoryPoints += 1;
}

// �޸� ����Ʈ Get
int32 ABubbleDreamGameMode::GetMemoryPoints() const
{
	return MemoryPoints;
}
