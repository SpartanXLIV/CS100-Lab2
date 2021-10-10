#include <iostream>

std::string echo(int length, char** chars) {
	std::string ret = "";
	for(int i = 1; i < length; i++) {
		ret += chars[i];
		if(i < length - 1) {
			ret += " ";
		}
	}
//	ret += "\n"; //removed \n and moved to main2.cpp
	return ret;
}
