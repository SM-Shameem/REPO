// Object 
// Constructor 
// Class 
// Inheritance 
// Iterator-Object 
// Map | Set

// ----------------------------------------------------------------------------
// object 
// ----------------------------------------------------------------------------
const object_aa = {
    proOne: null,
    proTwo: null,
    methodOne: function () {
        return this.proOne + this.proTwo;
    },
    methodTwo: function () {
        return this.proOne - this.proTwo;
    }
};

object_aa.proOne = 10;
object_aa.proTwo = 20;
console.log('object_aa.methodOne - ' + object_aa.methodOne());
console.log('object_aa.methodTwo - ' + object_aa.methodTwo());

// ----------------------------------------------------------------------------
// object method-property | object arrow-method-property | object method 
// ----------------------------------------------------------------------------
const object_ab = {
    proOne: 10,
    proTwo: null, 
    method: function () {
        return this.proOne + this.proTwo
    },
    methodArrow_1: () => { return (this.proOne + 10); },
    methodArrow_2: () => (this.proTwo + 10),
    methodArrow_3: arg => (arg + 10),
    methodExpression() {
        return this.proOne + this.proTwo;
    }
};

object_ab.proTwo = 11;
console.log('object_ab.method - ' + object_ab.method());
console.log('object_ab.methodArrow_1 - ' + object_ab.methodArrow_1());
console.log('object_ab.methodArrow_2 - ' + object_ab.methodArrow_2());
console.log('object_ab.methodArrow_3 - ' + object_ab.methodArrow_3(10));
console.log('object_ab.methodExpression - ' + object_ab.methodExpression());

// -----------------------------------------------
const object_ac = {
    proOne: 100,
    proTwo: null,
    method: function () {
        return {
            returnMethod: function () { 
                console.log('returnMethod - ' + (this.proOne + this.proTwo));
            },
            returnArrow_1: () => console.log('returnArrow_1 - ' + (this.proOne + 10)),
            returnArrow_2: () => console.log('returnArrow_2 - ' + (this.proTwo + 10)),
            returnArrow_3: arg => console.log('returnArrow_3 - ' + (arg + 10))
        };
    },
    methodArrow: () => {
        return {
            returnMethod: function () { 
                console.log('returnMethod - ' + (this.proOne + this.proTwo));
            },
            returnArrow_1: () => console.log('returnArrow_1 - ' + (this.proOne + 10)),
            returnArrow_2: () => console.log('returnArrow_2 - ' + (this.proTwo + 10)),
            returnArrow_3: arg => console.log('returnArrow_3 - ' + (arg + 10))
        };
    }
};

object_ac.proTwo = 111; 
object_ac.method().returnMethod();
object_ac.method().returnArrow_1();
object_ac.method().returnArrow_2();
object_ac.method().returnArrow_3(101);
object_ac.methodArrow().returnMethod();
object_ac.methodArrow().returnArrow_1();
object_ac.methodArrow().returnArrow_2();
object_ac.methodArrow().returnArrow_3(101);

console.log('\n');

// ----------------------------------------------------------------------------
// iterator - object with data
// ----------------------------------------------------------------------------
const iterator_aa = {
    index: [11, 22, 33, 44, 55],
    indexNumber: 0,
    iteratorMethod: function () {
        return {
            // arrowReturn: function () {
            arrowReturn: () => {
                if (this.indexNumber < this.index.length)
                    return { value: this.index[this.indexNumber++], done: false };
                else return { done: true };
            }
        };
    }
};

const iteratorObj_aa = iterator_aa.iteratorMethod();
console.log('iteratorObj_aa - ' + iteratorObj_aa.arrowReturn().value);
console.log('iteratorObj_aa - ' + iteratorObj_aa.arrowReturn().value);
console.log('iteratorObj_aa - ' + iteratorObj_aa.arrowReturn().value);
console.log('iteratorObj_aa - ' + iteratorObj_aa.arrowReturn().value);
console.log('iteratorObj_aa - ' + iteratorObj_aa.arrowReturn().value);
console.log('iteratorObj_aa - ' + iteratorObj_aa.arrowReturn().value);

// ------------------------------------------------------------
const iterator_ab = {
    index: [11, 22, 33, 44, 55],
    indexNumber: 0,
    [Symbol.iterator]: function () {
        return {
            // arrowReturn: function () {
            arrowReturn: () => {
                if (this.indexNumber < this.index.length)
                    return { value: this.index[this.indexNumber++], done: false };
                else return { done: true };
            }
        };
    }
};

