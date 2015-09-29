/*En este archivo van los casos de prueba*/
QUnit.test("Session 1: StringCalculator Tests", function(){
	//TODO: escribir todos los casos de prueba
	equal(Calculator.add(""),0,"Prueba cadena vacía");
	equal(Calculator.add("5"),5,"Prueba suma de un número");
	equal(Calculator.add("4,5"),9,"Prueba suma de 4+5=9");
	equal(Calculator.add("1,2,3,4,5"),15,"Prueba suma de varios números");
	equal(Calculator.add("1\n2,3"),6,"Prueba separador nueva línea");
	equal(Calculator.add("//;\n1;2"),3,"Prueba separador específico");
	throws(function(){
		Calculator.add("1,2,-3")
	},"Negativos no permitidos");
});