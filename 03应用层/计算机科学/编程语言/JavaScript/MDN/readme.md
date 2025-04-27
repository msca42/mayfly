# JavaScript——动态客户端脚本语言

## 什么是JavaScript
- 一种轻量级解释型脚本编程语言，它可以在网页上实现动态交互的功能
- 学习Javascript主要学习语言核心和API，API可以分为浏览器API和第三方API
    - 浏览器API内建于web浏览器中，可以将数据从周边计算机环境筛选出来
    - 第三方API并没有默认嵌入浏览器，一般从网上取得
- 运行次序
    - 默认从上往下的顺序执行
- 向页面添加Javascript
    - 内部: 在body结束标签之前使用script元素添加
    - 外部: 创建后缀js的文件，在head结束标签之前使用script元素添加外部文件  
        - 方式一: 需要注意的是script元素内部需要使用type属性，属性值module，会将代码视为一个模块，并且在HTML加载之后加载
        - 方式二: script元素添加defer属性或async属性

## JavaScript初体验
