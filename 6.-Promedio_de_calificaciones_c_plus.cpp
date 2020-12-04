/*Este programa lee las calificaciones finales de 4 alumnos y muestra en la salida
estándar el valor promedio de los 4 alumnos del grupo con una precisión de 2 decimales*/

# include <iostream> //Librería estándar de entrada y salida de datos
# include <locale.h> //Librería de localización (regionalización)

using namespace std; //Acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y le asignamos el valor: "Idioma español"
	float alumno1,alumno2,alumno3,alumno4,promedio = 0; //Declaramos las variables
	cout<<"Ingrese la calificación del primero alumno: "<<endl; //Solicitamos la calificación del primer alumno
	cin>>alumno1; //Almacenamos la calificación del alumno 1
	cout<<"Ingrese la calificación del segundo alumno: "<<endl; //Solicitamos la calificación del segundo alumno
	cin>>alumno2; //Almacenamos la calificación del alumno 2
	cout<<"Ingrese la calificación del tercer alumno: "<<endl; //Solicitamos la calificación del tercer alumno
	cin>>alumno3; //Almacenamos la calificación del alumno 3
	cout<<"Ingrese la calificación del cuarto alumno: "<<endl; //Solicitamos la calificación del cuarto alumno
	cin>>alumno4; //Almacenamos la calificación del cuarto alumno
	promedio = (alumno1+alumno2+alumno3+alumno4)/4; //Sumamos las 4 calificaciónes y las dividimos entre cuatro para obtener el promedio
	cout.precision(2);
	cout<<"El promedio de grupo es: "<<endl; //Imprimimos el mensaje de salida
	cout<<promedio; //Imprimimos el valor del promedio
	return 0; //Fin del programa
}
/*Este programa fue escrito por Emilio Carcaño Bringas*/
