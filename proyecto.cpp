#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declaraciones globales
//Declaracion y definicion del contador que manejara los procesos de ventas
int c2=1;
int c1=0;
//vector que almacenara los valores de n su valor en su subindice e ira en un incremento constante para poder almacenarlo
int arreglo[1000];
//vectores que almacenaran la cantidad vendida y el subtotal de un subindice de valor n que ira en aumento constante
int vec1[1000];
int vec2[1000]; 
//delcaracion de la variable condicional n que ocuparan casi todos los switch
int n;
int fl,cl=0;
//Declaracion y dimensiones del vector que almacenara los precios y la cantidad de productos existentes
int vec[20];
int array[20];
//Declaracion y dimension de los vectores que ayudaran a los procesos
int vector[7];
void lista()//esta funcion nos permite visualizar la lista de productos, no solo en la parte que es requirida, tambien cuando el usuario lo desee
{
	
	system("color B0");
	printf("                            Super geras store                        \n\n\t");
	printf("                        \tLista de productos                              \n");
	printf(" \nNombre del producto y numero del producto               Marca                Precio                Cantidad en existencia      \n");
	printf("\n1  Comutadora de escritorio                             hp                   $20000                         5   \n");
	printf("\n2  Laptop portatil                                      Lenovo               $15000                         4  \n");
	printf("\n3  Computadora de escritorio                            Dell                 $22000                         7           \n");
	printf("\n4  Tablet                                               Xaoimi               $17000                         4    \n");
	printf("\n5  Mini Pc                                              Dell                 $14000                         12      \n");
	printf("\n6  Pc gamer                                             Xtreme               $7000                          8   \n");
	printf("\n7  Computadora de escritorio                            sony                 $17500                         7    \n");
	printf("\n8  Ipad                                                 Apple                $7500                          10 \n");
	printf("\n9  Laptop                                               Dell                 $3500                          11\n");
	printf("\n10 Laptop                                               Huawei               $4800                          4\n");
	printf("\n11 PC? profesionales                                   Acer                 $4200                          10\n");
	printf("\n12 Computadora de escritorio                            Intel                $25000                         5\n");
	printf("\n13 Laptop gamer                                         Lenovo               $23500                         9    \n");
	printf("\n14 Tablet                                               Samsumg galaxy       $15500                         23\n");
	printf("\n15 Ipad                                                 Huawei               $9500                          6\n");
	printf("\n16 Computadora de escritorio                            Asus                 $10500                         14\n");
	printf("\n17 Computadora de escritorio                            Dell                 $10000                         10\n");
	printf("\n18 Laptop portatil                                      Microsotf            $9000                          12\n");
	printf("\n19 Computadora de escritorio                            Acer                 $10000                         17 \n");
	printf("\n20 Computadora de escritorio                            Intel dual core      $9500                          2 \n");
}
void ticket()//esta funcion nos permite visualizar la parte superior del ticket 
{
	
	system("color 90");
	printf("                           \tTicket de compra\n\n");
    printf("                           \tSuper Geras Store\n\n");
    printf("                    \tEmplado:Gerardo Adan Morelos Medina\n\n");
    printf("                      \tQuejas o sugerencias: 7226437300\n\n");
    printf("              \tIturbide #234 poniente sur, colonia los barrios locos\n\n");
    printf("\nNombre del producto                     Marca                Precio          Cantidad           Subtotal\n\n");
}
int ventas()//esta funcion hace los procesos y visualiza las ventas
{
	//Definicion de los vectores que almacenaran los precios de los productos
	vec[0] = 20000;
	vec[1] = 15000;
	vec[2] = 22000;
	vec[3] = 17000;
	vec[4] = 14000;
	vec[5] = 7000;
	vec[6] = 17500;
	vec[7] = 7500;
	vec[8] = 3500;
	vec[9] = 4800;
	vec[10] = 4200;
	vec[11] = 25000;
	vec[12] = 23500;
	vec[13] = 15500;
	vec[14] = 9500;
	vec[15] = 10500;
	vec[16] = 10000;
	vec[17] = 9000;	
	//Definicion de los vectores que almacenaran la cantidad de productos en exixtencia de acuerdo a la lista de productos
	array[0] = 5;
	array[1] = 4;
	array[2] = 7;
	array[3] = 4;
	array[4] = 12;
	array[5] = 8;
	array[6] = 7;
	array[7] = 10;
	array[8] = 11;
	array[9] = 4;
	array[10] = 10;
	array[11] = 5;
	array[12] = 9;
	array[13] = 23;
	array[14] = 6;
	array[15] = 14;
	array[16] = 10;
	array[17] = 12;
	array[18] = 17;
	array[19] = 2;
	//proceso while que controlara el numero de veces que se ralizara una venta
	while(c1<vector[0])
	{
	    //Si el usuario cree necesario ver de nuevo la lista de productos presionara el numero cero que mandara a llamara a la funcion lista no entrando en el proceso que controla el contador
	    // dandole la posibilidad al usuario de ver la lista cuantas veces lo requiera
		printf("Ingrese el numero del producto %i que va a comprar, si nesecita ver otra vez la lista de productos presione el numero 0:\t",c2);
		scanf("%i",&n);
		if(n==0){
			system("cls");
			lista();
			getch();
			system("cls");
			//si no cree necesario ver la lista de productos el proceso seguira normal
	} else{
		switch (n) {
			case 1:
				printf("\nProducto: Comutadora de escritorio\n");
				printf("Marca:    hp\n");
				printf("Precio:   $20000\n");
				printf("Escriba el total a llevar:\t");
				scanf("%i",&vec[18]);
				//si la cantidad requirida por el usuario es mayor a la que existe en la lista el programa le pidira que ingrese otra cantidad,mostrandole cuanto hay
				//o en su defecto le dara la opcion de reiniciar las ventas desde la primera reiniciando la funcion ventas
				if (vec[18]>array[0]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[0]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						//si no reinicia las ventas el proceso seguira normal
						default:
							vec[19] = vec[18]*vec[0];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
				    }
				    //si la cantidad requirida es suficiente el proceso sigue normal
				} else {
					vec[19] = vec[18]*vec[0];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
					getch();
		            system("cls");
			   }
			   break;
			case 2:
				printf("\nProducto: Laptop portatil\n");
			    printf("Marca:    Lenovo\n");
			    printf("Precio:   $15000\n");
			    printf("Escriba el total a llevar:\t");
				scanf("%i",&vec[18]);
				if (vec[18]>array[1]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[1]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[1];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[1];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 3:
		    	printf("\nProducto: Computadora de escritorio\n");
			    printf("Marca:    Dell\n");
			    printf("Precio:   $22000\n");
			    printf("Escriba el total a llevar:\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[2]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[2]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[2];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[2];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 4:
		    	printf("\nProducto: Tablet\n");
			    printf("Marca:    Xaoimi\n");
			    printf("Precio:   $17000\n");
			    printf("Escriba el total a llevar:\t");
				scanf("%i",&vec[18]);
				if (vec[18]>array[3]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[3]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[3];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[3];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 5:
		    	printf("\nProducto: Mini Pc\n");
			    printf("Marca:    Dell\n");
			    printf("Precio:   $14000\n");
			    printf("Escriba el total a llevar:\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[4]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[4]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[4];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[4];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 6:
		    	printf("\nProducto: Pc Gamer\n");
			    printf("Marca:    Xtreme\n");
			    printf("Precio:   $7000\n");
			    printf("Escriba el total a llevar:\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[5]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[5]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[5];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[5];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 7:
		    	printf("\nProducto: Computadora de escritorio\n");
			    printf("Marca:    Sony\n");
			    printf("Precio:   $17500\n");
			    printf("Escriba el total a llevar:\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[6]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[6]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[6];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[6];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 8:
		    	printf("\nProducto: Ipad\n");
		     	printf("Marca:    Apple\n");
		    	printf("Precio:   $7500\n");
	     		printf("Escriba el total a llevar\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[7]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[7]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[7];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[7];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 9:
		    	printf("\nProducto: Laptop\n");
	    		printf("Marca:    Dell\n");
		    	printf("Precio:   $3500\n");
		    	printf("Escriba el total a llevar\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[8]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[8]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[8];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[8];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		    case 10:
		    	printf("\nProducto: Laptop\n");
	    		printf("Marca:    Huawei\n");
		    	printf("Precio:   $4800\n");
	     		printf("Escriba el total a llevar:\t");
	     		scanf("%i",&vec[18]);
				if (vec[18]>array[9]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[9]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[9];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[9];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 11:
		    	printf("\nProducto: Pc profesional\n");
	     		printf("Marca:    Acer\n");
	    		printf("Precio:   $4200\n");
	    		printf("Escriba el total a llevar:\t");
	    		scanf("%i",&vec[18]);
				if (vec[18]>array[10]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[10]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[10];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[10];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 12:
		    	printf("\nProducto: Computadora de escritorio\n");
	     		printf("Marca:    Intel\n");
	    		printf("Precio:   $25000\n");
	     		printf("Escriba el total a llevar\t");
	     		scanf("%i",&vec[18]);
				if (vec[18]>array[11]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[11]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[11];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[11];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 13:
		    	printf("\nProducto: Laptop gamer\n");
	    		printf("Marca:    Lenovo\n");
	    		printf("Precio:   $23500\n");
	    		printf("Escriba el total a llevar:\t");
	    		scanf("%i",&vec[18]);
				if (vec[18]>array[12]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[12]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[12];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[12];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 14:
		    	printf("\nProducto: Tablet\n");
			    printf("Marca:    Samsumg Galaxy\n");
			    printf("Precio:   $15500\n");
			    printf("Escriba el total a llevar:\t");
			    scanf("%i",&vec[18]);
				if (vec[18]>array[13]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[13]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[13];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[13];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 15:
		    	printf("\nProducto: Ipad\n");
	     		printf("Marca:    Huawei\n");
		    	printf("Precio:   $9500\n");
	     		printf("Escriba el total a llevar:\t");
	     		scanf("%i",&vec[18]);
				if (vec[18]>array[14]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[14]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[14];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[14];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 16:
		    	printf("\nProducto: Computadora de escritorio\n");
		     	printf("Marca:    Asus\n");
		    	printf("Precio:   $10500\n");
		    	printf("Escriba el total a llevar:\t");
		    	scanf("%i",&vec[18]);
				if (vec[18]>array[15]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[15]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[15];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[15];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 17:
		    	printf("\nProducto: Computadora de escritorio\n");
		    	printf("Marca:    Dell\n");
		    	printf("Precio:   $10000\n");
	     		printf("Escriba el total a llevar:\t");
	     		scanf("%i",&vec[18]);
				if (vec[18]>array[16]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[16]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[16];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[16];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 18:
		    	printf("\nProducto: Laptop portatil\n");
		    	printf("Marca:    Microsoft\n");
			    printf("Precio:   9000\n");
		    	printf("Escriba el total a llevar:\t");
		    	scanf("%i",&vec[18]);
				if (vec[18]>array[17]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[17]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[17];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[17];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 19:
		    	printf("\nProducto: Computadora de escritorio\n");
			    printf("Marca:    Acer\n");
		    	printf("Precio:   $10000\n");
		    	printf("Escriba el total a llevar:\t");
		    	scanf("%i",&vec[18]);
				if (vec[18]>array[18]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[18]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[16];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[16];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		    case 20:
		    	printf("\nProducto: Computadora de escritorio\n");
			printf("Marca:    Intel dual core\n");
			printf("Precio:   $9500\n");
			printf("Escriba el total a llevar\t");
			scanf("%i",&vec[18]);
				if (vec[18]>array[19]) {
					printf("\nCantidad de producto en existencia insuficiente, solo en existencia %i, escriba otra cantidad, o si lo prefiere presione 0 para reiniciar las ventas desde la primera:\t",array[19]);
					scanf("%i",&vec[18]);
					switch(vec[18]){
						case 0:
							system("cls");
							ventas();
							break;
						default:
							vec[19] = vec[18]*vec[14];
					        printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);
		                    getch();
		                    system("cls");
					}
				} else {
					vec[19] = vec[18]*vec[14];
					printf("\nESTE PRODUCTO(S) LE COSTARA $ %i\n",vec[19]);	
					getch();
		            system("cls");
		       }
		       break;
		}
		//el mismo proceso explicado en el caso 1 se aplica al resto
		//Estos vectores arreglo alamcenara el numero del producto que se vendio,el total de articulos en una venta y su subtotal para su posterior uso
		//los datos no se van a sobreescribir debido a la existencia de c1 como subindice, c1 al tener incremento cada que haya venta incrementara la posicion de vector para almacenar un nuevo dato
		arreglo[c1]=n;
		vec1[c1]=vec[18];
		vec2[c1]=vec[19];
		//contador que controla el proceso para que se repita las veces que sea necesario
	    c1++;
	    //contador que muestra el numero del producto
		c2++;
		//este vector almacenara el numero de productos vendidos individualmente para su posterior visualizacion
		vector[1] = vector[1]+vec[19];
		//este vector almacena el precio total de lo vendido para su posterior visualizacion
		vector[2] = vector[2]+vec[18];
		//los contadores y los vectores anteriores solo se actualizaran si hay ventas o sea solo si se entra en el proceso else 
	}
    }//cuando el contador c1 alcanza el numero requirido o sea lo que tenga vector[0] finaliza todo este proceso
}
int main()
{
    char mat1[2][100]= {"Computadora de escritorio",      "hp"};
    char mat2[2][100]= {"Laptop portatil",                "Lenovo"};
    char mat3[2][100]= {"Computadora de escritorio",      "Dell"};
    char mat4[2][100]= {"Tablet",                         "Xaoimi"};
    char mat5[2][100]= {"Mini Pc",                        "Dell"};
    char mat6[2][100]= {"Pc gamer",                       "Xtreme"};
    char mat7[2][100]= {"Computadora de escritorio",      "Sony"};
    char mat8[2][100]= {"Ipad",                           "Apple"};
    char mat9[2][100]= {"Laptop",                         "Dell"};
    char mat10[2][100]={"Laptop",                         "Huawei"};
    char mat11[2][100]={"PCs profesionales",              "Acer"};
    char mat12[2][100]={"Computadora de escritorio",      "Intel"};
    char mat13[2][100]={"Laptop gamer",                   "Lenovo"};
    char mat14[2][100]={"Tablet",                         "Samsumg Galaxy"};
    char mat15[2][100]={"Ipad",                           "Huawei"};
    char mat16[2][100]={"Computadora de escritorio"       "Asus"};
    char mat17[2][100]={"Computadora de escritorio",      "Dell"};
    char mat18[2][100]={"Laptop portatil",                "Microsotf"};
    char mat19[2][100]={"Computadora de escritorio",      "Acer"};
    char mat20[2][100]={"Computadora de escritorio",      "Intel dual core"};
	//Definicion de las variables locales de main
	float vect[9];
	vect[0] = .10;
	vect[1] = .05;
	vect[2] = .03;
	vect[3] = .02;
	vect[4] = .04;
	int n1;
	//ventana 1 portada del proyecto
	system("color 90");
	printf("                      \tSuper geras store\n\n");
	printf("      \tColegio de Estudios Cientificos y Tecnologicos del Estado de Mexico\n\n");
	printf("                      \tPLANTEL METEPEC II\n\n");
	printf("               \tPrograma para una tienda de computadoras\n\n");
	printf("                  \tGerardo Adan Morelos Medina\n\n");
	printf("                         \t203\n\n");
	printf("                             Semestre 2\n\n"); 
	getch();
	system("cls"); 
	//ventana 2 visualizacion de lista de productos
	lista();
	getch();
	system("cls"); 
	//ventana 3, proceso de las ventas
	system("color F0");
	printf("                             \n\tSuper geras store\n ");
	printf("                             \n\tVenta de productos\n"); 
	printf("\nIngrese la cantidad de productos diferentes que comprara:\t");
	scanf("%i",&vector[0]);
	getch();
	system("cls");
	//ventana 4 ventas
	ventas();
	//ventana 5 proceso de aplicacion a iva y descuentos por compras 
	system("color 41"); 
	vect[5]=(int)vector[1]*vect[4];//proceso para saber el iva de 4%, aqui se ocupa una conversion tipo cast para redondear el numero 
	vect[6]=(int)vector[1]+vect[5];//proceso para sacar el total con iva aplicado, aqui se ocupa una conversion tipo cast para redondear el numero 
	printf("                           Super geras store           \n");
	printf("                           \nVenta de productos  \n");
	//cada .2 antes de la f y despues del % realiza la funcion de solo imprimir en pantalla dos decimales ya que la conversion solo redondea pero no desaperece los decimales
	printf("\nPor comprar %i de productos su compra fue de $%i y el numero de articulos individuales comprados fue de %i se le aplica un 4 porciento de iva $%.2f y su compra total es de $%.2f\n",vector[0],vector[1],vector[2],vect[5],vect[6]);
	printf("\nSi el usuario desea revisar de nuevo los precios presione 0, en caso contrario ingrese el numero 1:\t");//se le da la opcion a usuario de verificar los precios si desea verificar la fiabilidad del programa llamando a la funcion lista
	scanf("%i",&n1);
	switch (n1) {
	case 0:
		getch();
		system("cls");
		lista();
		getch();
		system("cls");
		break;
	case 1://si no es necesario el proceso seguira su sumbo normal
		getch();
		break;
	} 
	//procesos para aplicar los descuentos usuando el mismo metodo con %2f
	if (vect[6]>200000) {
		vect[7] = int(vect[6]*vect[0]);
		vect[8] = int(vect[6]-vect[7]);
		printf("\nPor su compra total de $%.2f usted tiene un 10 porciento de descuento, su descuento es de $%.2f y su compra con descuento es de $%.2f\n",vect[6],vect[7],vect[8]);
	} else {
		if (vect[6]<=200000 && vect[6]>100000) {
			vect[7] = int(vect[6]*vect[1]);
			vect[8] = int(vect[6]-vect[7]);
			printf("\nPor su compra total de $%.2f usted tiene un 5 porciento de descuento, su descuento es de $%.2f y su compra con descuento es de $%.2f\n",vect[6],vect[7],vect[8]);
		} else {
			if (vect[6]<=100000 && vect[6]>50000) {
				vect[7] = int(vect[6]*vect[2]);
				vect[8] = int(vect[6]-vect[7]);
				printf("\nPor su compra total de $%.2f usted tiene un 3 porciento de descuento, su descuento es de $%.2f y su compra con descuento es de $%.2f\n",vect[6],vect[7],vect[8]);
			} else {
				if (vect[6]<=50000) {
					vect[7] = int(vect[6]*vect[3]);
					vect[8] = int(vect[6]-vect[7]);
					printf("\nPor su compra total de $%.2f usted tiene un 2 porciento de descuento, su descuento es de $%.2f y su compra con descuento es de $%.2f\n",vect[6],vect[7],vect[8]);
				}
			}
		}
	}
	//se preguntara el tipo de pago que hara el usuario, de acuerdo al numero leido el programa hara el proceso asignado
	printf("\nQue tipo de pago hara con targeta o efectivo (introduzca el numero que este con su tipo de pago)\n");
	printf("1: Efectivo\n");
	printf("2: Targeta\n");
	scanf("%i",&vector[3]);
	switch (vector[3]) {
	case 1://proceso para realizar el cobro en efectivo
		printf("\nEscriba el efectivo con el que va pagar\t:");
		scanf("%i",&vector[4]);
		vector[5] = vector[4]-vect[8];
		printf("\nEl cambio del cliente es de $%i\n",vector[5]);
		break;
	case 2://proceso para realizar el cobro con tarjeta y cargo del 10% usuando el mismo metodo con %2f
		vector[4] = int((vect[8]*vect[0]));
		vector[5] = int((vector[4]+vect[8]));
		printf("\nSe le aplicara un cargo del 10 porciento a su compra final de $%.2f, su cargo adicional es de $%.2i, su compra total es de $%.2i",vect[8],vector[4],vector[5]);
		break;
	} 
	getch();
	system("cls");
	ticket();
	//declaraciones y definiciones de las variables que entraran en la matriz tipo char para almaceanar nombres y marcas
    int f;
    int c;
	//redifinicion de la variable contador y subindice c1 para la funcion main
	c1=0;
	do
	{
		switch(arreglo[c1])
		{
			case 1:
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat1[f]);
				}
				printf("     %i",vec[0]);//el vector vec tiene cada uno de los precios de los productos por ello se llamaran ya que son funciones globales
				do
				{
					printf("\t\t\%i\t\t%i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 2:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t\t\t",mat2[f]);
				}
				printf("%-9i",vec[1]);
				do
				{
				    printf("\t%i\t        %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 3:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat3[f]);
				}
				printf("\t%i",vec[2]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 4:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat4[f]);
				}
				printf("\t%i",vec[3]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 5:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat5[f]);
				}
				printf("\t%i",vec[4]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 6:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat6[f]);
				}
				break;
				printf("\t%i",vec[5]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
			case 7:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat7[f]);
				}
				printf("\t%i",vec[6]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 8:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat8[f]);
				}
				printf("\t%i",vec[7]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 9:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat9[f]);
				}
				printf("\t%i",vec[8]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 10:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat10[f]);
				}
				printf("\t%i",vec[9]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 11:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat11[f]);
				}
				printf("\t%i",vec[10]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 12:
				printf("\n");	
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat12[f]);
				}
				printf("\t%i",vec[11]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 13:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat13[f]);
				}
				printf("\t%i",vec[12]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 14:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat14[f]);
				}
				printf("\t%i",vec[13]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 15:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat15[f]);
				}
				printf("\t%i",vec[14]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 16:
			     printf("\n");	
				 for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat16[f]);
				}
				printf("\t%i",vec[15]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 17:
				printf("\n");	
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat17[f]);
				}
				printf("\t%i",vec[16]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 18:
				printf("\n");  
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat18[f]);
				}
				printf("\t%i",vec[17]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 19:
				printf("\n");	
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat19[f]);
				}
				printf("\t%i",vec[16]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
			case 20:
				printf("\n");
				for(f=0;f<vector[0];f++)
				{
					printf("%s\t\t",mat20[f]);
				}
				printf("\t%i",vec[14]);
				do
				{
					printf("\t%i\t       %i",vec1[c1],vec2[c1]);
				}while(c<vector[0]);
				break;
		}
		c1++;
	}while(c1<=vector[0]);
	switch (vector[3]) 
	{
	case 1:
		printf("                                                                    Su compra fue de            $ %i\n",vector[1]);
		printf("\n");
		printf("                                                                    Se aplica el 4% de iva      $ %i\n",vect[5]);
		printf("\n");
		printf("                                                                    El total con iva aplicado   $ %i\n",vect[6]);
		printf("\n");
		printf("                                                                    El descuento es             $ %i\n",vect[7]);
		printf("\n");
		printf("                                                                    El pago final es            $ %i\n",vect[8]);
		printf("\n");
		printf("                                                                    Su efectivo es              $ %i\n",vector[4]);
		printf("\n");
		printf("                                                                    Devuelvale al comprador     $ %i\n",vector[5]);
		printf("\n");
		printf("                                                                  Gracias por su compra vuelva pronto\n");
		break;
	case 2:
		printf("\n");
		printf("                                                                    Su compra fue de                                                  $ %i\n",vector[1]);
		printf("\n");
		printf("                                                                    Se aplica el 4% de iva                                            $ %i\n",vect[5]);
		printf("\n");
		printf("                                                                    El total con iva aplicado                                         $ %i\n",vect[6]);
		printf("\n");
		printf("                                                                    El descuento es                                                   $ %i\n",vect[7]);
		printf("\n");
		printf("                                                                    El pago con descuento es                                          $ %i\n",vect[8]);
		printf("\n");
		printf("                                                                    El cargo por pago con tarjeta de credito de un 10 porciento es    $ %i\n",vector[4]);
		printf("\n");
		printf("                                                                    El pago final es                                                  $ %i\n",vector[5]);
		printf("\n");
		printf("                                                                  Gracias por su compra vuelva pronto\n");
		break;
	}
	getch();
	return 0;
}
