#include "PList.h"
#include "Child.h"
#include "Medic.h"
#include "Pojiloy.h"
#include "Vzrosl.h"
#include <stdlib.h>
#include <ctime>

void PList::init_list(array<int^, 2>^ type, array<int^, 2>^ risk, array<int^, 2>^ status, array<int^, 2>^ dst)
{
	int vrt[Numbers][Numbers]{}; //����������� �������������� � ���������
	srand(time(0));
	for (int i = 0; i < Numbers; i++)
	{
		for (int j = 0; j < Numbers; j++)
			vrt[i][j] = rand() % 100 + 1;
	}

	//������������ ��������� � ������������ � ������������
	for (int i = 0; i < Numbers; i++)
	{
		for (int j = 0; j < Numbers; j++)
		{
			dst[i, j] = 0;
			if (vrt[i][j] <= 15) //15% �����
			{
				Child^ p = gcnew Child();
				type[i,j] = 1;
				if (p->get_imun())
				{
					status[i,j] = 4;
					risk[i,j] = 0;
				}
				else
				{
					status[i,j] = 1;
					risk[i,j] = rand() % 30;
				}
			}
			else if (vrt[i][j] <= 25) //10% (15-25) �������������
			{
				Medic^ p = gcnew Medic();
				type[i,j] = 2;
				if (p->get_imun())
				{
					status[i,j] = 4;
					risk[i,j] = 0;
				}
				else
				{
					if (p->get_work())
						//���� �������� � "������� ����", �� ���� �������� ����, ����� - ��� � ������� �� ���� ��������
						risk[i,j] = rand() % 70;
					else
						risk[i,j] = rand() % 30;
					status[i,j] = 1;
				}
			}
			else if (vrt[i][j] <= 50) //25% (25-50) �����������
			{
				Pojiloy^ p = gcnew Pojiloy();
				type[i,j] = 3;
				if (p->get_imun())
				{
					status[i,j] = 4;
					risk[i,j] = 0;
				}
				else
				{
					if (p->get_bol ())
						//���� ����� �����������, �� ���� �������� ����
						risk[i,j] = rand() % 90;
					else
						risk[i,j] = rand() % 75;
					status[i,j] = 1;
				}
			}
			else if (vrt[i][j] <= 100) //50% ��������
			{
				Vzrosl^ p = gcnew Vzrosl();
				type[i,j] = 4;
				if (p->get_imun())
				{
					status[i,j] = 4;
					risk[i,j] = 0;
				}
				else
				{
					if (p->get_otv())
						//���� ����������������, �� ���� �������� ����
						risk[i,j] = rand() % 85;
					else
						risk[i,j] = rand() % 70;
					status[i,j] = 1;
				}

			}
		}
	}
}
