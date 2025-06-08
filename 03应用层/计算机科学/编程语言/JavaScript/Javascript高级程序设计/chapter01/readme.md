# 什么是 JavaScript

- 本章内容
  - 回顾 Javascript 历史
  - JavaScript 简介
  - Javascript 与 ECMAScript 的关系
  - Javascript 的不同版本

## 简短的历史回顾

- 最初的表单验证需要和服务器进行通信，然后由于带宽和延迟的限制，往返通信成为痛点
- 1995 年，网景公司 Brendan Eich 为 Netscape Navigator2 开发脚本语言 Mocha(LiveScript),后改名 JavaScript
- 网景公司在 Netscape Navigator3 中发布 JavaScript1.1 版本
- 同时,微软发布 IE3，包含 JScript
- 1997 年，JavaScript1.1 作为提案交给 ECMA,并由此制定出标砖 ECMA-262(ECMAScript)
- 1998 年,ISO 和 IEC 将 ECMAScript 采纳为标准

## JavaScript 实现

- 核心 ECMAScript
  - 描述语言的基础，包含语法、类型、语句、关键字、保留字、操作符和全局对象
- 文档对象模型 DOM
  - 是 XML 的一套 API，用于在 HTML 中使用扩展的 XML
  - DOM 将页面抽象为一组分层节点
    - 可以删除、添加、替换、修改节点
  - 为什么 DOM 是必须的
    - 在最初，IE 和 Navigator 都以不同的形式支持 DHTML，从而实现不刷新页面就可以修改页面外观和内容的功能，为了避免分歧，就有了规范--DOM 标准
  - 标准(DOM 级别)
    - DOM Level 1 (映射文档结构)
      - DOM Core: 提供一种映射 XML 文档，访问和操作文档的方式
      - DOM HTML: 作为扩展，增加特定于 HTML 的对象和方法
    - DOM Level 2
      - 新增模块: 视图、事件、样式、遍历和范围
    - DOM Level 3
      - 新增加载、保存、验证文档的方法
    - DOM4
      - 不再按照 Level 维护，而是作为 DOM Living Standard 维护
- 浏览器对象模型 BOM
  - 用于访问和操作浏览器的窗口

## 小结

- Javascript 是一门与网页交互的脚本语言，包含 ECMAScript、DOM 和 BOM 三部分
