## 什么是 JavaScript

- JavaScript 是一种脚本语言，可以创建动态更新的内容
  - 通过文档对象模型 API 动态修改 HTML 和 CSS
- JavaScript 包含语言核心和应用程序接口 API，其中 API 可以分为浏览器 API 和第三方 API
- 浏览器安全
  - 每个浏览器标签页就是其自身用来运行代码的独立容器
- JavaScript 运行次序
  - 通常按照从上往下的顺序执行
- 解释代码 vs 编译代码
  - 解释型语言
    - 代码自上而下运行，实时返回运行结果，需要将代码转换其他形式
  - 编译代码
    - 将代码编译成另一种形式
- 页面添加 Javascript
  - 通过 script 元素
  - 内部 JavaScript
    - 在 body 结束标签之前添加 script 元素
  - 外部 JavaScript
    - 在 head 结束标签之前添加 script 元素，通过 src 属性指向独立的 js 文件
  - 内联 JavaScript
    - 在开始标签内添加 JavaScript 代码
- 脚本加载策略
  - 脚本元素放置在文档的底部，即 script 元素放置在 body 结束标签之前
  - 脚本元素放置在文档的头部，即 script 元素放置在 head 结束标签之前
    - 此时在解析 HTML 正文之前解析，但是可以使用 type="module"元素属性将代码视为模块，从而等待 HTML 处理完毕之后解析
    - 外部脚本，可以在 script 元素上添加 defer 属性
- 注释
  - 使用双斜杠添加单行注释
  - 使用/\*\*/添加多行注释

## JavaScript 初体验
- 