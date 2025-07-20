    function changeText(id) {
        id.innerHTML = "Ooops!";
    }
    function displaydate(){
      document.getElementById("btn2").innerHTML = "current date";
      document.getElementById("demo").innerHTML = Date();
    }
    function upperCase(x) {
    //const x = document.getElementById("fname");
    x.value = x.value.toUpperCase();
    }
    function mOver(obj) {
      obj.innerHTML = "Thank You"
    }

    function mOut(obj) {
      obj.innerHTML = "Mouse Over Me"
    }

    function myFunction() {
      document.getElementById("demo5").innerHTML += "Moused over!<br>";
    }

    function mySecondFunction() {
      document.getElementById("demo5").innerHTML += "Clicked!<br>";
    }

    function myThirdFunction() {
      document.getElementById("demo5").innerHTML += "Moused out!<br>";
    }





function myFunction1() {  
  document.getElementById("demo1").style = "color:Red;background-color:DodgerBlue;";

  const container = document.getElementById("demo1");

// 2. Create a new element that you want to append.
const newParagraph = document.createElement("p");

// 3. Set content or attributes for the new element (optional).
newParagraph.textContent = "This is a new paragraph added dynamically!";
newParagraph.style.color = "blue";

// 4. Append the new element as a child to the parent element.
container.appendChild(newParagraph);
}