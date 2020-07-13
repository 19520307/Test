#pragma once
#include<string>
#include"Point.h"
#include <iostream>
using namespace std;
class QuanCo
{
protected:
	string TenQuanCo;
	int ThuTuCuaQuanCo;
	Point* ViTri;
public:
	QuanCo();
	virtual void DuongDi() = 0;
	virtual Point* getVitri()
	{
		return NULL;
	}
	virtual int TTCC()
	{
		return ThuTuCuaQuanCo;
	}
};
class Tuong :public QuanCo
{
public:
	Tuong();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
class Si :public QuanCo
{

public:
	Si();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
class Tuong1 :public QuanCo
{
public:
	Tuong1();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
class Xe :public QuanCo
{
public:
	Xe();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
class Ma :public QuanCo
{
public:
	Ma();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
class Phao :public QuanCo
{
public:
	Phao();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
class Tot :public QuanCo
{
public:
	Tot();
	void DuongDi();
	Point* getVitri();
	int TTCC();
};
QuanCo::QuanCo()
{
	TenQuanCo = "";
	ThuTuCuaQuanCo = 0;
}
Tuong::Tuong() :QuanCo()
{
	TenQuanCo = "Tuong";
	ThuTuCuaQuanCo = 1;
	ViTri = new Point[2];
	ViTri[0].setPoint(1, 5);
	ViTri[1].setPoint(10, 5);
}

void Tuong::DuongDi()
{
	cout << "Cach di cua quan Tuongs  : " << endl;
	cout << "Di tung o mot , di ngang hoac doc . Tuongs luon phai o trong pham vi cung va khong duoc ra ngoai  " << endl;
	cout << "Cung o day tuc la hinh vuong 2X2 duoc danh dau bang duong cheo hinh chu X " << endl;

}

Point* Tuong::getVitri()
{
	return ViTri;

}

Si::Si() :QuanCo()
{
	TenQuanCo = "Si";
	ThuTuCuaQuanCo = 2;
	ViTri = new Point[4];
	ViTri[0].setPoint(1, 4);
	ViTri[1].setPoint(1, 6);
	ViTri[2].setPoint(10, 4);
	ViTri[3].setPoint(10, 6);
}
Point* Si::getVitri()
{
	return ViTri;
}
void Si::DuongDi()
{
	cout << "Di xeo 1 o moi nuoc. Si luon luon phai o trong cung nhu Tuong" << endl;
}
Tuong1::Tuong1() :QuanCo()
{
	TenQuanCo = "Tuongj";
	ThuTuCuaQuanCo = 3;
	ViTri = new Point[4];
	ViTri[0].setPoint(1, 3);
	ViTri[1].setPoint(1, 7);
	ViTri[2].setPoint(10, 3);
	ViTri[3].setPoint(10, 7);
}

void Tuong1::DuongDi()
{
	cout << " Di cheo 2 o (ngang 2 va doc 2) cho moi nuoc di. Tuong chi duoc phep o mot" << endl;
	cout << " ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong.Nuoc di cua" << endl;
	cout << " tuong se khong hop le khi co mot quan co nam chan giua duong di." << endl;
}
Point* Tuong1::getVitri()
{
	return ViTri;
}
Xe::Xe() :QuanCo()
{
	TenQuanCo = "Xe";
	ThuTuCuaQuanCo = 4;
	ViTri = new Point[4];
	ViTri[0].setPoint(1, 1);
	ViTri[1].setPoint(1, 9);
	ViTri[2].setPoint(10, 1);
	ViTri[3].setPoint(10, 9);
}

void Xe::DuongDi()
{
	cout << "Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di" << endl;
	cout << "den diem den." << endl;
}
Point* Xe::getVitri()
{
	return ViTri;
}
Ma::Ma() :QuanCo()
{
	TenQuanCo = "Ma";
	ThuTuCuaQuanCo = 5;
	ViTri = new Point[4];
	ViTri[0].setPoint(1, 2);
	ViTri[1].setPoint(1, 8);
	ViTri[2].setPoint(10, 2);
	ViTri[3].setPoint(10, 8);
}

void Ma::DuongDi()
{
	cout << "Di ngang 2 o va doc 1 o (hay doc 2 o va ngang 1 o) cho moi nuoc di. Neu co" << endl;
	cout << " quan nam ngay ben canh ma va can duong ngang 2 (hay duong doc 2), ma bi can khong" << endl;
	cout << " duoc di duong do." << endl;
}
Point* Ma::getVitri()
{
	return ViTri;
}
Phao::Phao() :QuanCo()
{
	TenQuanCo = "Phao";
	ThuTuCuaQuanCo = 6;
	ViTri = new Point[4];
	ViTri[0].setPoint(3, 2);
	ViTri[1].setPoint(3, 8);
	ViTri[2].setPoint(8, 2);
	ViTri[3].setPoint(8, 8);
}

void Phao::DuongDi()
{
	cout << "Di ngang va doc giong nhu xe.Diem khac biet la neu phao muon an quan, phao" << endl;
	cout << " phai nhay qua dung 1 quan nao do.Khi khong an quan, tat ca nhung diem tu cho di den" << endl;
	cout << " cho den phai khong co quan can." << endl;

}
Point* Phao::getVitri()
{
	return ViTri;
}
Tot::Tot() :QuanCo()
{
	TenQuanCo = "Tot";
	ThuTuCuaQuanCo = 7;
	ViTri = new Point[10];
	ViTri[0].setPoint(4, 1);
	ViTri[1].setPoint(4, 3);
	ViTri[2].setPoint(4, 5);
	ViTri[3].setPoint(4, 7);
	ViTri[4].setPoint(4, 9);
	ViTri[5].setPoint(7, 1);
	ViTri[6].setPoint(7, 3);
	ViTri[7].setPoint(7, 5);
	ViTri[8].setPoint(7, 7);
	ViTri[9].setPoint(7, 9);

}

void Tot::DuongDi()
{
	cout << "Di mot o moi nuoc.Neu tot chua vuot qua song, no chi co the di thang tien.Khi" << endl;
	cout << " da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc." << endl;
}
Point* Tot::getVitri()
{
	return ViTri;
}
int Tuong::TTCC()
{
	return ThuTuCuaQuanCo;
}
int Si::TTCC()
{
	return ThuTuCuaQuanCo;
}
int Tuong1::TTCC()
{
	return ThuTuCuaQuanCo;
}
int Ma::TTCC()
{
	return ThuTuCuaQuanCo;
}
int Xe::TTCC()
{
	return ThuTuCuaQuanCo;
}int Phao::TTCC()
{
	return ThuTuCuaQuanCo;
}int Tot::TTCC()
{
	return ThuTuCuaQuanCo;
}