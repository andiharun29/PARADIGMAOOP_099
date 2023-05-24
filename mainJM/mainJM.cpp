#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int mian() {
	manusia* varmanusia = new manusia("jono");
	delete varmanusia;
	return 0;
}