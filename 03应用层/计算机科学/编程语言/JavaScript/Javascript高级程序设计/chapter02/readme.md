# HTML中的JavaScript
- 将JavaScript引入网页中,需要解决它和HTML的关系问题
## <script>元素
- 通过script元素可以将Javascript引入HTML中
- script元素属性
    - async: 立即下载脚本,不妨碍页面其他操作,这个属性只对外部脚本文件有效
    - charset: 指定字符集
    - crossorigin: 配置相关请求的CORS
    - defer: 将脚本延迟到文档完全被解析之后再执行
    - integrity: 允许比对接收到的资源和指定的加密签名以验证子资源的完成行
    - src: 指向包含要执行的脚本代码的外部文件
    - type: 表示代码块中脚本语言的内容类型(MIME类型)
- 使用script元素的方式
    - 直接在网页中嵌入Javascript代码
    - 在网页中包含外部Javascript文件
- 注意事项
    - HTML文档自上而下逐行解释执行,在前面的代码未完成解释之前不会进行渲染显示,遇到外部文件会阻塞进行下载与解释
- 执行脚本
    - 由于HTML的执行方式,script元素从head元素转移到body结束标签之前,从而避免页面渲染延迟
    - defer属性: 告诉浏览器立即下载文件,但在页面解析完毕前不执行,多个defer属性依次执行
    - async属性: 告诉浏览器立即下载文件,当文件下载完成之后就会执行,无关HTML页面是否解析,多个async属性乱序执行

- 其他方式加载脚本
    - 通过DOM API,向DOM中动态添加script元素加载指定的脚本

## 行内代码和外部文件
- 最佳实践是使用外部文件，理由如下
    - 可维护性: 外部文件统一管理
    - 缓存: 浏览器根据特定的设置缓存Javascript文件,相同引用只需要下载依次

## 文档模式
- IE5.5发明了使用doctype切换文档模式的概念
- 文档模式种类
    - 混杂模式
    - 标准模式
    - 准标注模式
- HTML早期以SGML为基础,必须引用DTD,随着DTD被废弃,采用标准HTML5的声明

## <noscript>元素
- 针对不支持Javascript的情况解释说明的元素
- 不支持情况: 浏览器不支持脚本,浏览器对脚本的支持关闭

## 小结
- Javascript通过script元素嵌入到HTML页面
- src属性可以指向跨域外部文件
- HTML一般执行顺序,在defer属性和async属性加持下的执行顺序
- noscript元素