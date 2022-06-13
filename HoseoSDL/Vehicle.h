#pragma once
#include "main.h"
#include "Vector2D.h"

class Vehicle{
	float x;
	float y;
	int maxSpeed = 6;
	float maxForce = 0.4;
	int r = 16;

	Vector2D postion;
	Vector2D vel;
	Vector2D acc;
	//...... 정말 죄송합니다 교수님... 열심히 배워보려고 했지만, 저의 지금 수준이 너무 낮아서 따라가기도 너무 벅찼습니다.. 다음 개강때 만약 교수님의 강의를 듣게 되면 더 나은 모습으로 오도록 하겠습니다.. 정말 죄송합니다.. ㅜ
}
