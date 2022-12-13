#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void crear_archivo();
void abrir_archivo();
int main(){
	int op;
		cout<<"------------------BIENVENIDO AL DICCIONARIO DEL PROGRAMADOR----------------------"<<endl;
		cout<<"ingrese su opcion: "<<endl;
		cout<<"Ingreso de palabras..........................................1"<<endl;
		cout<<"Ver las palabras.............................................2"<<endl;
		cout<<"Salir........................................................3"<<endl;
		cin>>op;
		switch(op){
		case 1:
	system("cls");
	crear_archivo();
	break;
	case 2:
	system("cls");	
	abrir_archivo();	
	break;
		case 3:
		system("cls");
		break;
	default:
	system("cls");
	cout<<"no valido"<<endl;
	break;	
}//fs	
	return 0;
	
}
void crear_archivo(){
	ofstream archivo;
	string texto;
	char continuar;
	int cod;
	
	char palabras [80] [30] ={"asm","auto", "bool", "break", "case", "catch", "char", "class", "const",
	"const_cast", "continue", "default", "delete", "do", "double", "dynamic_cast",
	"else", "enum", "explicit", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int",
	"long", "mutable", "namespace", "new", "operator", "private", "protected", "public", "register",
	"reinterpret_cast", "return", "short", "signed", "sizeof", "static", "static_cast", "struct",
	"switch", "template", "this", "throw", "true", "try", "typedef", "typeid", "typename", "union",
	"unsigned", "using", "virtual", "void", "volatile", "while"};
	
	char a [80] = {"a"};
	 
	 
	archivo.open("archivo.txt",ios::out);
	if (archivo.fail()){
	cout<<"No se pudo abrir o crear el archivo";
	exit(1);
	}
	else{
		do{
		fflush(stdin);
		cout<<"Ingrese su texto: ";
	getline(cin,texto); 
	
	if (*"auto" == *"a")
	{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Ensamblador"<<endl;
		cout<<"Funcionalidad: para la programacion de sistemas, pudiendo sustituir al ensamblador en muchos casos."<<endl;
			}
			
			if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Automatico"<<endl;
		cout<<"Funcionalidad: Especifica que el tipo de la variable que se está declarando será automáticamente deducida de su inicializador."<<endl;
	}	
	if (*"auto" == *"a")
			{
			cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Booleana"<<endl;
		cout<<"Funcionalidad: El tipo bool del Estándar C++ puede tener dos estados expresados por las constantes predefinidas true (lo que lo convierte en el entero 1) y false (lo que lo convierte en el entero 0). ."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Romper"<<endl;
		cout<<"Funcionalidad: Se utiliza para salir de un bucle (while, do-while o for), cuando se da alguna condición especial."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: caso"<<endl;
		cout<<"Funcionalidad: es un tipo de mecanismo de control de selección utilizado para permitir que el valor de una variable de o expresión para cambiar el flujo de control de la ejecución del programa a través de la búsqueda y el mapa."<<endl;
	}	
	if (*"auto" == *"a")
			{
			cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Captura"<<endl;
		cout<<"Funcionalidad: Las excepciones son en realidad errores durante la ejecución. Si uno de esos errores se produce y no implementamos el manejo de excepciones, el programa sencillamente terminará abruptamente."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Caracter"<<endl;
		cout<<"Funcionalidad: sirve para representar o contener un solo carácter.."<<endl;
	}	
	if (*"auto" == *"a")
			{
			cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Clase"<<endl;
		cout<<"Funcionalidad: class que sirve para definir una clase y para declarar objetos de esa clase. Su uso es parecido a la ya conocida struct."<<endl;
	}	
	if (*"auto" == *"a")
			{
			cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Constante"<<endl;
		cout<<"Funcionalidad: es el tipo de correctitud que hace referencia a la adecuada declaración de variables u objetos como inmutables."<<endl;
	}	
	if (*"auto" == *"a")
			{
				cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Emision Constante"<<endl;
		cout<<"Funcionalidad: Dos punteros posiblemente varios niveles al mismo tipo se pueden convertir entre sí. "<<endl;
	}	
	if (*"auto" == *"a")
			{
				cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Continuar"<<endl;
		cout<<"Funcionalidad: Dos punteros posiblemente varios niveles al mismo tipo se pueden convertir entre sí, independientemente de la CV."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Defecto"<<endl;
		cout<<"Funcionalidad: Define las acciones a ejecutar no especificadas por una instrucción case dentro de una estructura condicional switch"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Eliminar"<<endl;
		cout<<"Funcionalidad: sirven respectivamente para destruir los objetos creados con new y new[], volviendo a dejar la memoria asignada a disposición del gestor de memoria del compilador. "<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Hacer"<<endl;
		cout<<"Funcionalidad: hacer-mientras o también llamado ciclo do-while, es una estructura de control de la mayoría de los lenguajes de programación estructurados"<<endl;
	}	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Doble"<<endl;
		cout<<"Funcionalidad: El nombre double significa que la precisión de estos números es dos veces más que la precisión de los números del tipo float."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Emision dinamico"<<endl;
		cout<<"Funcionalidad: se utiliza, principalmente, para un downcast seguro; es decir, lanzar un puntero de clase base (o referencia) a un puntero de clase derivado (o referencia)."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Si no "<<endl;
		cout<<"Funcionalidad: son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Enumeracion"<<endl;
		cout<<"Funcionalidad: es un tipo de datos definido por el usuario donde especificamos un conjunto de valores para una variable y la variable solo puede extraer uno de un pequeño conjunto de valores posibles."<<endl;
		archivo<<texto<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Explícita "<<endl;
		cout<<"Funcionalidad: El especificador de función explícita controla las conversiones de tipo implícito no deseado."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Externo"<<endl;
		cout<<"Funcionalidad: Este especificador se usa para indicar que el almacenamiento y valor de una variable o la definición de una función están definidos en otro módulo o fichero fuente."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Falso"<<endl;
		cout<<"Funcionalidad: Literal boolean de valor cero"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Flotante"<<endl;
		cout<<"Funcionalidad: Un número real de 32 bits cuyo rango vá de 3.4+/-38. Generalmente su precisión es de 7 dígitos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Flotante"<<endl;
		cout<<"Funcionalidad: Un número real de 32 bits cuyo rango vá de 3.4+/-38. Generalmente su precisión es de 7 dígitos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Para"<<endl;
		cout<<"Funcionalidad: Un bucle for es una estructura de control de repetición que le permite escribir eficientemente un bucle que necesita ejecutarse un número específico de veces."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Amigo "<<endl;
		cout<<"Funcionalidad: Una clase de amigo puede acceder a miembros privados y protegidos de otra clase en la que se declara como amigo. "<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: ir a"<<endl;
		cout<<"Funcionalidad: Produce un salto en la ejecución del programa a una etiqueta de la función actual."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: si"<<endl;
		cout<<"Funcionalidad: Instrucción condicional"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: En línea"<<endl;
		cout<<"Funcionalidad: instruye al compilador para sustituir las llamadas a funciones con el código del cuerpo de la función."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Entero"<<endl;
		cout<<"Funcionalidad: Especificador de tipo para variables y arrays de enteros."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Largo"<<endl;
		cout<<"Funcionalidad: En el nivel más bajo, una variable se almacena en la memoria del ordenador."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Mudable"<<endl;
		cout<<"Funcionalidad: Sirve para declarar variables automáticas o locales."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Espacio de Nombre"<<endl;
		cout<<"Funcionalidad: Define un ámbito (rango)."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Nuevo"<<endl;
		cout<<"Funcionalidad: asigna memoria dinámica y devuelve un puntero del tipo iado al mismo."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Operador"<<endl;
		cout<<"Funcionalidad: La palabra reservada operator se utiliza para crear funciones de operadores sobrecargados."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Privado"<<endl;
		cout<<"Funcionalidad: se utiliza para declarar elementos privadosde una clase."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Protegido"<<endl;
		cout<<"Funcionalidad: marca el comienzo de los miembros de la clase a los que sólo se puede acceder por los propios miembros de la clase y por las funciones miembro de todas las clases derivadas."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Regristrar"<<endl;
		cout<<"Funcionalidad: es un especificador de almacenamiento para tipos de datos enteros, utilizados para informar al compilador de que el acceso a los datos debe ser tan rápido como sea posible."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Reinterpretar"<<endl;
		cout<<"Funcionalidad: permite a un programador ejecutar conversiones explícitas de tipos que son generalmente inseguros"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Retornar"<<endl;
		cout<<"Funcionalidad: La sentencia return se utiliza para detener la ejecución de la función actual y devolver el control al llamado"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Corto"<<endl;
		cout<<"Funcionalidad: short es un calificador de tamaño para variables enteras con y sin signo; alupa dos bytes,"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Firmada"<<endl;
		cout<<"Funcionalidad: El modificador de tipo signed se utiliza para indicar que los datos almacenados en un tipo entero (int o char tienen signo)."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Tamaño de:"<<endl;
		cout<<"Funcionalidad: El operador sizeof determina el número de bytes que se utilizan para almacenarable particular o tipo de datos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Estatico"<<endl;
		cout<<"Funcionalidad: las funciones declaradas static sólo son accesibles dentro del fichero fuente donde se definen."<<endl;
	}	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Espacio Estatico"<<endl;
		cout<<"Funcionalidad: Este operador realiza una conversión de tipo durante la compilación del programa, de modo que no crea más código durante la ejecución, descargando esa tarea en el compilador."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Estructura"<<endl;
		cout<<"Funcionalidad: La palabra reservada struct se utiliza para representar el tipo de datos estructura que reagrupa variables y/o funciones."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Cambiar"<<endl;
		cout<<"Funcionalidad: La sentencia switch se utiliza para realizar una bifurcación múltiple, dependiendo del valor de una expresión"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Modelo"<<endl;
		cout<<"Funcionalidad: La palabra reservada template se utiliza para crear funciones y clase genéricas."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Esta"<<endl;
		cout<<"Funcionalidad: this es un puntero al objeto actual, que significa «la dirección del objeto ara el cual esta función fue llamada»."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Lanzar"<<endl;
		cout<<"Funcionalidad: La función throw se utiliza para llamar al mecanismo de tratamiento de giones."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Verdadero"<<endl;
		cout<<"Funcionalidad: Valor verdadero (cierto). Uno de los dos valores enumerados del tipo bool"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Intentar"<<endl;
		cout<<"Funcionalidad: Indica el comienzo de un bloque de manejadores de excepciones."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Tipo de definicion"<<endl;
		cout<<"Funcionalidad: typedef se utiliza para dar un nuevo nombre a un tipo de dato existente."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Tipo de id"<<endl;
		cout<<"Funcionalidad: Este operador realiza una conversión de tipo durante la compilación del programa,"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Tipo de nombre"<<endl;
		cout<<"Funcionalidad: Una declaración class se puede anidar dentro de otra declaración template"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Union"<<endl;
		cout<<"Funcionalidad: Tipo de dato que se utiliza para asignar almacenamiento de diferentes elementos datos en la misma posición."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: No firmado"<<endl;
		cout<<"Funcionalidad: El calificador de tipos unsigned se utiliza para tipos de datos enteros (char, int, short, int y long int)"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Flotante"<<endl;
		cout<<"Funcionalidad: Un número real de 32 bits cuyo rango vá de 3.4+/-38. Generalmente su precisión es de 7 dígitos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Usando"<<endl;
		cout<<"Funcionalidad: Declaración using y directiva using. Una declaración using permite a un cliente tener acceso a todos los nombres del espacio de nombres."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Virtual"<<endl;
		cout<<"Funcionalidad: Especificador de una función que declara una función miembro de una clase que se redefinirá por una clase derivada"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: LLamada"<<endl;
		cout<<"Funcionalidad: void es un tipo de dato que se utiliza para indicar la no existencia de un valor de retorno o argumentos en una declaración y definición de una función."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Volatilo"<<endl;
		cout<<"Funcionalidad: El calificador de tipo volatile se utiliza para indicar que la variable que a volatile se puede modificar por factores externos al control del programa."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Mientras"<<endl;
		cout<<"Funcionalidad: La sentencia while permite construir un bucle cuyas sentencias interiores se ejecutan hasta que una condición o expresión se hace falsa (cero)."<<endl;
	}	
	archivo<<texto<<endl;
	
		cout<<"¿Desea Agregar otro mas textos? s/n : ";
		cin>>continuar;
		} while((continuar=='s') || (continuar=='S') );
	}
}
void abrir_archivo() {
	ifstream archivo;
	string contenido;
	archivo.open("archivo.txt",ios::in);
	
	if (archivo.fail()){
	cout<<"No se pudo abrir el archivo";
	exit(1);
	}else{
		do{
			getline(archivo,contenido);
			cout<<contenido<<endl;
		} while(archivo.eof()==false);
	archivo.close();
}
}


