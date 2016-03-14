#include"LinuxUser.h"
#include <iostream>
#include <string>
using namespace std;

LinuxUser::LinuxUser(){
	name = "undef";
	uid = 0;
	shell = "undef";
	editor = "undef";
	home = "undef";

}

LinuxUser::LinuxUser(int uid, string newName, string newEditor, string newHome, string newShell) {
	name = newName;
	editor = newEditor;
	home = newHome;
	shell = newShell;
}

LinuxUser::~LinuxUser(void)
{
	cout << "Object " << uid << " is being deleted" << endl;
}


void LinuxUser::print(){

	cout << "User: " << name << " with userID: " << uid << " with home directory: " << home << endl << endl;
}

void LinuxUser::setUid(int newId){
	uid = newId;
}

void LinuxUser::setEditor(string newEditor){
	editor = newEditor;
}

void LinuxUser::setUname(string newName){
	name = newName;
}