# 文件和异常

## 读取文件
- 根据Path函数创建Path对象
- 使用read_text()方法读取文件内容，返回文件的全部内容，作为一个字符串返回
- splitlines() 将字符串转换为一系列行,返回一个列表，包含文件的所有行
- replace()函数可以让字符串中部分字符替换

## 写入文件
- 使用write_text()方法写入文件
    - 文件不存在，自动创建文件

## 异常
- Python使用异常作为特殊对象来管理程序执行期间发生的错误
- 异常通过使用try-except代码块来处理,此外还可以包含一个else代码块，在try代码块执行成功后执行

## 存储数据
- 使用模块json存储数据
- 模块json
    - 将Python数据结构转换为JSON格式的字符串
    - dumps()存储数据
    - loads()读取数据

## 小结
