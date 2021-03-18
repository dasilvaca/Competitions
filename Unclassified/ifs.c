#include <stdio.h>
#include <conio.h> 

/*Academia BSD, seleccion de  candidatos aptos para becas de estudio de nivel superior */

int main ()
{	

    float nota = 0;  
    float acomulado = 0;
    int creditosSociales = 400;
    int creditosCiencias = 280;
    int creditosLiteratura = 344;
    int creditoSeleccionado;
    int creditos;
    int area;
    int registrarNota = 0;
    int cont = 0;
		
						
    while(registrarNota == 0){
	cont++;
	printf("Ingrese nota del candidato\n");
	scanf("%f", &nota);
	acomulado = acomulado + nota;
	printf("Pulse 0 si desea registrar mas notas: \n");
	scanf("%f", &registrarNota);    
    }
    	    
    float promedio = acomulado/(float)cont;
	
    if(promedio>= 4){
							    
        printf("Seleccione el area de conocimiento \n");
        printf("1. Sociales \n");
        printf("2. Ciencias basicas \n");
        printf("3. Literatura \n");
        scanf("%i", &area);
	printf("Escriba los creditos del area seleccionada \n");
	scanf("%i", &creditos);
	if(area == 1) creditoSeleccionado = creditosSociales;
	if(area == 2) creditoSeleccionado = creditosCiencias;
	if(area == 3) creditoSeleccionado = creditosLiteratura;
	float porcentajeCredito = (creditos * 100) / (float)creditoSeleccionado;
	if (porcentajeCredito>=80){
	    printf("usted SI es apto para presentarse a la beca \n");
	    printf("Promedio Acomulado: %.*f \n", 1, promedio);
	    printf("Porcentaje de creditos pasantias:  %.*f", 1, porcentajeCredito);
	    printf("%%");
	}
	else{
	    printf("usted NO es apto para presentarse a la beca \n");
	    printf("Promedio Acomulado: %.*f \n", 1, promedio);
	    printf("Porcentaje de creditos pasantias:  %.*f", 1, porcentajeCredito);
	    printf("\%");
	}
    }
    else{
	printf("usted NO es apto para presentarse a la beca el promedio es de: %.*f \n", 1 ,  promedio);
    }
							    
}
