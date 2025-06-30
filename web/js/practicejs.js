let i=10, j=100;
function myFunction1() {  
  document.getElementById("demo1").innerHTML = "Paragraph changed." + ++i;
}
function myFunction2() {  
  document.getElementById("demo2").innerHTML = "Paragraph changed." + ++j;
}
function myFunction3() {  
  window.alert('go back');
}
function myFunction5() {  
	let text ='';
	for (let i = 1; i <= 10; i++) {
		text += i+ "<br>";
	}
	document.getElementById("demo5").innerHTML = text ;
	
	var x = document.getElementById("demo5");
    if (x.style.display === "none") {
        x.style.display = "block";
		document.getElementById("btn").innerText = 'Hide 1 to 10';
    } else {
        x.style.display = "none";
		document.getElementById("btn").innerText = 'Show 1 to 10';
    }
}
function myFunction6(obj) {  
	//window.alert(obj.value + ' selected ' );
	console.log('name = ' + obj.name + ' value = ' + obj.value);
	var label;
	initialize();
	switch (obj.value)
	{
		case 'Volvo': 
			label = document.querySelector('label[for="Volvo"]'); 
			label.textContent = obj.value + " selected";
		break;
		case 'Fiat': 
			label = document.querySelector('label[for="Fiat"]'); 
			label.textContent = obj.value + " selected";
		break;
		case 'Audi': 
			label = document.querySelector('label[for="Audi"]'); 
			label.textContent = obj.value + " selected";
		break;
	}
}
function initialize(){
	document.querySelector('label[for="Volvo"]').textContent = "Volvo";
	document.querySelector('label[for="Fiat"]').textContent = "Fiat";
	document.querySelector('label[for="Audi"]').textContent = "Audi";
}
function myFunction4(){
	alert('hello");
}