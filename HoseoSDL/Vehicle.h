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
	//...... ���� �˼��մϴ� ������... ������ ��������� ������, ���� ���� ������ �ʹ� ���Ƽ� ���󰡱⵵ �ʹ� ��á���ϴ�.. ���� ������ ���� �������� ���Ǹ� ��� �Ǹ� �� ���� ������� ������ �ϰڽ��ϴ�.. ���� �˼��մϴ�.. ��
}
