void* sched_genSchedInfo(char* name, char* place, int type, int month, int day);		//put content in the list
void sched_print(void* obj);		//print Schedule
float sched_getMonth(void* obj);
int sched_getType(void* obj);
char* sched_getPlace(void* obj);
void sched_printTypes(void);		//all type number print
int sched_convertType(char* typeName);		//convering input type to number
