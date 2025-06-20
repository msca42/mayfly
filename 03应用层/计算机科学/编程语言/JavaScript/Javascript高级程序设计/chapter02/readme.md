# HTML 中的 JavaScript

- 主要内容
  ,,',',- 使用\<script>元素

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
- 使用 script 元素的方式
  - 直接在网页中嵌入 Javascript 代码
  - 在网页中包含外部 Javascript 文件
- 注意事项
  - HTML 文档自上而下逐行解释执行,在前面的代码未完成解释之前不会进行渲染显示,遇到外部文件会阻塞进行下载与解释
- 执行脚本

  - 由于 HTML 的执行方式,script 元素从 head 元素转移到 body 结束标签之前,从而避免页面渲染延迟
  - defer 属性: 告诉浏览器立即下载文件,但在页面解析完毕前不执行,多个 defer 属性依次执行
  - async 属性: 告诉浏览器立即下载文件,当文件下载完成之后就会执行,无关 HTML 页面是否解析,多个 async 属性乱序执行

- 其他方式加载脚本
  - 通过 DOM API,向 DOM 中动态添加 script 元素加载指定的脚本

## 行内代码和外部文件

- 最佳实践是使用外部文件，理由如下
  - 可维护性: 外部文件统一管理
  - 缓存: 浏览器根据特定的设置缓存 Javascript 文件,相同引用只需要下载依次

## 文档模式

- IE5.5 发明了使用 doctype 切换文档模式的概念
- 文档模式种类
  - 混杂模式
  - 标准模式
  - 准标注模式
- HTML 早期以 SGML 为基础,必须引用 DTD,随着 DTD 被废弃,采用标准 HTML5 的声明

## <noscript>元素

- 针对不支持 Javascript 的情况解释说明的元素
- 不支持情况: 浏览器不支持脚本,浏览器对脚本的支持关闭

## 小结

- Javascript 通过 script 元素嵌入到 HTML 页面
- src 属性可以指向跨域外部文件
- HTML 一般执行顺序,在 defer 属性和 async 属性加持下的执行顺序
- noscript 元素
