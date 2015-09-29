/*StringCalculator: 
En este archivo se escribe el código JavasScript
*/
/*TODO
Continuar con pruebas avanzadas
*/
var Calculator={
	add:function(numbers){	
		var nums;
		nums=Calculator.getNumbers(numbers);		
		return numbers===""?0:Calculator.getSum(nums);
	},
	getSpecificDelimiter:function(numbers){
		return numbers.substring(3,2);
	},
	getNumbers:function(numbers){
		var nums;
		var delimiter=/\n|,/;
		if(numbers.indexOf("//")>-1){
			delimiter=Calculator.getSpecificDelimiter(numbers);
		}
		nums=numbers.split(delimiter);
		return nums;
	},
	getSum:function(nums){
		var result=0;
		for(var i=0;i<nums.length;i++){
			if(!isNaN(parseInt(nums[i]))){
				if(parseInt(nums[i])<0){
					throw "Negativos no permitidos";
				}else{
					result=result+parseInt(nums[i]);
				}
			}
		}
		return result;
	}
};