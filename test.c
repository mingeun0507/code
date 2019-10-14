#include <stdio.h>
#include <stdlib.h>

int main(){
	system("git status");
	system("git add --all");
	system("git commit -m \"first commit\"");
	system("git push os_p master");	

	return 0;
}
