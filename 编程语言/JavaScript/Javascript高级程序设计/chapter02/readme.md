# HTML中的JavaScript
## <script>元素
- 通过script元素可以将Javascript引入HTML中
    - 直接在script元素中写入JavaScript代码
    - 通过src属性导入外部文件
    - 通过DOM API创建script元素
- 浏览器默认会按照出现顺序加载解释，通过async和defer属性可以改变顺序
    - defer属性: 立即下载，延迟执行，依次执行
    - async属性: 立即下载，异步执行，乱序执行
- script元素默认放在body结束标签之前，这样就可以先加载渲染HTML页面


## 行内代码和外部文件
- 最佳实践是使用外部文件，理由如下
    - 可维护性
    - 缓存

## 文档模式

## <noscript>元素
- 针对不支持Javascript的情况解释说明的元素

## 小结
- Javascript文件的如何作用于HTML文档