# 什么是 JavaScript


## 简短的历史回顾

- 最初的表单验证需要和服务器进行通信，然后由于带宽和延迟的限制，往返通信成为痛点
- 1995 年，网景公司 Brendan Eich 为 Netscape Navigator2 开发脚本语言 Mocha(LiveScript),后改名 JavaScript
- 网景公司在 Netscape Navigator3 中发布 JavaScript1.1 版本
- 同时,微软发布 IE3，包含 JScript
- 1997 年，JavaScript1.1 作为提案交给 ECMA
  - TC39 承担了标准化一门通用，跨平台，厂商中立道德脚本语言的语法和语义的任务
  - 由此制定出标准 ECMA-262(ECMAScript)
- 1998 年,ISO 和 IEC 将 ECMAScript 采纳为标准

## JavaScript 实现

- 核心 ECMAScript
  - 描述语言的基础，包含语法、类型、语句、关键字、保留字、操作符和全局对象
- 文档对象模型 DOM
  - 提供与网页内容交互的方法和接口
  - 是 XML 的一套 API，用于在 HTML 中使用扩展的 XML
  - DOM 将页面抽象为一组分层节点
    - 可以删除、添加、替换、修改节点
  - 为什么 DOM 是必须的
    - 在最初，IE 和 Navigator 都以不同的形式支持 DHTML(动态 HTML)，从而实现不刷新页面就可以修改页面外观和内容的功能，为了避免分歧，就有了规范 DOM 标准
  - 标准(DOM 级别)
    - DOM Level 1 (映射文档结构)
      - DOM Core: 提供一种映射 XML 文档，访问和操作文档的方式
      - DOM HTML: 作为扩展，增加特定于 HTML 的对象和方法
      - 提供同一个标准
    - DOM Level 2
      - 新增模块: 视图、事件、样式、遍历和范围
      - 提供更加丰富的功能
    - DOM Level 3
      - 新增加载、保存、验证文档的方法
      - 能够处理更复杂的文档
    - DOM4
      - 不再按照 Level 维护，而是作为 DOM Living Standard 维护
      - 优化操作，更符合现代需求
- 浏览器对象模型 BOM
  - 提供与浏览器交互的方法和接口

## 小结

- Javascript 是一门与网页交互的脚本语言，包含 ECMAScript、DOM 和 BOM 三部分
