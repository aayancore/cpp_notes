let i=10, j=100;
function myFunction1() {  
  document.getElementById("demo1").innerHTML = "Paragraph changed." + j++;
}
function myFunction2() {
  document.getElementById("demo2").innerHTML = "External Paragraph changed." + i++;
}
function myFunction3() {  
  window.alert('alert testing ');
}
function myFunction4() {  
	const inputValue = document.getElementById("name").value; 
	document.getElementById("demo3").innerHTML = inputValue;
  window.alert('alert testing ' + inputValue);
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
	window.alert(obj.value + ' selected ' );
	console.log('name = ' + obj.name + ' value = ' + obj.value);
	var label;
	switch (obj.value)
	{
		case 'HTML': 
			label = document.querySelector('label[for="html"]'); 
			label.textContent = obj.value + " selected";
		break;
		case 'CSS': 
			label = document.querySelector('label[for="css"]'); 
			label.textContent = obj.value + " selected";
		break;
		case 'JavaScript': 
			label = document.querySelector('label[for="javascript"]'); 
			label.textContent = obj.value + " selected";
		break;
	}
	
	//label.textContent = obj.value + " selected";
    // Change the text content
    
  
}