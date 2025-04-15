// scope | hosting | strict-mode of function 
// scope | hosting | strict-mode of function expression 
// scope | hosting | strict-mode of arrow function 
// scope | hosting | strict-mode of self-invoking and first-class

// object-method 
// object-constructor
// class-method
// class-constructor 

// ----------------------------------------------------------------------------
// declaration | expression | arrow - scope | hosting 
// ----------------------------------------------------------------------------
console.log('func_aa - ' + func_aa('aaa'));
// console.log('func_ab - ' + func_ab('abb'));
// console.log('func_ac - ' + func_ac('acc'));
// console.log('func_ad - ' + func_ad('add'));
// console.log('func_ae - ' + func_ae('aee'));

function func_aa() { return arguments[0]; }
const func_ab = function () { return arguments[0]; };
var func_ac = function () { return arguments[0]; };
const func_ad = () => { return arguments[0]; };
var func_ae = () => { return arguments[0]; };

console.log('func_aa - ' + func_aa('aa'));
console.log('func_ab - ' + func_ab('ab'));
console.log('func_ac - ' + func_ac('ac'));
console.log('func_ad - ' + func_ad('ad'));
console.log('func_ae - ' + func_ae('ae'));

// ------------------------------------
function funcScope() {
    function func_aaa() { return arguments[0]; }
    const func_abb = function () { return arguments[0]; };
    var func_acc = function () { return arguments[0]; };
    const func_add = () => { return arguments[0]; };
    var func_aee = () => { return arguments[0]; };
}

funcScope();
console.log('func_aaa - ' + func_aa('aa'));
console.log('func_abb - ' + func_ab('ab'));
console.log('func_acc - ' + func_ac('ac'));
console.log('func_add - ' + func_ad('ad'));
console.log('func_aee - ' + func_ae('ae'));

// ------------------------------------
{
    function func_ba() { return arguments[0]; }
    const func_bb = function () { return arguments[0]; };
    var func_bc = function () { return arguments[0]; };
    let func_bd = () => { return arguments[0]; };
    var func_be = () => { return arguments[0]; };
}

console.log('func_ba - ' + func_ba('ba'));
// console.log('func_bb - ' + func_bb('bb'));
console.log('func_bc - ' + func_bc('bc'));
// console.log('func_bd - ' + func_bd('bd'));
console.log('func_be - ' + func_be('bd'));

console.log('\n');

// ----------------------------------------------------------------------------
// object-method 
// ----------------------------------------------------------------------------
const obj_aa = {
    proOne: null,
    proTwo: null,
    methodOne: function () {
        return this.proOne + this.proTwo;
    },
    methodTwo: function () {
        this.proOne = arguments[0];
        this.proTwo = arguments[1];
        if(this.proOne == this.proTwo)
            return this.proOne + this.proTwo;
        else return this.methodThree(arguments[0], arguments[1]);
    },
    methodThree: (argOne, argTwo) => {
        this.proOne = argOne;
        this.proTwo = argTwo;
        return this.proOne + this.proTwo;
    }
};

obj_aa.proOne = 10;
obj_aa.proTwo = 20;
console.log('obj_aa.methodOne - ' + (obj_aa.methodOne()));
console.log('obj_aa.methodTwo - ' + (obj_aa.methodTwo()));
console.log('obj_aa.methodTwo - ' + (obj_aa.methodTwo(11, 22)));
console.log('obj_aa.methodTwo - ' + (obj_aa.methodTwo(22, 22)));

console.log('\n');

// ----------------------------------------------------------------------------
// object-constructor 
// ----------------------------------------------------------------------------
const Constructor_ab = function () {
    this.localOne = arguments[0];
    this.localTwo;
    this.methodOne = function () {
        return this.localOne + this.localTwo;
    };
    this.methodTwo = function () {
        this.localTwo = arguments[0];
        if(this.localOne == this.localTwo) 
            return this.localOne + this.localTwo;
        else return this.methodThree(this.localOne, this.localTwo);
    };
    this.methodThree = (argOne, argTwo) => {
        return (argOne + argTwo);
    };
};

const obj_ab = new Constructor_ab(10);
obj_ab.localTwo = 20;
console.log('methodOne - ' + obj_ab.methodOne());
console.log('methodTwo - ' + obj_ab.methodTwo(10));
console.log('methodTwo - ' + obj_ab.methodTwo(20));

console.log('\n');

// ----------------------------------------------------------------------------
// class-method | class-constructor
// ----------------------------------------------------------------------------
class class_ac {
    methodOne() {
        this.proOne = arguments[0];
        this.proTwo = arguments[1];
        return this.proOne + this.proTwo;
    };    
    methodTwo() {
        let localOne = arguments[0];
        let localTwo = arguments[1];
        return localOne + localTwo;
    };
    methodThree() {
        console.log('proOne - ' + this.proOne);
        console.log('proTwo - ' + this.proTwo);
        // console.log('localOne - ' + localOne);
        // console.log('localTwo - ' + localTwo);
        return this.methodOne() + this.methodTwo();
    };
};

const obj_ac = new class_ac();
console.log('obj_ac.methodOne - ' + obj_ac.methodOne(11, 22));
console.log('obj_ac.methodTwo - ' + obj_ac.methodTwo(10, 20));
console.log('obj_ac.methodThree - ' + obj_ac.methodThree());

class class_ad {
    constructor() {
        var localOne = arguments[0];
        let localTwo = arguments[1];
        this.proOne = localOne + localTwo;
        this.proTwo = localOne - localTwo;
    };
    method() {
        return this.proOne + this.proTwo;
    };
};

const obj_ad = new class_ad(11, 22);
console.log('obj_ad.method - ' + obj_ad.method());

class class_extended extends class_ad {
    constructor() {
        super(arguments[0], arguments[1]);
        this.proThree = arguments[0] * arguments[1];
    }
    methodOne() {
        return this.proOne - this.proTwo + this.proThree;
    };
};

const obj_ext = new class_extended(11, 22);
console.log('obj_ext.methodOne - ' + obj_ext.methodOne());