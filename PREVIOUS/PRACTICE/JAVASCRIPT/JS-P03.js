// function recursion -----
// function generator --
// function closure 
// function async 
// function async generator

// ----------------------------------------------------------------------------
// function recursion 
// ----------------------------------------------------------------------------
let i = 0;
func_aa();
func_cc();

function func_aa() {
    console.log('func-aa ..... : ' + i);
    if (i < 10) func_bb();
    else return 0;
}

function func_bb() {
    console.log('func-bb ..... : ' + i);
    i++;
    func_aa();
}

function func_cc() {
    console.log('func-cc ..... : ' + i);
    if (i > 0) {
        i--;
        func_cc();
    } else return 0;
}

console.log('\n');

// --------------------------------------
// expression - recursion 
// --------------------------------------
let j = 0;
const func_da = function () {
    console.log('func_da ..... > ' + j);
    if (j < 5) func_db();
    else return 0;
};

const func_db = function () {
    console.log('func_db ..... > ' + j);
    j++;
    func_da();
};

const func_dc = function () {
    console.log('func_dc ..... > ' + j);
    if (j > 0) {
        j--;
        func_dc();
    } else return 0;
};

func_da();
func_dc();
console.log('\n');

// --------------------------------------
// arrow - recursion 
// --------------------------------------
let k = 0;
const func_dd = () => {
    console.log('func_dc ..... # ' + k);
    if (k < 5) func_de();
    else return 0;
};

const func_de = () => {
    console.log('func_de ..... # ' + k);
    k++;
    func_dd();
};

const func_df = () => {
    console.log('func_df ..... # ' + k);
    if (k > 0) {
        k--;
        func_df();
    } else return 0;
}

func_de();
func_df();
console.log('\n');

// ----------------------------------------------------------------------------
// generator
// ----------------------------------------------------------------------------
function* generator() {
    yield 1;
    yield 2;
    yield 3;
}

const generatorIterator = generator();

console.log('generatorIterator - ' + generator());
console.log('generatorIterator - ' + generatorIterator);
console.log('generatorIterator - ' + generator().value);
console.log('generatorIterator - ' + generatorIterator.value);
console.log('generatorIterator - ' + generator().next().value);
console.log('generatorIterator - ' + generatorIterator.next().value);
console.log('generatorIterator - ' + generator().next().value);
console.log('generatorIterator - ' + generatorIterator.next().value);
console.log('generatorIterator - ' + generator().next().value);
console.log('generatorIterator - ' + generatorIterator.next().value);

function* generatorOne() {
    yield 10;
    yield 20;
    yield 30;
    return 40;
    return 50;
}

function funcOne() {
    // yield 11;
    // yield 22;
    return 33;
    return 44;
}

const geneOne = generatorOne();
console.log('geneOne - ' + geneOne.next().value);
console.log('geneOne - ' + geneOne.next().value);
console.log('geneOne - ' + geneOne.next().value);
console.log('geneOne - ' + geneOne.next().value);
console.log('geneOne - ' + geneOne.next().value);
console.log('funcOne - ' + funcOne());

console.log('\n');

// --------------------------------------
// expression | arrow - generator 
// --------------------------------------
const generator_aa = function* () {
    yield 100;
    yield 200;
    yield 300;
};

const gIterator_aa = generator_aa();
console.log('gIterator_aa - ' + gIterator_aa.next().value);
console.log('gIterator_aa - ' + gIterator_aa.next().value);
console.log('gIterator_aa - ' + gIterator_aa.next().value);

// const generator_bb = () => {

// }

console.log('\n');

// ----------------------------------------------------------------------------
// closures 
// ----------------------------------------------------------------------------
function sumOne(argOne) {
    return function sumTwo(argTwo) {
        return function sumThree(argThree) {
            return function sumFour(argFour) {
                return argOne + argTwo + argThree + argFour;
            }
        }
    }
}

const sumTwo = sumOne(10);
const sumThree = sumTwo(20);
const sumFour = sumThree(30);
const result = sumFour(40);
console.log('closures - ' + result);

function sum(argOne) {
    return function (argTwo) {
        return function (argThree) {
            return argOne + argTwo + argThree;
        }
    }
}

console.log('closures - ' + sum(11)(22)(33));