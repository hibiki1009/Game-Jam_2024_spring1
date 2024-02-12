#pragma once

#include "../Utility/Vector2D.h"

class Barrier
{
private:
	int image;		// �o���A�摜
	float life_span;// �o���A����
public:
	Barrier();
	~Barrier();

	void Draw(const Vector2D& location);// �摜����
	bool IsFinished(float speed);		// �������s�������ǂ���
};