const iteratorObj_ab = iterator_ab[Symbol.iterator]();
console.log('iteratorObj_ab - ' + iteratorObj_ab.arrowReturn().value);
console.log('iteratorObj_ab - ' + iteratorObj_ab.arrowReturn().value);
console.log('iteratorObj_ab - ' + iteratorObj_ab.arrowReturn().value);
console.log('iteratorObj_ab - ' + iteratorObj_ab.arrowReturn().value);
console.log('iteratorObj_ab - ' + iteratorObj_ab.arrowReturn().value);
console.log('iteratorObj_ab - ' + iteratorObj_ab.arrowReturn().value);

// ------------------------------------------------------------
const iterator_ac = {
    iteratorMethod: function () {
        let array = [11, 22, 33, 44, 55];
        let index = 0;
        return {
            methodReturn: function () {
            // methodReturn: () => {
                if (index < array.length) 
                    return { value: array[index++], done: false };
                else return { done: true };
            }
        };
    }
};

console.log('iterator_ac - ' + iterator_ac.iteratorMethod().methodReturn().value);
console.log('iterator_ac - ' + iterator_ac.iteratorMethod().methodReturn().value);
console.log('iterator_ac - ' + iterator_ac.iteratorMethod().methodReturn().value);

const iteratorObj_ac = iterator_ac.iteratorMethod();
console.log('iteratorObj_ac - ' + iteratorObj_ac.methodReturn().value);
console.log('iteratorObj_ac - ' + iteratorObj_ac.methodReturn().value);
console.log('iteratorObj_ac - ' + iteratorObj_ac.methodReturn().value);
console.log('iteratorObj_ac - ' + iteratorObj_ac.methodReturn().value);
console.log('iteratorObj_ac - ' + iteratorObj_ac.methodReturn().value);
console.log('iteratorObj_ac - ' + iteratorObj_ac.methodReturn().value);

// ------------------------------------------------------------
const iterator_ad = {
    [Symbol.iterator]: function () {
        let array = [11, 22, 33, 44, 55];
        let index = 0;
        return { 
            methodReturn: function () {
            // methodReturn: () => {
                if (index < array.length)
                    return { value: array[index++], done: false };
                else return { done: true };
            }
        };
    }
};

const iteratorObj_ad = iterator_ad[Symbol.iterator]();
console.log('iteratorObj_ad - ' + iteratorObj_ad.methodReturn().value);
console.log('iteratorObj_ad - ' + iteratorObj_ad.methodReturn().value);
console.log('iteratorObj_ad - ' + iteratorObj_ad.methodReturn().value);
console.log('iteratorObj_ad - ' + iteratorObj_ad.methodReturn().value);
console.log('iteratorObj_ad - ' + iteratorObj_ad.methodReturn().value);
console.log('iteratorObj_ad - ' + iteratorObj_ad.methodReturn().value);


// ----------------------------------------------------------------------------
// built-in iterator object
// ----------------------------------------------------------------------------
const array = [111, 222, 333, 444, 555];

const iteratorSymbol = array[Symbol.iterator]();
console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
console.log('iteratorSymbol - ' + iteratorSymbol.next().value);

// const object = { proOne: 10, proTwo: 20, proThree: 30 };
// const iteratorSymbol = object[Symbol.iterator]();
// console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
// console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
// console.log('iteratorSymbol - ' + iteratorSymbol.next().value);
// console.log('iteratorSymbol - ' + iteratorSymbol.next().value);

// ----------------------------------------------------------------------------
// User-defined Iterator (ExpFunc | Arrow - Properties [default | assign] | local)
// ----------------------------------------------------------------------------
const iteratorCustom = {
    arrayPro: [1, 2, 3, 4, 5],
    indexPro: 0,
    iteratorMethod: function () {
        // let array = arguments[0];
        // let index = arguments[1];
        return {
            nextArrow: () => {
            // nextArrow: function () {
                // if (arguments[1] < arguments[0].length)
                //     return { value: arguments[0][arguments[1]++], done: false };
                // else return { done: true };

                if (this.indexPro < this.arrayPro.length)
                    return { value: this.arrayPro[this.indexPro++], done: false };
                else return { done: true };
            },
            nextFunction: function () {
            // nextFunction: () => {
                // if (index < array.length)
                //     return { value: array[index++], done: false };
                // else return { done: true };

                if (this.indexPro < this.arrayPro.length)
                    return { value: this.arrayPro[this.indexPro++], done: false };
                else return { done: true };
            }
        };
    }
};

const iteratorObj = iteratorCustom.iteratorMethod(array, 0);
iteratorObj.arrayPro = array;
iteratorObj.indexPro = 0;
console.log('iteratorObj > ' + iteratorObj.nextArrow().value);
console.log('iteratorObj : ' + iteratorObj.nextArrow().value);
console.log('iteratorObj : ' + iteratorObj.nextArrow().value);
console.log('iteratorObj : ' + iteratorObj.nextFunction().value);
console.log('iteratorObj : ' + iteratorObj.nextFunction().value);
console.log('iteratorObj : ' + iteratorObj.nextFunction().value);
