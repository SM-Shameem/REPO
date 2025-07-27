// function
// function expression 
// arrow function 

// arguments and return type
// self-invoking function
// first-class function 

// ----------------------------------------------------------------------------
// function - declaration | expression | arrow 
// ----------------------------------------------------------------------------
function func_aa() {
    var var_aa;
    console.log('var_aa - ' + var_aa);
}

const func_ab = function () {
    var var_ab = null;
    console.log('var_ab - ' + var_ab);
};

const func_ac = () => {
    var var_ac = 10;
    console.log('var_ac - ' + var_ac);
}

func_aa();
func_ab();
func_ac();
console.log('\n');

// ----------------------------------
// self-invoking 
// ----------------------------------
(function () { var var_ad; var_ad = 11; console.log('var_ad - ' + var_ad); })();
(() => { var_ae = 100 + 1; console.log('var_ae - ' + var_ae); })();

console.log('\n');

// ----------------------------------
// first-class 
// ----------------------------------
function func_ba() { console.log(arguments[0]()); }
const func_bb = function () { console.log(arguments[0]()); };
const func_bc = (arg) => console.log(arg());

func_ba(() => console.log('func_ba - ' + 111));
func_bb(function () { console.log('func_bb - ' + 222); });
func_bc(function fcFunc() { console.log('func_bc - ' + 333); });

// ----------------------------------
function func_bd() {
    arguments[0](444);
}

function func_be() {
    console.log('func_bde - ' + arguments[0]);
}

func_bd(func_be);
// func_bd(func_be());

console.log('\n');

// ----------------------------------------------------------------------------
// arguments - declaration | expression | arrow
// ----------------------------------------------------------------------------
function func_ca(argOne, argTwo) {
    console.log('arg - ' + argOne);
    console.log('arg - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
}

const func_cb = function (argOne, argTwo) {
    console.log('arg - ' + argOne);
    console.log('arg - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
}

const func_cc = (argOne, argTwo) => {
    console.log('arg - ' + argOne);
    console.log('arg - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
}

const func_cd = arg => console.log('arg - ' + arg);
const func_ce = arg => arg;

func_ca(10, 20, 30, 40, 50);
func_cb(11, 22, 33, 44, 55);
func_cc(1, 2, 3, 4, 5);
func_ca(10, 20, 30);
func_cb(11, 22, 33);
func_cc(1, 2, 3);
func_cd(111);
console.log(func_ce(222));

console.log('\n');

// ----------------------------------
// self-invoking 
// ----------------------------------
(function (argOne, argTwo) { 
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
})(111, 222, 333, 444, 555);

((argOne, argTwo) => { 
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
})(100, 200, 300, 400, 500);

console.log('\n');

// ----------------------------------
// first-class
// ----------------------------------
function func_da() {
    arguments[0]('a', 'b', 'c', 'd', 'e');
}

func_da(function (argOne, argTwo) {
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
});

func_da((argOne, argTwo) => {
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
});

const func_db = function () {
    arguments[0]('aa', 'bb', 'cc', 'dd', 'ee');
}

func_db(function (argOne, argTwo) {
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
});

func_db((argOne, argTwo) => {
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
});

const func_dc = (arg) => {
    // arguments[0]('aa', 'bb', 'cc', 'dd', 'ee');
    arg('aaa', 'bbb', 'ccc', 'ddd', 'eee');
}

func_dc(function (argOne, argTwo) {
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
});

func_dc((argOne, argTwo) => {
    console.log('argOne - ' + argOne);
    console.log('argTwo - ' + argTwo);
    console.log('arguments - ' + arguments);
    console.log('arguments[0] - ' + arguments[0]);
    console.log('arguments[1] - ' + arguments[1]);
    console.log('arguments[2] - ' + arguments[2]);
    console.log('arguments[3] - ' + arguments[3]);
});

console.log('\n');

// ----------------------------------------------------------------------------
// return - declaration | expression | arrow 
// ----------------------------------------------------------------------------
function func_ea() {
    return arguments[0];
}

const func_eb = function () {
    return arguments[0];
};

const func_ec = () => {
    return arguments[0];
};

console.log('func_ea - ' + func_ea(11));
console.log('func_eb - ' + func_eb(22));
console.log('func_ec - ' + func_ec(33));
console.log('\n');

// ----------------------------------
// self-invoking
// ----------------------------------
console.log('func_ed - ' + (function () { return arguments[0]; })(44));
console.log('func_ee - ' + (() => arguments[0])(55));
console.log('\n');

// ----------------------------------
// first-class
// ----------------------------------
function func_fa() {
    return arguments[0](1);
}

console.log('func_fa - ' + func_fa(function () { return arguments[0] }));
console.log('func_fa - ' + func_fa(() => { return arguments[0] }));

const func_fb = function () {
    return arguments[0](2);
};

console.log('func_fb - ' + func_fb(function () { return arguments[0] }));
console.log('func_fb - ' + func_fb(() => { return arguments[0] }));

const func_fc = () => {
    return arguments[0];
};

console.log('func_fc - ' + func_fc(function () { return arguments[0] }));
console.log('func_fc - ' + func_fc(() => { return arguments[0] }));