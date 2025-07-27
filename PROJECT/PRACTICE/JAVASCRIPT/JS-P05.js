// function
// function expression 
// arrow function 

// arguments and return type
// local | global (undeclared | var | let | const)

// self-invoking function
// first-class function 

// scope | hosting | strict-mode of function 
// scope | hosting | strict-mode of function expression 
// scope | hosting | strict-mode of arrow function 
// scope | hosting | strict-mode of self-invoking and first-class


// ----------------------------------------------------------------------------
// function - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------
console.log('\n');
console.log('function ........................................');

function func_aa() {
    console.log('func_aa: definition ..........');
}

const func_ab = function () {
    console.log('func_ab: expression-1 ........');
}

let func_ac = function () {
    console.log('func_ac: expression-2 ........');
}

var func_ad = function () {
    console.log('func_ad: expression-3 ........');
}

const func_ae = () => {
    console.log('func_ae: arrow-1 .............');
}

let func_af = () => {
    console.log('func_af: arrow-2 .............');
}

// var func_ag = () => {
//     console.log('func_af: arrow-3 ............');
// }

const func_ag = () => console.log('func_ag: arrow-4 .............');

func_aa();
func_ab();
func_ac();
func_ad();
func_ae();
func_af();
func_ag();

// ----------------------------------------------------------------------------
// return - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------
console.log('\n');
console.log('return ........................................');

function func_ba() {
    return 'func_ba: definition-return ...............';
}

const func_bb = function () {
    return 'func_bb: expression-1-return ...............';
}

let func_bc = function () {
    return 'func_bc: expression-2-return ...............';
}

var func_bd = function () {
    return 'func_bd: expression-3-return ...............';
}

const func_be = () => {
    return 'func_be: arrow-1-return ...............';
}

const func_bf = () => 'func_bf: arrow-2-return ................';

console.log(func_ba());
console.log(func_bb());
console.log(func_bc());
console.log(func_bd());
console.log(func_be());
console.log(func_bf());

// ----------------------------------------------------------------------------
// argument - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------
console.log('\n');
console.log('arguments ........................................');

function func_ca(arg) {
    console.log(arg);
    return arg;
}

function func_cb() {
    console.log(arguments[0]);
    return arguments[0];
}

const func_cc = function (argOne, argTwo, argTwo) {
    console.log('func_cc - argOne : ' + argOne);
    console.log('func_cc - argTwo : ' + argTwo);
    console.log('func_cc - argTwo - ' + argTwo);
    return argOne + argTwo;
}

let func_cd = function (argOne, argTwo=10, argThree=true) {
    console.log('func_cd - argOne       : ' + argOne);
    console.log('func_cd - argTwo (d)   : ' + argTwo);
    console.log('func_cd - argThree (d) : ' + argThree);
    return argOne + argTwo + argThree;
}

var func_ce = function() {
    console.log('func_ce - arguments[0] : ' + arguments[0]);
    console.log('func_ce - arguments[1] : ' + arguments[1]);
    console.log('func_ce - arguments[2] : ' + arguments[2]);
    return arguments[0] + arguments[1] + arguments[2];
}

func_ca('func_ca ..........');
func_cb('func_cb ..........');
func_cc(11, 22, 33);
func_cd(111);
func_ce(1, 2);
console.log(func_cc(10, 20, 30, 40));
console.log(func_cd(111, 222, 333, 444));
console.log(func_ce(1, 2, 3, 4));
console.log('\n');

const func_cf = (arg) => arg;
const func_cg = arg => arg;
const func_ch = arg => { return arg; };
const func_ci = (argOne, argTwo) => argOne + argTwo;
// const func_cj = (argOne, argTwo, argTwo) => argOne + argTwo;
const func_ck = (argOne, argTwo = 11, argThree) => argOne + argTwo + argThree;
const func_cl = () => arguments[0];
const func_cm = () => { return arguments[0]; }

console.log('func_cf: ' + func_cf(1));
console.log('func_cg: ' + func_cg(2));
console.log('func_ch: ' + func_ch(3));
console.log('func_ci: ' + func_ci(11, 22));
console.log('func_ci: ' + func_ci(10));
// console.log('func_cj: ' + func_cj(111, 222, 333, 444));
console.log('func_ck: ' + func_ck(101, 202, 303));
console.log('func_cl: ' + func_cl(100));
console.log('func_cm: ' + func_cm);


// ----------------------------------------------------------------------------
// local:global - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------



// ----------------------------------------------------------------------------
// self-invoke - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------
console.log('\n');
console.log('self-invoking ........................................');

(function () { console.log('func-ea ...........'); })();
// (const func_eb() = function () {})();
(() => console.log('func-ec ...........') )();

// ----------------------------------------------------------------------------
// first-class - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------
console.log('\n');
console.log('first-class ........................................');

function func_fa() {
    console.log('func_fa: definition > ' + arguments[0]);
    console.log('func_fa: return value > ' + arguments[0]());
}

function func_fb(arg) {
    console.log('func_fb: definition > ' + arg);
    console.log('func_fb: return value > ' + arg());
}

func_fa(function () { return 'first-class - definition'});
// func_fa(const a = function () { return 'first-class - expression'});
func_fa(() => 'first-class - arrow');
func_fb(function () { return 'first-class - definition'});
func_fb(() => 'first-class - arrow');

// ----------------------------------------------------------------------------
// scope - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------



// ----------------------------------------------------------------------------
// hosting - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------



// ----------------------------------------------------------------------------
// strict - definition | expression | arrow | self-invoking | first-class
// ----------------------------------------------------------------------------
