# 什么是 JavaScript

## 简短的历史回顾

- 最初的表单验证需要和服务器进行通信，然后由于带宽和延迟的限制，往返通信成为痛点
- 1995 年，网景公司 Brendan Eich 为 Netscape Navigator2 开发脚本语言 Mocha(LiveScript),后改名 JavaScript
- 之后 Javascript 不局限于数据验证，而是渗透到浏览器窗口及其内容的方方面面
- 网景公司在 Netscape Navigator3 中发布 JavaScript1.1 版本
- 同时,微软发布 IE3，包含 JScript
- 1997 年，JavaScript1.1 作为提案交给 ECMA
  - TC39 承担了标准化一门通用，跨平台，厂商中立道德脚本语言的语法和语义的任务
  - 由此制定出标准 ECMA-262(ECMAScript)
- 1998 年,ISO 和 IEC 将 ECMAScript 采纳为标准

## JavaScript 实现

- 核心 ECMAScript
  - 即 ECMA-262 标准
  - Web 浏览器是其存在的一种宿主环境，宿主环境提供了 ECMAScript 的基准实现和环境交互的必须扩展
  - 描述语言的基础，包含语法、类型、语句、关键字、保留字、操作符和全局对象
- 文档对象模型 DOM
  - 提供与网页内容交互的方法和接口
  - 是 XML 的一套 API，经过扩展可以在 HTML 中使用
  - DOM 将页面抽象为一组分层节点
    - 可以删除、添加、替换、修改节点
  - 为什么 DOM 是必须的
    - 在最初，IE 和 Navigator 都以不同的形式支持 DHTML(动态 HTML)，从而实现不刷新页面就可以修改页面外观和内容的功能，为了避免分歧，就有了规范 DOM 标准
  - 标准(DOM 级别)
    - 不同的 DOM 标准表示不同的能力，DOM 级别越高，能够实现动态 HTML 的效果越好
    - DOM Level 1
      - DOM Core: 提供一种映射 XML 文档，访问和操作文档的方式
      - DOM HTML: 作为扩展，增加特定于 HTML 的对象和方法
      - 目的是映射文档结构
    - DOM Level 2
      - 新增模块:
        - 视图：追踪文档不同视图的接口
        - 事件：描述事件以及事件处理的接口
        - 样式：描述处理元素 CSS 样式的接口
        - 遍历和范围：描述遍历的操作 DOM 树的接口
    - DOM Level 3
      - 新增模块
        - Load and Save: 以统一方式加载和保存文档的方法
        - Validation: 验证文档的方法
      - 新增功能
        - Core: 支持 XML1.0 所有特性
    - DOM4
      - 不再按照 Level 维护，而是作为 DOM Living Standard 维护
      - 使用Mutation Observers 代替 Mutation Events
      - 优化操作，更符合现代需求
- 浏览器对象模型 BOM
  - 提供与浏览器交互的方法和接口

## 小结

- Javascript 是一门与网页交互的脚本语言，包含 ECMAScript、DOM 和 BOM 三部分
