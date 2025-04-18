# 类
- OOP面向对象编程
    - 根据现实世界中的事物和情景编写类
    - 基于类来创建对象(实例化)
## 创建和使用类
- 方法: 类中的函数
    - 默认参数self
- __init__()方法
    - 每当根据类创建新实例，Python都会自动运行
    - 参数: self和其他
        - self必须位于其他形参的前面
        - 调用方法创建实例时，将自动传入实参self
        - 该实参是一个指向实例本身的引用，让实例能够访问类中的属性和方法
        - 在变量前缀self，可以使变量为类中的所有方法使用，可以通过类的任意实例来方法
- 根据命名约定，通常首字母大写的名称是类，全小写的名称是根据类创建的实例
    - 实例可以访问属性
        - 实例名.属性名
    - 实例可以访问方法
        - 实例名.方法名()
    - 实例之间相互隔离，有自己独立的属性值和



## 使用类和实例
- 实例属性的使用
    - 初始化
        - 通过形参可以赋值属性
        - 也可以直接给属性赋默认值   
    - 修改默认值
        - 通过实例修改属性的值 
            - 实例.属性名
        - 通过方法设置属性的值
        - 通过方法增加特定的值

## 继承
- 当一个类继承另一类类时，自动获得后者的所有属性和方法
- 原有的类称为父类、新类称为子类
- 规则
    - 父类必须包含在当前文件中，且位于子类前面
    - 子类类名之后使用()包裹父类名
    - 子类init方法参数包含父类参数
    - super()函数可以调用父类方法和属性
- 子类和父类的说明
    - 子类有自己独有的属性和方法
    - 子类可以重写父类中的方法
        - 方式:定义同名方法
        - 如果不重写，默认执行父类同名方法
- 组合
    - 在属性和方法过多时，对部分代码进行拆分，形成一个新的工具类
    - 然后将工具类作为实例的属性赋值给实例

## 导入类
- 导入函数
    - from 模块名 import 函数名
- 导入模块中所有类
    - from module_name import *
- 导入模块
    - import 模块名

## Python标准库

## 类的编程风格
- 类名采用驼峰命名法
    - 首字母大写，不使用下划线
    - 实例名和模块名采用全小写，并在单词之间加上下划线
    
## 小结