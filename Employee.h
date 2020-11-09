#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
typedef struct
{
    int Id;
    char Nombre[20];
    int Horas;
    int Salario;
}Employee;

 Employee* employee_new();



#endif // EMPLOYEE_H_INCLUDED
