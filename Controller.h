//#ifndef CONTROLLER_H_INCLUDED
//#define CONTROLLER_H_INCLUDED
#include "Employee.h"
#include "LinkedList.h"
#include "Parser.h"


//#endif // CONTROLLER_H_INCLUDED
int controller_addEmployee(LinkedList* pnt_ArrayEmployee);

int controller_loadFromText(char* path , LinkedList* pnt_ArrayEmployee);

int controller_loadFromBinary(char* path , LinkedList* pnt_ArrayEmployee);

int controller_editEmployee(LinkedList* pnt_ArrayEmployee);

int controller_removeEmployee(LinkedList* pnt_ArrayEmployee);

int controller_ListEmployee(LinkedList* pnt_ArrayEmployee);

int controller_sortEmployee(LinkedList* pnt_ArrayEmployee);

int controller_saveAsText(char* path , LinkedList* pnt_ArrayEmployee);

int controller_saveAsBinary(char* path , LinkedList* pnt_ArrayEmployee);
