# 创建 HTML 文档

## 构筑基本的文档结构
- 文档元素
    - DOCTYPE
    - html
    - head
    - body

## 用元数据元素说明文档
- 元数据元素: 用来提供关于HTML文档的信息
- title元素: 设置文档标题或名称
- base元素：设置基准URL，让HTML文档中的相对链接在此基础上解析
- meta元素:  定义文档的各种元数据
    - 通过name和content属性置顶名/值元数据对，name表示元数据的类型，content剔红值
        - 常见预定义数据类型: application name、author、description、generator、keywords
    - 声明字符编码
        - charset
    - 模拟HTTP标头字段
        - http-equiv
- style元素: 定义HTML文档内嵌的CSS样式
    - media属性: 表明文档在什么时候应用定义的样式
        - 设备名称: all、print、screen
        - 特性条件: width、height
- link元素:  在HTML文档和外部资源之间建立联系
    - 样式表、图标、预先获取资源
## 使用脚本元素
- script元素: 定义脚本并控制其执行过程
    - 浏览器遇到script的默认行为:加载和执行脚本的同时暂停处理页面，各个script依次同步执行
    - 内嵌脚本: 直接在script元素内容处添加脚本
    - 外链脚本: 独立的js文件，通过src属性链接
    - 延迟执行:
        - 将script元素放在body结束标签之前
        - 使用defer针对外部脚本
    - 异步执行
        - 对于一些自成一体的脚本，不需要和HTML文档相互作用，可以使用异步执行
        - 使用async属性
- noscript元素: 不支持脚本或禁用脚本的处理办法

## 小结
