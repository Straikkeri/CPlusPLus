#include <iostream>
using namespace std;
#include "calc_distance.h"
#include <string>
#include <vector>
#include <sstream>

float Point::calc_distance() {
	//return 42.42;

	string input;

	vector<string> v1;
	vector<string> v2;
	vector<int> v3;
	int temp;


	for (int j = 0; j < 5; j++) {

		cout << "Anna nimi ja x ja y koordinaatti välilyönnillä erottaen.";

		while (getline(cin, input, ' ')) {
			v1.push_back(input);
		}

		v2.push_back(v1[0]);
		istringstream(v1[1]) >> temp;
		v3.push_back(temp);
		istringstream(v1[2]) >> temp;
		v3.push_back(temp);

		v1.clear();
	}
	
	for (int i = 0; i < v2.size();i++) {
		cout << v2[i];
	}

	for (int k = 0; k < v2.size();k+2) {
		cout << "X: " << v3[k] << " Y; " << v3[k + 1];
	}

	return 42.42;

	//cout << "(" << v1[1] << "," << v1[2] << ") etäisyys origosta = " << v1[1]^2 * v1[0]




	
	
	
	
	
	/*size_t endl = coords.find("\n");
	size_t pos = coords.find(" ");

	string name = coords.substr(0, pos);
	string_segment_2 = coords.substr(pos+1, endl);
	endl = string_segment_2.find("\n");

	pos = string_segment_2.find(" ");
	string x = string_segment_2.substr(0, pos);

	string y = string_segment_2.substr(pos + 1, endl);
	*/


}

