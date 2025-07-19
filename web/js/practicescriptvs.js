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