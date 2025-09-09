// 注释
// 变量
let x;

// 赋值
x = 0;

x;

// 支持数据类型
x = 1;
x = 0.01;
x = "hello world";
x = "JavaScirpt";
x = true;
x = false;
x = null;
x = undefined;

// 对象类型
let book = {
  topic: "JavaScript",
  edition: 7,
};

// 使用.或[]访问对象属性
book.topic;
book["edition"];
book.author = "Flanagan";
book.contents = {};

// 使用?.条件式访问属性
book.contents?.ch01?.sect1;

// 数值数组
let primes = [2, 3, 5, 7];
primes[0];
primes.length;
primes[primes.length - 1];
primes[4] = 9;
primes[4] = 11;
let empty = [];
empty.length;

let points = [
  { x: 0, y: 0 },
  { x: 1, y: 1 },
];

let data = {
  trial1: [
    [1, 2],
    [3, 4],
  ],
  trial1: [
    [2, 3],
    [4, 5],
  ],
};

// 算术操作符
3 + 2;
3 - 2;
3 * 2;
3 / 2;
points[1].x - points[0].x;
"3" + "2";

let count = 0;
count++;
count--;
count += 2;
count *= 3;
count;

/// 关系操作符
x = 2;
y = 3;
x == y;
x !== y;
x < y;
x <= y;
x > y;
x >= y;
"two" === "three";
"two" > "three";
false === x > y;

// 逻辑操作符
x === 2 && y === 3;
x > 3 || y < 3;
x === y;

// 函数
function plus1(x) {
  return x + 1;
}

plus1(y);

let square = function (x) {
  return x * x;
};

square(plus1(y));

const plus1 = (x) => x + 1;
square = (x) => x * x;
plus1(y);
square(plus1(y));

let a = [];
a.push(1, 2, 3);
a.reverse();

points.dist = function () {
  let p1 = this[0];
  let p2 = this[1];
  let a = p2.x - p1.x;
  let b = p2.y - p1.y;
  return Math.sqrt(a * a + b * b);
};
points.dist();

// 面向对象

class Point {
  constructor(x, y) {
    this.x = x;
    this.y = y;
  }

  distance() {
    return Math.sqrt(this.x * this.x + this.y * this.y);
  }
}

let p = new Point(1, 1);

p.distance();
