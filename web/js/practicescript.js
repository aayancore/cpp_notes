let i=10, j=100;
function myFunction1(obj) {  
	//alert(obj.id);
	switch (obj.id)
	{
		case 'btn1': 
		//alert("id = " + obj.id + "  " + obj.innerText);
		obj.innerText = "Clicked ";
		document.getElementById("demo1").innerHTML = "Paragraph changed." + i++;
		break;
		case 'btn2':
		document.getElementById("demo2").innerHTML = "another Paragraph changed." + j++;
		break;
	}
}
function functionCB() {  
  if (document.getElementById("cb1").checked)
	  document.getElementById("name1").required = true;
  else
	 document.getElementById("name1").required = false;
 alert(document.getElementById("name1").required);
}
function myFunction3() {  
  window.alert('go back ');
}
function myFunction4() {
	const n = document.getElementById("name1").value; 
	document.getElementById("demo3").innerHTML = n*n;
}
function myFunction5() {  
	const n = document.getElementById("name").value; 
	let text ='';
	for (let i = 1; i <= 10; i++) {
		text += n +  " * " +  i + " = " + n*i + "<br>";
	}
	document.getElementById("demo5").innerHTML = text ;
	
	var x = document.getElementById("demo5");
    if (x.style.display === "none") {
        x.style.display = "block";
		document.getElementById("btn").innerText = 'Hide Table';
    } else {
        x.style.display = "none";
		document.getElementById("btn").innerText = 'Show Table';
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