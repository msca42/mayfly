const { fa } = require("element-plus/lib/locales.js");

var x = 1;
'Hello,world';
var x = 1;
var y = 2;

if (2 > 1){
    x = 1;
    y = 2;
    z = 3;
    if(x < y){
        z = 4;
    } 
    if (x > y){
        z = 5;
    }
}

123;
0.456;
1.2345e3;
-99;
NaN;
Infinity;

1 + 2;
(1 + 2) * 5 / 2;
2 / 0;
0 / 0;
10 % 3;
10.5 % 3;


var r = 123.456;
var s = 3.14 * r * r;
console.log(s);

console.log(Number.MAX_SAFE_INTEGER)

true;
false;
2 > 1;
2 >= 3;

true && true;
true && false;
false && true && false;

false || false;
true || false;
false || true || false;

!true;
!false;
!(2 > 5);

var age = 15;
if(age >= 18){
    alert('adult');
} else {
    alert('teenager');
}

2 > 5;
5 >= 2;
7 == 7;

false == 0;
false === 0;

NaN === NaN;

isNaN(NaN);

1 / 3 === (1 - 2 / 3);

Math.abs(1 / 3 - (1 - 2 / 3)) < 0.0000001;

var bi1 = 9223372036854775807n;
var bi2 = BigInt(12345);
var bi3 = BigInt("0x7fffffffffffffff");
console.log(bi1 == bi2);
console.log(bi1 == bi3);
console.log(bi1 + bi2);

// 使用BigInt:
console.log(1234567n + 3456789n); // OK
console.log(1234567n / 789n); // 1564, 除法运算结果仍然是BigInt
console.log(1234567n % 789n); // 571, 求余
console.log(1234567n + 3456789); // Uncaught TypeError: Cannot mix BigInt and other types

[1,2,3.14,'Hello',null,true]

new Array(1,2,3);

var arr = [1,2,3.14,'Hello',null,true];
arr[0];
arr[5];
arr[6];
console.log(arr[0],arr[5],arrp[6]);

var a;
var $b = 1;
var s_007 = '007';
var Answer = true;
var t = null;

var x = 10;
x = x + 2;

'I\'m \"OK\"!';

`这是一个
多行
字符串`;

let name = '小明';
let age = 20;
let message = '你好, ' + name + ', 你今年' + age + '岁了';
alert(message)

message  = `你好，${name},你今年${age}岁了`;