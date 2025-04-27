# 使用HTML构建Web
## HTML简介
- HTML是一种用来告知浏览器如何组织页面的标记语言，由元素组成
- 元素可以包围或标记不同的内容，使其以某种方式呈现或工作
```html
<p>My cat is very grumpy</p>
```
-  元素
    - 组成:开始标签、内容、结束标签
    - 嵌套:将一个元素置于另一个元素中 
    - 分类  
        - 块级元素
        - 内联元素
    - 空元素: 只有一个标签的元素
- 属性
    - 元素的特质，能够提供额外的信息
    - 组成: 属性名 = 属性值
    - 布尔属性: 属性名和属性值相同的属性
- HTML文档
    - <!DOCTYPE html> 文档类型声明
    - <html> 根元素，包裹页面所有内容
    - <head> 包含在html页面但不显示的内容
    - <meta> 不能由其他HTML元相关元素表示的元数据
    - <title> 页面标题
    - <body> 所有显示在页面上的内容
```html
<!doctype html>
<html lang="zh-CN">
  <head>
    <meta charset="utf-8" />
    <title>我的测试站点</title>
  </head>
  <body>
    <p>这是我的页面</p>
  </body>
</html>
```

- 空白处理
    - HTML对于空白，会将连续出现的空白字符减少为一个单独的空白符
- 实体引用
    - 对于在HTML中的特殊字符，如果需要在页面以原本形式展示，需要使用特殊的编码，也就是字符引用

## HTML元信息
- html元信息包含在head元素中
- title元素
    - 表示整个HTML文档的标题
- meta元素
    - charset属性可以指定文档中的字符编码
    - name属性指定meta元素的类型，说明该元素包含了什么类型的信息
    - content属性制定了实际的元数据内容
- 增加自定义图标
    - 通过link元素导入，rel属性指定图标形式
- 在HTML中应用CSS和Javascript
    - CSS: 使用link元素
    - Javascript: 使用script元素

## HTML的标题和段落
- p元素
    - 表示段落


## 多媒体和嵌入

## HTML表格