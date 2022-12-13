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
		cout<<"Funcionalidad: Especifica que el tipo de la variable que se est� declarando ser� autom�ticamente deducida de su inicializador."<<endl;
	}	
	if (*"auto" == *"a")
			{
			cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Booleana"<<endl;
		cout<<"Funcionalidad: El tipo bool del Est�ndar C++ puede tener dos estados expresados por las constantes predefinidas true (lo que lo convierte en el entero 1) y false (lo que lo convierte en el entero 0). ."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Romper"<<endl;
		cout<<"Funcionalidad: Se utiliza para salir de un bucle (while, do-while o for), cuando se da alguna condici�n especial."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: caso"<<endl;
		cout<<"Funcionalidad: es un tipo de mecanismo de control de selecci�n utilizado para permitir que el valor de una variable de o expresi�n para cambiar el flujo de control de la ejecuci�n del programa a trav�s de la b�squeda y el mapa."<<endl;
	}	
	if (*"auto" == *"a")
			{
			cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Captura"<<endl;
		cout<<"Funcionalidad: Las excepciones son en realidad errores durante la ejecuci�n. Si uno de esos errores se produce y no implementamos el manejo de excepciones, el programa sencillamente terminar� abruptamente."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Caracter"<<endl;
		cout<<"Funcionalidad: sirve para representar o contener un solo car�cter.."<<endl;
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
		cout<<"Funcionalidad: es el tipo de correctitud que hace referencia a la adecuada declaraci�n de variables u objetos como inmutables."<<endl;
	}	
	if (*"auto" == *"a")
			{
				cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Emision Constante"<<endl;
		cout<<"Funcionalidad: Dos punteros posiblemente varios niveles al mismo tipo se pueden convertir entre s�. "<<endl;
	}	
	if (*"auto" == *"a")
			{
				cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Continuar"<<endl;
		cout<<"Funcionalidad: Dos punteros posiblemente varios niveles al mismo tipo se pueden convertir entre s�, independientemente de la CV."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Defecto"<<endl;
		cout<<"Funcionalidad: Define las acciones a ejecutar no especificadas por una instrucci�n case dentro de una estructura condicional switch"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Eliminar"<<endl;
		cout<<"Funcionalidad: sirven respectivamente para destruir los objetos creados con new y new[], volviendo a dejar la memoria asignada a disposici�n del gestor de memoria del compilador. "<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Hacer"<<endl;
		cout<<"Funcionalidad: hacer-mientras o tambi�n llamado ciclo do-while, es una estructura de control de la mayor�a de los lenguajes de programaci�n estructurados"<<endl;
	}	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Doble"<<endl;
		cout<<"Funcionalidad: El nombre double significa que la precisi�n de estos n�meros es dos veces m�s que la precisi�n de los n�meros del tipo float."<<endl;
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
		cout<<"Funcionalidad: son una estructura de control, que nos permiten tomar cierta decisi�n al interior de nuestro algoritmo."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Enumeracion"<<endl;
		cout<<"Funcionalidad: es un tipo de datos definido por el usuario donde especificamos un conjunto de valores para una variable y la variable solo puede extraer uno de un peque�o conjunto de valores posibles."<<endl;
		archivo<<texto<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Expl�cita "<<endl;
		cout<<"Funcionalidad: El especificador de funci�n expl�cita controla las conversiones de tipo impl�cito no deseado."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Externo"<<endl;
		cout<<"Funcionalidad: Este especificador se usa para indicar que el almacenamiento y valor de una variable o la definici�n de una funci�n est�n definidos en otro m�dulo o fichero fuente."<<endl;
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
		cout<<"Funcionalidad: Un n�mero real de 32 bits cuyo rango v� de 3.4+/-38. Generalmente su precisi�n es de 7 d�gitos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Flotante"<<endl;
		cout<<"Funcionalidad: Un n�mero real de 32 bits cuyo rango v� de 3.4+/-38. Generalmente su precisi�n es de 7 d�gitos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Para"<<endl;
		cout<<"Funcionalidad: Un bucle for es una estructura de control de repetici�n que le permite escribir eficientemente un bucle que necesita ejecutarse un n�mero espec�fico de veces."<<endl;
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
		cout<<"Funcionalidad: Produce un salto en la ejecuci�n del programa a una etiqueta de la funci�n actual."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: si"<<endl;
		cout<<"Funcionalidad: Instrucci�n condicional"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: En l�nea"<<endl;
		cout<<"Funcionalidad: instruye al compilador para sustituir las llamadas a funciones con el c�digo del cuerpo de la funci�n."<<endl;
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
		cout<<"Funcionalidad: En el nivel m�s bajo, una variable se almacena en la memoria del ordenador."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Mudable"<<endl;
		cout<<"Funcionalidad: Sirve para declarar variables autom�ticas o locales."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Espacio de Nombre"<<endl;
		cout<<"Funcionalidad: Define un �mbito (rango)."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Nuevo"<<endl;
		cout<<"Funcionalidad: asigna memoria din�mica y devuelve un puntero del tipo iado al mismo."<<endl;
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
		cout<<"Funcionalidad: marca el comienzo de los miembros de la clase a los que s�lo se puede acceder por los propios miembros de la clase y por las funciones miembro de todas las clases derivadas."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Regristrar"<<endl;
		cout<<"Funcionalidad: es un especificador de almacenamiento para tipos de datos enteros, utilizados para informar al compilador de que el acceso a los datos debe ser tan r�pido como sea posible."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Reinterpretar"<<endl;
		cout<<"Funcionalidad: permite a un programador ejecutar conversiones expl�citas de tipos que son generalmente inseguros"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Retornar"<<endl;
		cout<<"Funcionalidad: La sentencia return se utiliza para detener la ejecuci�n de la funci�n actual y devolver el control al llamado"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Corto"<<endl;
		cout<<"Funcionalidad: short es un calificador de tama�o para variables enteras con y sin signo; alupa dos bytes,"<<endl;
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
		cout<<"Definicion: Tama�o de:"<<endl;
		cout<<"Funcionalidad: El operador sizeof determina el n�mero de bytes que se utilizan para almacenarable particular o tipo de datos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Estatico"<<endl;
		cout<<"Funcionalidad: las funciones declaradas static s�lo son accesibles dentro del fichero fuente donde se definen."<<endl;
	}	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Espacio Estatico"<<endl;
		cout<<"Funcionalidad: Este operador realiza una conversi�n de tipo durante la compilaci�n del programa, de modo que no crea m�s c�digo durante la ejecuci�n, descargando esa tarea en el compilador."<<endl;
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
		cout<<"Funcionalidad: La sentencia switch se utiliza para realizar una bifurcaci�n m�ltiple, dependiendo del valor de una expresi�n"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Modelo"<<endl;
		cout<<"Funcionalidad: La palabra reservada template se utiliza para crear funciones y clase gen�ricas."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Esta"<<endl;
		cout<<"Funcionalidad: this es un puntero al objeto actual, que significa �la direcci�n del objeto ara el cual esta funci�n fue llamada�."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Lanzar"<<endl;
		cout<<"Funcionalidad: La funci�n throw se utiliza para llamar al mecanismo de tratamiento de giones."<<endl;
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
		cout<<"Funcionalidad: Este operador realiza una conversi�n de tipo durante la compilaci�n del programa,"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Tipo de nombre"<<endl;
		cout<<"Funcionalidad: Una declaraci�n class se puede anidar dentro de otra declaraci�n template"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Union"<<endl;
		cout<<"Funcionalidad: Tipo de dato que se utiliza para asignar almacenamiento de diferentes elementos datos en la misma posici�n."<<endl;
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
		cout<<"Funcionalidad: Un n�mero real de 32 bits cuyo rango v� de 3.4+/-38. Generalmente su precisi�n es de 7 d�gitos."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Usando"<<endl;
		cout<<"Funcionalidad: Declaraci�n using y directiva using. Una declaraci�n using permite a un cliente tener acceso a todos los nombres del espacio de nombres."<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: Virtual"<<endl;
		cout<<"Funcionalidad: Especificador de una funci�n que declara una funci�n miembro de una clase que se redefinir� por una clase derivada"<<endl;
	}	
	if (*"auto" == *"a")
			{
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Definicion: LLamada"<<endl;
		cout<<"Funcionalidad: void es un tipo de dato que se utiliza para indicar la no existencia de un valor de retorno o argumentos en una declaraci�n y definici�n de una funci�n."<<endl;
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
		cout<<"Funcionalidad: La sentencia while permite construir un bucle cuyas sentencias interiores se ejecutan hasta que una condici�n o expresi�n se hace falsa (cero)."<<endl;
	}	
	archivo<<texto<<endl;
	
		cout<<"�Desea Agregar otro mas textos? s/n : ";
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


