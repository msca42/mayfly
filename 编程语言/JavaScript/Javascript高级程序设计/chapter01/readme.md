# 什么是JavaScript
- 1995年,JavaScript问世
- 主要解决Perl等服务器语言处理输入验证的问题
## 简短的历史回顾
- 最初的表单验证需要和服务器进行通信，然后由于带宽和延迟的限制，往返通信成为痛点
- 1995年，网景公司Brendan Eich为Netscape Navigator2开发脚本语言Mocha(LiveScript),后改名JavaScript
- 网景公司在Netscape Navigator3中发布JavaScript1.1版本
- 同时,微软发布IE3，包含JScript
- 1997年，JavaScript1.1作为提案交给ECMA,并由此制定出标砖ECMA-262(ECMAScript)
- 1998年,ISO和IEC将ECMAScript采纳为标准
## JavaScript实现
- 核心ECMAScript
    - 描述语言的基础，包含语法、类型、语句、关键字、保留字、操作符和全局对象
- 文档对象模型DOM
    - 是一个应用编程接口API，用于在HTML中使用扩展的XML
    - DOM将页面抽象为一组节点组成的树形结构
        - 可以删除、添加、替换、修改节点
    - 标准(DOM级别)
        - DOM Level 1 (映射文档结构) 
            - DOM Core: 提供一种映射XML文档，访问和操作文档的方式
            - DOM HTML: 作为扩展，增加特定于HTML的对象和方法
        - DOM Level 2 
            - 新增模块: 视图、事件、样式、遍历和范围
        - DOM Level 3
            - 新增加载、保存、验证文档的方法
- 浏览器对象模型BOM
    - 用于访问和操作浏览器的窗口，也包含特定于浏览器的扩展
## JavaScript版本
## 小结
- Javascript是一门与网页交互的脚本语言，包含ECMAScript、DOM和BOM三部分
