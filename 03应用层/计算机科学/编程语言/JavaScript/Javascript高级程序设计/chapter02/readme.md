# HTML 中的 JavaScript

## \<script>元素

- 通过 script 元素可以将 Javascript 引入 HTML 中
- script 元素属性
  - async: 立即下载脚本,不妨碍页面其他操作,这个属性只对外部脚本文件有效
  - charset: 指定字符集, 通常忽略
  - crossorigin: 配置相关请求的 CORS
  - defer: 将脚本延迟到文档完全被解析之后再执行
  - integrity: 允许比对接收到的资源和指定的加密签名以验证子资源的完成行
  - src: 指向包含要执行的脚本代码的外部文件
  - type: 表示代码块中脚本语言的内容类型(MIME 类型)
    - 常见类型 application/x-javascript、application/javascript、application/ecscript、module
- 使用 script 元素的方式
  - 直接在网页中嵌入 Javascript 代码
  - 在网页中包含外部 Javascript 文件

```html
 <script>
    // 内嵌
    function sayHi(){
      console.log("Hi!");
    }
    //  报错
      function sayScript(){
             console.log("</script>");
      }

        //  修改报错
      function sayScript(){
             console.log("<\/script>");
      }
    </script>
    <!-- 外部 -->
     <script src="example.js"></script>
```

- 注意事项
  - HTML 文档自上而下逐行解释执行,在前面的代码未完成解释之前不会进行渲染显示,遇到外部文件会阻塞进行下载与解释
  - 浏览器不会检查外部脚本的扩展名，所以可以使用 JS 扩展语言转义成 JS 的形式
  - 使用 src 属性的 script 元素中不应该再有额外的 JavaScript 代码
- 标签位置
  - 过去通常将外部文件即 CSS 和 JavaScript 都放在 head 元素内，这样会造成加载时渲染延迟，为了解决这个问题，将所有 JavaScript 引用放在 body 结束标签之前
  - 浏览器会按照出现的顺序依次解释脚本
- 延迟执行脚本
  - HTML4.01 为 script 元素定义了一个 defer 属性，表示脚本在执行时不会改变页面的结构，即脚本会被延迟到整个页面都解析完毕后再运行
- 异步执行脚本
  - HTML5 为 script 元素定义了一个 async 属性，只作用于外部脚本，告诉浏览器立即开始下载，下载完成之后立即执行
  - 不保证能够按照脚本出现的次序执行
- 动态加载脚本
  - 通过 JavaScript 使用 DOM API 动态添加 script 元素加载指定脚本

```JavaScript
let script = document.createElement('script');
script.src = 'myscript.js';
document.head.appendChild(script);
```

## 行内代码和外部文件

- 最佳实践是使用外部文件，理由如下
  - 可维护性: 外部文件统一管理
  - 缓存: 浏览器根据特定的设置缓存 Javascript 文件,相同引用只需要下载一次

## 文档模式

- IE5.5 发明了使用 doctype 切换文档模式的概念
- 文档模式种类
  - 混杂模式
  - 标准模式
  - 准标准模式
- HTML 早期以 SGML 为基础,必须引用 DTD,随着 DTD 被废弃,采用标准 HTML5 的声明
- HTML5 使得标准模式更容易保持

## <noscript>元素

- 针对不支持 Javascript 的情况解释说明的元素
- 不支持情况: 浏览器不支持脚本,浏览器对脚本的支持关闭
