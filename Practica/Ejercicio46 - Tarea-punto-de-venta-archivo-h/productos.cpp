#include <iostream>
#include "factura.h"
#include "productos.h"
using namespace std;



void productos(int opcion)
{
    system ("cls");
    int opcionProducto = 0;
    switch (opcion)
    {
	    case 1: 		// BEBIDAS CALIENTES
	    {
    
			cout << "BEBIDAS CALIENTES"<< endl;
			cout << "*****************"<< endl; 
			cout << "1 - Capuccino"<< endl; 
			cout << "2 - Expresso"<< endl; 
			cout << "3 - Moka Caliente"<< endl; 
			cout << endl;
			cout << "Ingrese una opcion: ";
			cin >> opcionProducto;

					// TIPOS DE BEBIDAS CALIENTES
			switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 - Capuccino 			L 40.00", 1, 40);
					break;
				
				case 2:
					agregarProducto("1 - Expresso 			L 30.00", 1, 30);
					break;
				case 3:
					agregarProducto("1 - Moka Caliente		L 30.00", 1, 30);
					break;
				default:
				{
					cout <<"Opcion no valida";
					return;
					break;
				}
					
			}
		cout <<endl;
		system ("cls");
		cout <<"Producto Agregado"<<endl<<endl;
		system ("pause");
		break;
		}

        case 2:			// BEBIADAS FRIAS
        {
			cout << "BEBIDAS FRIAS"<< endl;
            cout << "*************"<< endl;
			cout << "1 - Caramelo Latte"<< endl; 
    		cout << "2 - Cafe Match"<< endl; 
		    cout << "3 - Granita"<< endl; 
			cout << endl;
		    cout << "Ingrese una opcion: ";
		    cin >> opcionProducto;
		
			switch(opcionProducto) //opciones de productos
	    	{
		        case 1:
		            agregarProducto("1 - Cafe Latte			L 55.00", 1, 55);
		            break;
		        
		        case 2:
		            agregarProducto("1 - Cafe Match			L 45.00", 1, 45);
		            break;
		        case 3:
		        	agregarProducto("1 - Granita			L 60.00", 1, 60);
		        	break;
		        
				default:	//defaul de opciones de productos
		        {
		            cout <<"Opcion no valida";
		            return;
		            break;
		        }
		            
		    }
	        cout <<endl;
  			system ("cls");
 		   	cout <<"Producto Agregado"<<endl<<endl;
    		system ("pause");
    		break;
        }
        case 3:			// REPOSTERIA
        {   
			cout << "REPOSTERIA"<< endl;
            cout << "**********"<< endl;
			cout << "1 - Senorita"<< endl; 
    		cout << "2 - Flan de Queso"<< endl; 
		    cout << "3 - Semitas de Arroz"<< endl; 
			cout << endl;
		    cout << "Ingrese una opcion: ";
		    cin >> opcionProducto;
		
			switch(opcionProducto) //opciones de productos
	    	{
		        case 1:
		            agregarProducto("1 - Senorita	 		L 40.00", 1, 40);
		            break;
		        
		        case 2:
		            agregarProducto("1 - Flan de Queso		L 35.00", 1, 35);
		            break;
		        case 3:
		        	agregarProducto("1 - Semita de arroz		L 12.00", 1, 12);
		        	break;
		        
				default:	//defaul de opciones de productos
		        {
		            cout <<"Opcion no valida";
		            return;
		            break;
		        }
		            
		    }
	        cout <<endl;
  			system ("cls");
 		   	cout <<"Producto Agregado"<<endl<<endl;
    		system ("pause");
    		break;
        }

   		default:
        	break;
    }

}


