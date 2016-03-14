#ifndef LINUXUSERH
#define LINUXUSERH

#include<iostream>
#include"user.h"

using namespace std;

class LinuxUser : public User {
private:
	string home;
	string shell;
	string editor;
public:
	LinuxUser();
	LinuxUser(int, string, string, string, string);
	~LinuxUser();
	void print();
	void setUid(int);
	void setEditor(string);
	void setUname(string);
};
#endif