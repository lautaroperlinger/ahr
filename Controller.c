#include "Controller.h"
#include "LinkedList.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int controller_addEmployee(LinkedList* pnt_ArrayEmployee)
{
    int error=0;
    if((pnt_ArrayEmployee)!=NULL)
    {
        Employee* Empleado_nuevo=employee_new();

        Empleado_nuevo->Id=ll_len(pnt_ArrayEmployee);

        printf("Ingrese Nombre del empleado.\n");
        scanf("%s",Empleado_nuevo->Nombre);

        printf("Ingrese Horas trabajadas del empleado.\n");
        scanf("%d",&Empleado_nuevo->Horas);
        while(Empleado_nuevo->Horas<0)
        {
            printf("Error, ingrese horas trabajadas.\n");
            scanf("%d",&Empleado_nuevo->Salario);
        }
        printf("Ingrese Salario del empleado.\n");
        scanf("%.2f",&Empleado_nuevo->Salario);
        while(Empleado_nuevo->Salario<0)
        {
            printf("Error, ingrese salario.\n");
            scanf(".2f",&Empleado_nuevo->Salario);
        }

        ll_add(pnt_ArrayEmployee,Empleado_nuevo);

        error=1;
    }

    return error;
}

int controller_editEmployee(LinkedList* pnt_ArrayEmployee)
{
    int error=0;
    int id;
    int opcion;
    Employee* Empleado_editado;

    if((pnt_ArrayEmployee)!=NULL)
    {
        printf("Ingrese el ID del empleado a editar.\n");
        scanf("%d",&id);
        Empleado_editado=ll_get(pnt_ArrayEmployee,id);
        if(Empleado_editado!=NULL)
        {


            do
            {
                printf("MENU DE EDITADO.\n");
                printf("----------------\n\n");
                printf("1.Nombre.\n");
                printf("2.Horas trabajadas.\n");
                printf("3.Salario.\n");

                switch(opcion)
                {
                case 1:
                    printf("Ingrese el nuevo nombre: ");
                    scanf("%s",Empleado_editado->Nombre);
                    break;
                case 2:
                    printf("Ingrese las nuevas horas trabajadas: ");
                    scanf("%d",&(Empleado_editado->Horas));
                    break;
                case 3:
                    printf("Ingrese el nuevo sueldo: ");
                    scanf("%d",&(Empleado_editado->Salario));
                    break;
                case 4:
                    break;
                default:
                    printf("Opcion invalida\n");
                    break;
                }
            }
            while(opcion!=4);
            }
        error=1;
    }
}
