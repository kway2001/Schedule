void* sched_genSchedInfo(char* name, char* place, int type, int month, int day);		//put content in the schedPtr
void sched_print(void* obj);		//print Schedule
float sched_getMonth(void* obj);		//get month information(number) from the scheduler info structure
int sched_getType(void* obj);		//get type information(number) from the scheduler info structure
char* sched_getPlace(void* obj);		//get place information(string) from the scheduler info structure
void sched_printTypes(void);		//all type number print
int sched_convertType(char* typeName);		//convering input type to number
