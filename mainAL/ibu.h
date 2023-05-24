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
void ibu::tambahanak(anak* panak) {
	daftar_anak.push_back(panak);
}
void ibu::cetakanak() {
	cout << "daftar anak dari ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif