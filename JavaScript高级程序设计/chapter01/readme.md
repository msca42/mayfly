# 什么是JavaScript
- 1995年问世，用途是代替Perl等服务器端语言处理输入验证
- 输入验证的问题: 无法在本地进行验证必填字段，需要与服务器进行一次通信 

## 简短的历史回顾
- 时代背景: 用户史通28.8kbit/s的调制解调器上网，网页内容越来越复杂，表单的验证的通信成为用户痛点
- 1995年，网景公司Brendan Eich开始为Netscape Navigator2开发Mocha(LiveScript)的脚本语言
- 网景公司与Sun公司结盟，共同开发LiveScript，后将其改名JavaScript
- JavaScript1.1发布之后，微软发布JScript
- 由于浏览器大战，JavaScript标准化提上日程
- 1997年，JavaScript1.1作为预案提交给ECMA，于是诞生了ECMA-262(ECMAScript)
## JavaScript实现
- 完整的JavaScript实现包含三部分:
    - 核心ECMAScript
    - 文档对象模型DOM
    - 浏览器对象模型BOM
- ECMAScript
    - 主要包含: 语法、类型、语句、关键字、保留字、操作符、全局对象
- DOM
    - 文档对象模型是一个应用编程接口，用于在HTML中使用扩展的XML
    - DOM通过创建表示文档的树，可以控制网页的内容和结构
    - DOM级别
        - DOM Level1由DOM Core和DOM HTML组成
            - DOM Core是一种映射XML文档，提供访问和操作文档的方式
            - DOM HTML用于扩展，增加特定的HTML对象和方法
        - DOM Level2 新增模块
            - DOM 视图
            - DOM 事件
            - DOM 样式
            - DOM 遍历和范围
        - DOM Level3 新增模块
            - DOM Load and Save  
            - DOM Validation
        - DOM Level4 新增
            - Mutation Observers
- BOM
    - 浏览器对象模型，用于支持访问和操作浏览器的窗口


## JavaScript版本
- 跟随Netscape Navigator和Firefox的版本递增，这种版本命名方式到1.8.5截止

## 小结