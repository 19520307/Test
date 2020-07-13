#pragma once
#include"QuanCo.h"
using namespace std;
class BanCo
{
	QuanCo** a;
	int** VT;
public:
	void KhoiTao();
	void XuatBanCo();
	void Nhap();
};
void BanCo::KhoiTao()
{


	a = new  QuanCo * [7];
	for (int i = 0; i < 7; i++)
	{
		switch (i)
		{
		case 0:
			a[i] = new Tuong();
			break;
		case 1:
			a[i] = new Si();
			break;
		case 2:
			a[i] = new Tuong1();
			break;
		case 3:
			a[i] = new Xe();
			break;
		case 4:
			a[i] = new Ma();
			break;
		case 5:
			a[i] = new Phao();
			break;
		case 6:
			a[i] = new Tot();
			break;
		}
	}
	VT = new int* [11];
	for (int i = 0; i < 11; i++)
		VT[i] = new int[10];
	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 10; j++)
			VT[i][j] = 0;

	for (int i = 0; i < 7; i++)

	{
		if (i == 0)
		{
			int kx, ky;
			Point* vt = a[i]->getVitri();
			for (int j = 0; j < 2; j++)
			{
				kx = (vt + j)->getX();
				ky = (vt + j)->getY();
				VT[kx][ky] = a[i]->TTCC();
				cout << kx << " " << ky << endl;
			}
		}
		else
			if (1 <= i && i <= 5)
			{
				Point* vt = a[i]->getVitri();
				int kx, ky;
				for (int j = 0; j < 4; j++)
				{

					kx = (vt + j)->getX();
					ky = (vt + j)->getY();
					VT[kx][ky] = a[i]->TTCC();
					cout << kx << " " << ky << endl;
				}
			}
			else
			{
				Point* vt = a[i]->getVitri();
				int kx, ky;
				for (int j = 0; j < 10; j++)
				{
					kx = (vt + j)->getX();
					ky = (vt + j)->getY();
					VT[kx][ky] = a[i]->TTCC();
					cout << kx << " " << ky << endl;
				}
			}

	}

}
void BanCo::XuatBanCo()
{

	cout << "Day la Ban co ban dau " << endl;

	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 10; j++)
			if (VT[i][j] != 0) cout << VT[i][j] << " ";
			else cout << "  ";

		cout << endl;
	}

}
void BanCo::Nhap()
{
	cout << "Ban vui long chon 1 quan co : " << endl;
	cout << "1 - Tuongs / 2 - Si / 3 - Tuongj / 4 - Xe / 5 - Ma / 6 - Phao / 7 - Tot" << endl;
	int n;
	cin >> n;
	n--;
	cout << "Duong di cua quan co ban vua chon la : " << endl;
	a[n]->DuongDi();

}