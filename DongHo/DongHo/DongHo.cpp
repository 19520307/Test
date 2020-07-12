#include <iostream>
using namespace std;
#include <string>
class Time {
private:
	int h, m, s;
public:
	void Nhap() {
		cin >> h >> m >> s;
		h = abs(h);
		m = abs(m);
		s = abs(s);
		int Tong = h * 3600 + m * 60 + s;
		//cout << Tong << endl;
		h = (Tong / 3600) % 24;
		Tong = Tong % 3600;
		m = Tong / 60;
		Tong = Tong % 60;
		s = Tong % 60;
	}
	void Xuat() {
		cout << h << " " << m << " " << s << " " << endl;
	}
	void Tinh(int t) {
		int Tong = h * 3600 + m * 60 + s;
		Tong = abs(Tong + t);
		h = (Tong / 3600) % 24;
		Tong = Tong % 3600;
		m = Tong / 60;
		Tong = Tong % 60;
		s = Tong % 60;

	}


};
int xuli(string s) {
	int t = 0;
	string st = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			st = st + s[i];
		}
	}
	if (st == "++") return 1;
	if (st == "--")return -1;
	int kt = -1;
	if (st[0] == '+') {
		kt = 1;
	}
	for (int i = 1; i < st.length(); i++) {
		t = (t * 10) + int(st[i]) - 48;
	}
	cout << t << endl;
	return t * kt;
}
int main() {
	Time a;
	int n;
	string s;
	int t = 0;
	int x;
	a.Nhap();
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		x = xuli(s);
		t = t + x;
	}
	a.Tinh(t);
	a.Xuat();
	return 0;
}