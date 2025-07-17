# 使用 HTML 构建 Web

## 开始学习 HTML

- HTML 是一种用来告知浏览器如何组织页面的标记语言，由元素组成
- 元素可以包围或标记不同的内容，使其以某种方式呈现或工作
- HTML 存在于扩展名为 html 的文本文件中，这种文件被称为 HTML 文档
- 元素
  - 组成:开始标签、内容、结束标签
  - 嵌套:将一个元素置于另一个元素中
  - 分类
    - 块级元素
    - 内联元素
  - 空元素: 只有一个标签的元素
- 属性
  - 元素的特质，能够提供额外的信息
  - 组成: 属性名 = "属性值"
  - 布尔属性: 属性名和属性值相同的属性

```HTML
<p>A link to my <a href="https://www.mozilla.org/" title="The Mozilla homepage" target="_blank">favorite website</a>.</p>

<input type="text" disabled="disabled" />

<!-- 使用 disabled 属性来防止终端用户输入文本到输入框中 -->
<input type="text" disabled />

<!-- 下面这个输入框不包含 disabled 属性，所以用户可以向其中输入 -->
<input type="text" />

```

- HTML 文档
  - <!DOCTYPE html> 文档类型声明
  - <html> 根元素，包裹页面所有内容
  - <head> 包含在html页面但不显示的内容
  - <meta> 不能由其他HTML元相关元素表示的元数据
  - <title> 页面标题
  - <body> 所有显示在页面上的内容

```html
<!DOCTYPE html>
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
  - HTML 对于空白，会将连续出现的空白字符减少为一个单独的空白符
- 实体引用
  - 对于在 HTML 中的特殊字符，如果需要在页面以原本形式展示，需要使用特殊的编码，也就是字符引用
  - 每个字符引用以符号&开头，以分号；结束

## HTML 元信息

- html 元信息包含在 head 元素中，包含页面加载后不会在浏览器中显示的信息
- title 元素
  - 表示整个 HTML 文档的标题
  - 页面被收藏时，作为建议的书签名
- meta 元素
  - charset 属性可以指定文档中的字符编码
  - name 属性指定 meta 元素的类型，说明该元素包含了什么类型的信息
  - content 属性制定了实际的元数据内容
    - 通常当 name 为 description 时，content 内容被显示为搜索引擎显示的结果页
- 增加自定义图标

  - 保存图片，以 ico、gif 或 png 后缀
  - 通过 link 元素导入，rel 属性指定图标形式

- 在 HTML 中应用 CSS 和 Javascript
  - CSS: 使用 link 元素
    - rel 属性等于 stylesheet 表示样式表
    - href 属性包含样式表的路径
  - Javascript: 使用 script 元素
    - src 属性指向脚本路径
    - defer 属性表示解析 HTML 之后再加载脚本
  ```html
  <!DOCTYPE html>
  <html lang="en-US">
    <head>
      <meta charset="utf-8" />
      <meta name="viewport" content="width=device-width" />
      <title>&lt;title&gt; element</title>
      <meta name="author" content="Chris Mills" />
      <meta
        name="description"
        content="The MDN Web Docs Learning Area aims to provide
        complete beginners to the Web with all they need to know to get
        started with developing web sites and applications."
      />
      <link rel="stylesheet" href="style.css" />
      <script src="script.js" defer></script>
    </head>
    <body>
      <h1>&lt;h1&gt; element</h1>
      <p>Japanese example: ご飯が熱い。</p>
    </body>
  </html>
  ```

## HTML 的标题和段落

- p 元素
  - 表示段落
- h 元素
  - 表示标题
  - 可以分为 h1~h6
  - 是一个语义元素，包裹的文本具有页面上顶级标题的作用

```html
<h1>我是文章的标题</h1>
<p>我是一个段落，千真万确。</p>

