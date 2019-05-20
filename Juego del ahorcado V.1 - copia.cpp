// JUEGO DEL AHORCADO V.1
//  Primero sacar sisitema randomizador palabras



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
using namespace std;
int rand (void);




char comparar(char letra, char prueba){
	int x;

	//printf (" .%c%c. ", letra, prueba);
	//printf ("%c", letra);

	if (letra == prueba){

		x = 1;

	}else{
		x = 0;
	}

	return x;
}


char imprimirbien(char vector[], int longitud){
	int i;



	for (i = 0; i < longitud; i++){

		printf ("%c", vector[i]);
	}


	return 0;


}

char desarrollo(char fun[], int longitud){
	int i, j, x, y, vidas, repetida, repetida1;

    int bin[longitud]= {0};

    char prueba;

	char vec[longitud];

	char intentos[24];

	j = 0;
    x = 0;
    y = 0;

    if ( longitud > 8){
	    vidas = 4;

	}else {
		vidas = 5;
	}


    for (i = 0 ; i < longitud ; i++){
    	vec[i] = '_';
    	printf (" %c", vec[i]);
	}


    printf ("\nIntroduzca la primera letra:\n");
    printf ("Vidas: %i\n", vidas);

    scanf (" %c", &prueba);
    intentos[0] = prueba;

	do {


        for( i = 0; i < longitud; i++){

            if (comparar (fun[i], prueba) == 1){
		        	vec[i] = prueba;
		        	bin[i] = comparar (fun[i], prueba);
		        	x = x + bin[i];
			}else{
				vec[i] = vec[i];
			}
        }


        if (x == y ){
            vidas = vidas - 1;
		}

		y = x;

		if (vidas < 0){
			printf ("\nVaya, parece que has perdido...");
			printf ("\nLa palabra era:\n  ");

		for (i = 0; i < longitud; i++){

		    printf (" %c", fun[i]);
	    }
		break;

		}


        for (i = 0 ; i < longitud; i++){
        	printf ("%c ", vec[i]);

		}

        if ( x <longitud){


            do{


				j = j +1;

          	    printf ("\nIntroduzca otra letra:");
          	    printf ("\nVidas: %i\n", vidas);
	       		scanf ("\n %c", &prueba);

	        	repetida1 = 0;

	      	    for (i = 0 ; i < j ;i++){

	        		if (prueba == intentos[i]){
	        			repetida = 1;
					}else {
						repetida = 0;
					}


					repetida1 = repetida1 + repetida;
				}



	        	if (repetida1 == 0){

	        		intentos[j] = prueba;

				}else{
					printf ("\nYa has probado con esta letra.\n");
					j = j - 1;
				}



			}while (repetida1 == 1);



						}


        } while ( x < longitud );

        if (x ==longitud ){

        printf ("\nHas ganado!");
        }
                return 0;
}



