#include <stdio.h>
#include <stdlib.h>

int main(){
	system("git status");
	system("git add --all");
	system("git commit -m \"first commit\"");
	system("git push https://github.com/mingeun0507/opensource_project");	

	return 0;
}