<h1>静夜思</h1>
<p>床前明月光，疑是地上霜。</p>
<p>举头望明月，低头思故乡。</p>
```

### 强调与重要性

- em 元素
  - 表示强调
- strong 元素
  - 表示重要性
- b 元素
  - 表示粗体
- i 元素
  - 表示斜体
- u 元素
  - 表示下划线

### 列表

- ul 元素
  - 表示无序列表
- ol 元素
  - 表示有序列表
- li 元素
  - 表示列表项
- dl 元素
  - 表示描述列表
- dt 元素
  - 表示描述列表中的术语
- dd 元素
  - 表示描述列表中术语的描述

### 文档与网站架构

- 文档的基本组成

  - 页眉
    - header 元素
  - 导航栏
    - nav 元素
  - 主内容
    - main 元素
    - 文章
      - article 元素
    - 分区
      - section 元素
  - 侧边栏
    - aside 元素
  - 页脚
    - footer 元素

- 无语义元素
  - div 元素
    - 块级元素
  - span 元素
    - 内联元素
- br 元素
  - 换行元素
- hr 元素
  - 水平分割线

### 文本格式进阶

- 引用
  - 块引用
    - blockquote 元素
      - cite 属性指向引用资源
  - 行内引用
    - q 元素
      - cite 属性指向引用资源
- 引文
  - cite 元素，通常包含所引用资源的标题
- 缩略语
  - abbr 元素
  - 包裹一个专用名词，使用 title 属性对其解释
- 标记联系方式
  - address 元素，仅仅包含联系方式
- 上标和下标
  - 上标 sup 元素
  - 下标 sub 元素

### 创建超链接

- 通过 a 元素创建
  - href 属性指向一个基本链接
  - title 属性添加支持信息
- 超链接可以包含不同的内容形成不同链接
- URL
  - 统一资源定位符
  - 是一个定义了在网络上的位置的文本字符串
  - 绝对 URL
    - 指向由其在 Web 上的绝对位置定义的位置，包括协议和域名
  - 相对 URL
    - 指向与你链接的文件相关的位置
- 发送邮件
  - 使用 mailto:

## 多媒体和嵌入

### 图片

- img 元素
  - src 属性指向嵌入页面的图像
  - alt 属性表示图像文本描述
  - width 属性 宽度
  - height 属性 高度
  - title 属性 为图片
- 媒体资源和许可
  - 许可类型
    - 版权所有
    - 自由许可
      - MIT、BSD、CC
    - 公共领域 CC0
- figure 元素
  - 为图片提供一个语义容器
  - 包含一个图片 img 和图片说明元素 figcaption
- 背景图片
  - 使用 CSS 属性 background-image
  - url 函数引入图片
- 网页上的其他图片
  - Canvas、SVG、WebGL、音频和视频、WebRTC

### 视频和音频内容

- 使用原生的 HTML 解决基于插件的技术
  - video 视频元素
  - audio 音频元素
- 常见属性

  - src 指向资源
  - controls 让资源包含控制界面
  - width、height 宽高
  - autoplay 自动播放
  - loop 循环播放
  - muted 默认关闭声音
  - preload 缓冲文件
    - none 不缓冲文件
    - auto 缓存媒体文件
    - metadata 仅缓冲文件的元数据

- 多个播放源提高兼容性

  - 容器格式定义了构成媒体文件的音频轨道和视频轨道的存储结构
  - 通过 source 元素可以实现为音频或视频提供多个播放源的功能

- 显示视频文本
  - 提供音频/视频中话语的文字记录
  - 使用 WebVTT 文件格式和 track 元素
    - WebVTT 的后缀为.vtt
    - track 元素包含在 video 元素中

## HTML 表格

### 表格基础

- 表格是由行和列(表格数据)组成的结构化数据集
- table 元素
  - 表格标签
- td 元素
  - 单元格，表格的最小内容容器
- tr 元素
  - 单元行
- th 元素
  - 表格标题
- 合并单元格
  - colspan 属性 跨列
  - rowspan 属性 跨行
- 设置样式
  - 为整列设置样式
    - col 元素
    - colgroup 元素
  - 在 table 元素开始，使用 colgroup 元素包裹 col 元素，载 col 元素内设置属性，通过 span 属性设置应用列数，如果需要隔行应用，使用空 col 元素

### 表格进阶特性和无障碍

- caption 元素
  - 表格标题
- thead 元素
  - 表格的表头
- tbody 元素
  - 表格的主要部分
- tfoot 元素
  - 表格表尾

### HTML 调试

- HTML 代码具有宽松的特性
- [生成错误报告](https://validator.w3.org/)
