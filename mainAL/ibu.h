#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pnama) :nama(pnama) {
		cout << "ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\" ada\n";
	}
	void tambahanak(anak*);
	void cetakanak();
};
