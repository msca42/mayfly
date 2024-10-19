## 开始学习HTML
- HTML:
    - 超文本标记语言是一种用来告知浏览器如何组织页面的标记语言
    - 由元素组成，元素可以标记内容，使其以某种方式呈现
### 剖析一个HTML元素
    - 开始标签、内容、结束标签
```html
<p>My cat is very grumpy</p>
<em>刀枪剑戟 斧钺钩叉</em>
```
- 嵌套元素
    - 将一个元素放在另一个元素中
```html
<p>My cat is <strong>very</strong> grumpy</p>
```
- 元素类别
    - 块级元素: 在页面中以块的形式展现
    - 内联元素: 在块级元素中并环绕文档内容
```html
<em>第一</em><em>第二</em><em>第三</em>
<p>第四</p> 
<p>第五</p>
<p>第六</p>
```
### 属性
- 组成: 属性名="属性值"
```html
<p> A link to my <a href='https://www.mozilla.org/' title='The Mozilla homepage' target='_blank'>favorite website</a>. </p>

<input type='text' disabled>
```
### 剖析HTML文档
- <!doctype html>
    - 声明文档类型
- \<html>
    - 根元素
- \<head>
    - 包含所有包含在HTML页面但不在HTML页面中显示的内容
- \<meta charset='utf=8'>
    - 设置字符集
- \<title>
    - 设置页面标题
- \<body>
    - 访问页面时所显示的内容
```html
<!DOCTYPE html>
<html>
    <head>
        <meta charset='utf-8'>
        <title>我的测试站点</title>
    </head>
    <body>
        <p>这是我的页面</p>
    </body>
</html>

```
### 实体引用
- 每个字符引用以符号&开始，以分号;结束

|原义字符|等价字符引用|
|-------|----------|
| <     | \&lt;    |
| >     | \&gt;    |

--------
## HTML元信息
- HTML头部是指head元素中的内容，作用是保存元数据
- 添加标题
    - title: 为文档添加标题
    - h1: 为页面添加辩题
- 元数据meta元素
    - charset属性: 设置字符编码
    - name: 说明元素包含类型信息
    - content:说明元数据内容