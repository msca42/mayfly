# 你的第一个网站

## 安装基础软件

- 代码编辑器 VSCode
- 现代 Web 浏览器
- 本地 Web 服务器
  - VSCode 插件 Live Preview
- 图像编辑器
- 版本控制工具 Git

## 你的网站会是什么样子

- 为你的网站做设计： 信息、字体、颜色、主要功能
- 计划
  - 网站主题
  - 展示信息
  - 背景颜色、字体等

## 处理文件

- 创建一个存放网站项目的文件夹
- 在文件夹中创建存放第一个网站的文件夹
- 网站的结构
  - index.html 主页内容
  - images 文件夹 网站上使用的图片
  - styles 文件夹 提供样式的 CSS 代码
  - scripts 文件夹 向网站添加交互功能的 JavaScript 代码

## HTML 基础

- 超文本标记语言 HTML 是一种用来结构化 Web 网页及其内容的标记语言
- HTML 由元素组成，元素可以包围不同的内容，使其以某种方式呈现

```HTML
<p>My cat is very grumpy</p>
```

- 元素详解
  - 组成: 开始标签、结束标签、内容
  - 元素具有属性，属性由属性名和属性值组成
  - 嵌套元素: 将一个元素置于其他元素之中

```HTML
<p>My cat is <strong>very</strong> grumpy.</p>
```

- 空元素: 不包含任何内容的元素

```HTML
<img src="images/firefox-icon.png" alt="My test image" />
```

- HTML 文档详解
  - <!doctype html> 文档类型
  - <html> html元素，包含整个页面的内容，根元素
  - <head> head元素，包含但不想向用户显示的内容的容器
  - <meta charset="utf-8"> 指明UTF-8字符编码
  - <title> title元素 设置页面的标题
  - <body> body元素 包含期望让用户在访问页面时看到的全部内容
- 图像
  - img， 通过 src 指向图像文件路径，通过 alt 展示图像不存在时的显示信息

```HTML
<img src="images/firefox-icon.png" alt="My test image" />
```

- 标题
  - HTML 包含六个级别的标题，h1~h6

```HTML
<!-- 4 个级别的标题 -->
<h1>主标题</h1>
<h2>顶层标题</h2>
<h3>子标题</h3>
<h4>次子标题</h4>
```

- 段落
  - p 元素指定段落

```HTML
<p>这是一个段落</p>
```

- 列表
  - 无序列表 ul 元素
  - 有序列表 ol 元素
  - 列表项 li 元素

```HTML
<p>At Mozilla, we're a global community of</p>

<ul>
  <li>technologists</li>
  <li>thinkers</li>
  <li>builders</li>
</ul>

<p>working together…</p>
```

- 链接
  - a 元素

```HTML
<a href="https://www.mozilla.org/zh-CN/about/manifesto/">
  Mozilla Manifesto
</a>
```

## CSS 基础

- CSS 是一门样式表语言，可以选择性的为 HTML 元素添加样式
- 具体步骤: 编写 css 样式，将样式应用在 HTML 中
- CSS 规则集详解
  - 规则集: CSS 的整个结构,由选择器、声明组成
  - 选择器: 选择需要添加样式的元素，可以同时选择多个元素
    - 分类
      - 元素选择器、ID 选择器、类选择器、属性选择器、伪类选择器等
  - 声明: 由属性和属性值组成
- 字体
  - 通过 link 元素可以加载字体,href 指定字体
  - 通过 font 属性指定字号
- 一切皆盒子
  - CSS 的布局基于盒子模型
  - 主要属性: margin、border、padding、width、height
- 常见步骤
  - 改变页面颜色
  - 设置文档体样式
  - 定位页面主标题并添加样式
  - 设置图片位置

## JavaScript 基础

- JavaScript 是一门为网站添加交互性的强有力的编程语言
- 变量
  - 存储值的容器
  - 声明与初始化
    - let 变量名 = 初始化值;
  - 数据类型
    - 字符串、数字、布尔、数组、对象
- 运算符
  - 一种基于两个值生成对应结果的数学符号
  - 常见运算符
    - 加减乘除、赋值
    - 严格相等
    - 非、不等于
- 条件语句
  - 用来测试表达式的真假的代码结构
- 函数
  - 一种将你希望重复使用的功能封装起来的方式
  - 你可以将一段代码定义为一个函数，当你在代码中调用该函数时，执行
- 事件
  - 监听浏览器活动的代码块，响应中运行代码

## 发布你的网站

- 方式一：获取托管服务和域名
  - 托管服务是在托管服务商的 Web 服务器上租用空间
  - 域名是让人访问的独一无二的地址
- 方式二：使用在线工具 GitHub 或 Google App Engine
- 方式三：使用基于 Web 的集成开发环境
