///// FUNCTION INTRO ///////////////////////////////////////////////////////////
// 01. javascript function and syntax
// 02. function invocation
// 03. function return
// 04. why function
// 05. the () operator invokes the function
// 06. functions used as variable values
// 07. local variables

////////////////////////////////////////////////////////////////////////////////
var outAA = document.createElement('div');
outAA.setAttribute('id', 'styleOne');
document.body.appendChild(outAA);

////////////////////////////////////////////////////////////////////////////////
function ExAA() {
    outAA.innerHTML += '<br >output of JavaScript';
    outAA.innerHTML += '<br >';    
}

////////////////////////////////////////////////////////////////////////////////
outAA.innerHTML += 'ex-aa : function and why | function syntax | function return';
outAA.innerHTML += '<hr >'; ExAA();