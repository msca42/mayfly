# 初探 JavaScript
- 深入学习JavaScript推荐材料
    - 《JavaScript权威指南(第六版)》
    - 《JavaScript设计模式》
## 准备使用 JavaScript
- JavaScript可以在HTML中内嵌也可以定义外部脚本
- 通过script元素链接JavaScript和HTML

## 使用语句
- JavaScript基本元素是语句，通常以;结尾

## 定义和使用函数
- function 函数名(参数列表) {}
- 函数名(参数列表);
## 使用变量和类型
- 使用var定义变量
    - 局部变量: 在函数中定义的变量只能在函数范围内使用
    - 全局变量: 在script元素中定义的变量
- 基本类型
    - 字符串类型、数值类型和布尔类型
- 对象的创建
    - new Object()
    - 对象字面量
- 对象具有属性和方法，组成形式是键值对，属性的值是字面量，方法的值是函数
    - 读取、修改和添加属性值有两种方式    
        - 对象名.属性名
        - 对象名["属性名"]
    - 删除属性
        - delete
    - 检测属性是否在对象中
        - in
## 使用 JavaScript 运算符
-  常见运算符
    - ++、--
    - +、-、*、/、%
    - <、<=、>、>=
    - ==、!=
        - 会将操作数转换为同一类型再对其进行比较，判断值是否相等
    - ===、!==
        - 判断类型和值是否都想用
    - &&、||
    - = 
    - +
    - ?:
- 类型转换
    - 数字转字符串
        - Number.toString()
        - String()
    - 字符串转数字
        - Number()
        - parseInt()
        - parseFloat()

## 使用数组
- 创建数组
    - new Array()
    - 数组字面量

## 处理错误
-  try..catch...finally

## 比较 undefined 和 null 值
- 读取未赋值的变量或试图读取对象没有的属性的值就是undefined
- 

## 常用的 JavaScript 工具

## 小结
