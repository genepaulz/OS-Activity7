#include <stdio.h>
#include <stdlib.h>
#include "npp.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	ProcessList pl = newProcessList(10);
	addCProcess(pl,1,2,21,0,0);
	displayProcess(pl->pl[0]);
	addCProcess(pl,2,1,3,0,0);
	displayProcess(pl->pl[1]);
	addCProcess(pl,3,4,6,0,0);
	displayProcess(pl->pl[2]);
	addCProcess(pl,4,3,2,0,0);
	displayProcess(pl->pl[3]);
	displayProcessListP(pl);
	printf("		STARTING Processes\n\n");
	
	processNPP(pl);
	
	destroyProcessList(&pl);
	
	return 0;
}

