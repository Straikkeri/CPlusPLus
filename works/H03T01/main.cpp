#include"User.h"
#include"LinuxUser.h"

using namespace std;

int main() {

	LinuxUser lucky(501, "lucky", "/bin/bash", "home/lucky", "vi");
	lucky.print();
	LinuxUser root( 0, "Esa", "/root", "/home/root", "nano");
	root.setUid(1);
	root.setEditor("emacs");
	root.setUname("rootti");
	root.print();

	return 0;

}