/*Este programa lee las calificaciones finales de 4 alumnos y muestra en la salida
est�ndar el valor promedio de los 4 alumnos del grupo con una precisi�n de 2 decimales*/

# include <iostream> //Librer�a est�ndar de entrada y salida de datos
# include <locale.h> //Librer�a de localizaci�n (regionalizaci�n)

using namespace std; //Acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y le asignamos el valor: "Idioma espa�ol"
	float alumno1,alumno2,alumno3,alumno4,promedio = 0; //Declaramos las variables
	cout<<"Ingrese la calificaci�n del primero alumno: "<<endl; //Solicitamos la calificaci�n del primer alumno
	cin>>alumno1; //Almacenamos la calificaci�n del alumno 1
	cout<<"Ingrese la calificaci�n del segundo alumno: "<<endl; //Solicitamos la calificaci�n del segundo alumno
	cin>>alumno2; //Almacenamos la calificaci�n del alumno 2
	cout<<"Ingrese la calificaci�n del tercer alumno: "<<endl; //Solicitamos la calificaci�n del tercer alumno
	cin>>alumno3; //Almacenamos la calificaci�n del alumno 3
	cout<<"Ingrese la calificaci�n del cuarto alumno: "<<endl; //Solicitamos la calificaci�n del cuarto alumno
	cin>>alumno4; //Almacenamos la calificaci�n del cuarto alumno
	promedio = (alumno1+alumno2+alumno3+alumno4)/4; //Sumamos las 4 calificaci�nes y las dividimos entre cuatro para obtener el promedio
	cout.precision(2);
	cout<<"El promedio de grupo es: "<<endl; //Imprimimos el mensaje de salida
	cout<<promedio; //Imprimimos el valor del promedio
	return 0; //Fin del programa
}
/*Este programa fue escrito por Emilio Carca�o Bringas*/