char cuatro (int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\ncasa\n");
	        char palabra[] = {'c','a','s','a'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nagua\n");
	    	char palabra[] = {'a','g','u','a'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\nduda\n");
	    	char palabra[] = {'d','u','d','a'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\ncota\n");
	    	char palabra[] = {'c','o','t','a'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nculo\n");
	    	char palabra[] = {'c','u','l','o'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}

char cinco (int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\ntorre\n");
	        char palabra[] = {'t','o','r','r','e'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\ncarta\n");
	    	char palabra[] = {'c','a','r','t','a'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\ncerdo\n");
	    	char palabra[] = {'c','e','r','d','o'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\nnariz\n");
	    	char palabra[] = {'n','a','r','i','z'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nsilla\n");
	    	char palabra[] = {'s','i','l','l','a'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}

char seis (int longitud){
    int max, opcion, x;

    max = 9;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nsillon\n");
	        char palabra[] = {'s','i','l','l','o','n'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nlabial\n");
	    	char palabra[] = {'l','a','b','i','a','l'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\njabato\n");
	    	char palabra[] = {'j','a','b','a','t','o'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\nrabano\n");
	    	char palabra[] = {'r','a','b','a','n','o'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\ntabaco\n");
	    	char palabra[] = {'t','a','b','a','c','o'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 6 :{
	    	//printf ("\ntabano\n");
	    	char palabra[] = {'t','a','b','a','n','o'};
	    	desarrollo(palabra, longitud);
			break;
	    }


	  	case 7 :{
	    	//printf ("\njaguar\n");
	    	char palabra[] = {'j','a','g','u','a','r'};
	    	desarrollo(palabra, longitud);
			break;
		}

		case 8 :{
	    	//printf ("\nllanta\n");
	    	char palabra[] = {'l','l','a','n','t','a'};
	    	desarrollo(palabra, longitud);
			break;
		}

			case 9 :{
	    	//printf ("\npluton\n");
	    	char palabra[] = {'p','l','u','t','o','n'};
	    	desarrollo(palabra, longitud);
			printf ("\nSiempre seras un planeta en nuestros corazones...\n");
			break;
		}

	}
	return 0;

}

char siete (int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nraqueta\n");
	        char palabra[] = {'r','a','q','u','e','t','a'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nbaldosa\n");
	    	char palabra[] = {'b','a','l','d','o','s','a'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\nventana\n");
	    	char palabra[] = {'v','e','n','t','a','n','a'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\ncacatua\n");
	    	char palabra[] = {'c','a','c','a','t','u','a'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\njupiter\n");
	    	char palabra[] = {'j','u','p','i','t','e','r'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}

char ocho(int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nlavadora\n");
	        char palabra[] = {'l','a','v','a','d','o','r','a'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nsemaforo\n");
	    	char palabra[] = {'s','e','m','a','f','o','r','o'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\ninventor\n");
	    	char palabra[] = {'i','n','v','e','n','t','o','r'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\navestruz\n");
	    	char palabra[] = {'a','v','e','s','t','r','u','z'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nmercurio\n");
	    	char palabra[] = {'m','e','r','c','u','r','i','o'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}

char nueve(int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nlavadora\n");
	        char palabra[] = {'a','b','d','o','m','i','n','a','l'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nsemaforo\n");
	    	char palabra[] = {'t','u','r','q','u','e','s','a','s'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\ninventor\n");
	    	char palabra[] = {'u','r','g','e','n','c','i','a','s'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\navestruz\n");
	    	char palabra[] = {'u','s','u','r','p','a','d','o','r'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nmercurio\n");
	    	char palabra[] = {'v','e','g','e','t','a','l','e','s'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}

char diez(int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nlavadora\n");
	        char palabra[] = {'a','b','a','n','d','e','r','a','d','o'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nsemaforo\n");
	    	char palabra[] = {'j','a','m','a','i','c','a','n','o','s'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\ninventor\n");
	    	char palabra[] = {'i','m','a','g','i','n','a','r','i','o'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\navestruz\n");
	    	char palabra[] = {'g','a','m','e','t','o','f','i','t','o'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nmercurio\n");
	    	char palabra[] = {'l','a','g','a','r','t','i','j','a','s'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}


char once(int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nlavadora\n");
	        char palabra[] = {'s','u','p','e','r','f','i','c','i','a','l'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nsemaforo\n");
	    	char palabra[] = {'t','r','a','n','s','v','e','r','s','a','l'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\ninventor\n");
	    	char palabra[] = {'i','n','v','e','r','o','s','i','m','i','l'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\navestruz\n");
	    	char palabra[] = {'a','u','d','i','o','v','i','s','u','a','l'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nmercurio\n");
	    	char palabra[] = {'c','h','a','n','t','a','j','e','a','d','o'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}

char doce(int longitud){
    int max, opcion, x;

    max = 5;
	opcion = random(max);

	switch (opcion){

	    case 1 : {
	    	//printf ("\nlavadora\n");
	        char palabra[] = {'z','i','g','z','a','g','u','e','a','m','o','s'};

            desarrollo(palabra, longitud);

	    	break;
	    }

	    case 2 : {
	    	//printf ("\nsemaforo\n");
	    	char palabra[] = {'t','u','b','e','r','c','u','l','o','s','i','s'};

	    	desarrollo(palabra, longitud);

			break;
		}

	    case 3 : {
	    	//printf ("\ninventor\n");
	    	char palabra[] = {'u','n','i','c','e','l','u','l','a','r','e','s'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 4 :{
	    	//printf ("\navestruz\n");
	    	char palabra[] = {'v','a','c','u','n','a','c','i','o','n','e','s'};
	    	desarrollo(palabra, longitud);
			break;
		}

	    case 5 :{
	    	//printf ("\nmercurio\n");
	    	char palabra[] = {'a','c','t','u','a','l','i','z','a','n','d','o'};
	    	desarrollo(palabra, longitud);
			break;
		}


	}
	return 0;

}
void usuario(){
	int ans;
	char usuario;

    printf ("\n1_Introducir Usuario");
    printf ("\n2_Registrarse");
    scanf ("%i",&ans);

    if (ans < 1 || ans > 2){
    	do{
    	    printf ("\nIntroduzca una opcion valida:\n");
    	    scanf ("%i",&ans);
    	}while(ans < 1 || ans > 2);
	}
    if (ans == 1){
    	printf ("\nIntroduzca un usuario valido:\n");
    	scanf (" %c", &usuario);
    	printf ("%c", usuario);

	}



}

int main (){
	int respuesta, l, numero, rand;
	char ans, a, prueba, prueba1;
	 lectura1();
	 lectura2();
	 lectura3();
	 lectura4();
	 lectura5();
	 lectura6();
	 lectura7();
	 lectura8();
	 lectura9();
	 lectura10();
	 lectura11();
	 lectura12();
	 lectura13();
	 lectura14();
	 lectura15();
	 lectura16();
	 lectura17();
	 lectura18();
	 lectura19();
	 lectura20();
	 lectura21();
	 lectura22();
	 lectura23();
	 lectura24();
	 lectura25();
	 lectura26();
	 lectura27();
	 lectura28();
	 lectura29();
	 lectura30();
	 lectura31();
	 lectura32();
	 lectura33();
	 lectura34();
	 lectura35();
	 lectura36();
	 lectura37();
	 lectura38();
	 lectura39();
	 lectura40();
	 lectura41();
	 lectura42();
	 lectura43();
	 lectura44();
     lectura45();
     lectura46();
     lectura47();
     lectura48();
    

    /*
    printf ("\n    _______      ");
    printf ("\n   /       |     ");
    printf ("\n  |        O     ");
    printf ("\n  |       /|\    ");
    printf ("\n  |      * | *   ");
    printf ("\n  |      _/'\_   ");
    printf ("\n /T\             ");
    */

    printf ("  EL JUEGO DEL AHORCADO\n");

    usuario();

	do{



	printf ("\n1_Jugar una partida.");
	//printf ("\n2_Jugar con un amigo.");
	printf ("\n4_Cambiar de usuario.\n");
	printf ("\n5_Adios!\n");
	scanf ("%i", &respuesta);

	if (respuesta < 1 ||respuesta > 2){
	 	do {
	 	    printf ("Introduzca una opcion valida:\n");
	 	    scanf ("%i", &respuesta);
	     }while (respuesta < 0 ||respuesta > 2);
	 }

	if (respuesta == 1){

		printf ("\n-Buena suerte!");

		printf ("\nCuantas letras desea que contenga la palabra?\n");
		scanf ("%i", &l);


		if (l < 4 || l > 12){

		    do{
		    printf ("\nNo existen palabras de esa dimension en nuestra base de datos, pruebe otro numero.\n");
		    scanf ("%i", &l);
	        }while (l < 4 || l > 12);
     	}

	    if (l == 4){
	        cuatro(l);
	    }

        if (l == 5){
         	cinco(l);
		}

	    if (l == 6){
	    	seis(l);
		}

		if (l == 7){
			siete(l);
		}

		if (l == 8){
			ocho(l);
		}

		if (l == 9){
			nueve(l);
		}
		if (l == 10){
            diez(l);
		}
		if (l == 11){
            once(l);
		}
		if (l == 12){
            doce(l);
		}
		printf ("\nDesea jugar otra vez?");
	    scanf ("\n %c", &ans);
	}


	 if (respuesta == 5){
	 	break;
	 }



    }while(ans == 's');


	return 0;

	}


			/*
            do {




                for( i = 0; i < 4; i++){

			        if (comparar (palabra[i], prueba) == 1){
			        	vec[i] = prueba;
			        	bin[i] = comparar (palabra[i], prueba);

					}else{
						vec[i] = vec[i];
					}

                }
                x = bin[0] + bin[1] + bin[2] + bin[3];

                printf ("\n%c %c %c %c\n", vec[0], vec[1], vec[2], vec[3]);

                if ( x <4){
                	printf ("\nIntroduzca otra letra:");
	                scanf (" %c", &prueba);
				}


            } while ( x < 4);


            printf ("Has ganado");



            */

void lectura1(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(2).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura2(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(3).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura3(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(4).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura4(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(5).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura5(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(6).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura6(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(7).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura7(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(8).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura8(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(9).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura9(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(10).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura10(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(11).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura11(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(12).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura12(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(13).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura13(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(14).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura14(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(15).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura15(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(16).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura16(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(17).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura17(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(18).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura18(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(19).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura19(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(20).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura20(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(21).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura21(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(22).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura22(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(23).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura23(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(24).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
} 

void lectura24(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(25).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura25(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(26).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura26(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(27).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura27(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(28).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura28(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(29).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura29(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(30).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura30(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(31).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura31(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(32).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura32(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(33).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura33(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(34).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura34(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(35).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura35(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(36).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura36(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(37).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura37(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(38).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura38(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(39).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura39(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(40).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura40(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(41).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura41(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(42).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura42(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(43).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura43(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(44).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura44(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(45).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura45(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(46).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura46(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(47).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura47(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(48).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}

void lectura48(){
    ifstream archivo;
    string texto;

    archivo.open("ejemplo-copia(49).txt",ios::in);
    if (archivo.fail()){
            cout<<"no se pudo abrir el archivo";
            exit(1);
    }
while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

}
archivo.close();
}














