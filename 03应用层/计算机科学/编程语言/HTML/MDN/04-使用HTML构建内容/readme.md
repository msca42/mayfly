# 使用 HTML 构建 Web

## HTML 简介

### HTML 基础语法

- HTML 是一种用来告知浏览器如何组织页面的标记语言，由元素组成
- 元素可以包围或标记不同的内容，使其以某种方式呈现或工作

```HTML
<p>My cat is very grumpy</p>
```

- HTML 存在于扩展名为 html 的文本文件中，这种文件被称为 HTML 文档,最常见的 HTML 文件是 index.html
- 元素
  - 组成:开始标签、内容、结束标签
  - 嵌套:将一个元素置于另一个元素中
  - 空元素: 只有一个标签的元素
- 属性
  - 元素的特质，能够提供额外的信息
  - 组成: 属性名 = "属性值"
  - 布尔属性: 没有值或属性名和属性值相同的属性

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
- 注释
  - 将需要注释的内容包裹在<!-- -->中

### HTML 元信息

- html 元信息包含在 head 元素中，包含页面加载后不会在浏览器中显示的元信息
- title 元素
  - 表示整个 HTML 文档的标题
- meta 元素
  - charset 属性可以指定文档中的字符编码
  - name 属性指定 meta 元素的类型，说明该元素包含了什么类型的信息
  - content 属性指定了实际的元数据内容
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

### HTML 的标题和段落

- p 元素
  - 表示段落
- h 元素
  - 表示标题
  - 可以分为 h1~h6
  - 是一个语义元素，包裹的文本具有页面上顶级标题的作用
- 为什么需要结构化
  - 快速阅读的需要
  - 搜索引擎的优化
  - 无障碍优化
  - 方便 CSS 和 Javascript
- 为什么需要语义
  - 正确的元素给与内容正确的含义、作用以及外形

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
- 以下元素出现在 CSS 不完全被支持但可以使用粗体、斜体和下划线的时期
  - b 元素
    - 表示粗体
  - i 元素
    - 表示斜体
  - u 元素
    - 表示下划线

```html
<p>我很<em>庆幸</em>你没有<em>迟到</em>。</p>

<p>这杯液体<strong>毒性很大</strong>。</p>

<p>就指望你了，千万<strong>不要</strong>迟到！</p>
```

### 列表

- ul 元素
  - 表示无序列表
- ol 元素
  - 表示有序列表
- li 元素
  - 表示列表项
- dl 元素
  - 表示描述列表,目的是标记一组项目及其相关描述
- dt 元素
  - 表示描述列表中的术语
- dd 元素
  - 表示描述列表中术语的描述
  - 单个术语可以由多个描述

```HTML
<ul>
  <li>豆浆</li>
  <li>油条</li>
  <li>豆汁</li>
  <li>焦圈</li>
</ul>

<ol>
  <li>沿这条路走到头</li>
  <li>右转</li>
  <li>直行穿过第一个十字路口</li>
  <li>在第三个十字路口处左转</li>
  <li>继续走 300 米，学校就在你的右手边</li>
</ol>
<dl>
  <dt>内心独白</dt>
  <dd>
    戏剧中，某个角色对自己的内心活动或感受进行念白表演，这些台词只面向观众，而其他角色不会听到。
  </dd>
  <dt>语言独白</dt>
  <dd>
    戏剧中，某个角色把自己的想法直接进行念白表演，观众和其他角色都可以听到。
  </dd>
  <dt>旁白</dt>
  <dd>
    戏剧中，为渲染幽默或戏剧性效果而进行的场景之外的补充注释念白，只面向观众，内容一般都是角色的感受、想法、以及一些背景信息等。
  </dd>
</dl>
```

### 文档与网站架构

- 探讨如何规划基本的网站结构
- 文档的基本组成
  - 页眉
    - header 元素
  - 导航栏
    - nav 元素
  - 主内容
    - main 元素： 存放本页面独有内容
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
- 网站规划
  - 信息架构：规划整个多页面网站的结构，包括如何排列和相互链接，以获得最佳的用户体验
  - 提取页面相同的元素，举例如下：
    - 页眉
      - 标题和徽标
      - 站点语句选择器
    - 导航栏
    - 页脚
      - 版权声明
      - 至条款、联系方式和无障碍政策的链接
  - 绘制草图
  - 头脑风暴，将需要独立展示的内容形成清单
  - 对清单进行分组分类，每组以单独页面的形式展示
  - 绘制一个网站地图，以主页为中心，建立网页之间的联系

### 文本格式进阶

- 引用
  - 块引用
    - blockquote 元素
      - cite 属性指向引用资源
  - 行内引用
    - q 元素
      - cite 属性指向引用资源
  - 块引用和行内引号的区别展示元素标签不同
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
- 展示计算机代码
  - code 标记计算机通用的代码
  - pre 用于保留空白字符
  - var 标记具体变量名
  - kbd 标记电脑键盘的输入
  - samp 标记计算机程序的输出
- 标记时间和日期
  - time 通过 datetime 属性可以让机器识别时间或日期

```html
<p>这是块引用：</p>
<blockquote
  cite="https://developer.mozilla.org/zh-CN/docs/Web/HTML/Element/blockquote"
>
  <p>
    <strong>HTML <code>&lt;blockquote&gt;</code> 元素</strong>（或<em
      >HTML 块级引用元素</em
    >）表示所附文本为扩展引用。
  </p>
</blockquote>

<p>我们使用 <abbr>HTML</abbr> 超文本标记语言来组织网页文档。</p>

<p>
  第 33 届<abbr title="夏季奥林匹克运动会">奥运会</abbr>已于 2024 年 7
  月在法国巴黎举行。
</p>
```

### 创建超链接

- 通过 a 元素创建
  - href 属性指向一个基本链接
  - title 属性添加支持信息
- 链接有多种存在形式
  - 块级链接、图片链接
- 文档片段
  - 超链接可以链接到文档的特定部分
  - 步骤
    - 在要链接的元素分配一个 id 属性
    - 链接该部分，将 id 放在 URL 之后，在前面包含#
- URL
  - 统一资源定位符，是一个定义了在网络上的位置的文本字符串
  - 绝对 URL
    - 指向由其在 Web 上的绝对位置定义的位置，包括协议和域名
  - 相对 URL
    - 指向与你链接的文件相关的位置
- 最佳实践
  - 下载，建议使用 download 属性
  - 电子邮件，在 herf 属性中使用关键字 mailto:

```HTML
<p>
  我创建了一个指向
  <a href="https://www.mozilla.org/zh-CN/">Mozilla 主页</a>的链接。
</p>
```

## 多媒体和嵌入

### 图片

- img 元素
  - src 属性指向嵌入页面的图像
  - alt 属性表示图像文本描述
  - width 属性 宽度
  - height 属性 高度
  - title 属性 为图片
- 可替换元素
  - 类似 img 和 video
  - 元素的内容和大小由外部资源定义，而不是由元素本身的内容定义
- 媒体资源和许可
  - 许可类别
    - 版权所有
    - 自由许可
    - 公共领域 C00
- figure 元素
  - 为图片提供一个语义容器，在说明文字和图片之间建立联系
  - 包含一个图片 img 和图片说明元素 figcaption
- 背景图片
  - 使用 CSS 属性 background-image 和其他 background-\*属性控制
  - 如果图片是纯粹的装饰，则使用背景图片
- 网页上的其他图片
  - Canvas、SVG、WebGL、音频和视频、WebRTC

```html
<img src="dinosaur.jpg" alt="恐龙" />
```

### 视频和音频内容

- 早期的在线视频和音频技术是基于插件的，如 Flash 和 Silverlight
- 目前取代的是原生的 HTML 解决方案，包含 video 和 audio 元素以及控制它们的 JavaScript API
- 使用原生的 HTML 解决基于插件的技术
  - video 视频元素
  - audio 音频元素
- 常见属性
  - src 指向资源
  - controls 让资源包含控制界面
  - width、height 宽高
    - audio 不支持
  - autoplay 自动播放
  - loop 循环播放
  - muted 默认关闭声音
  - poster 指向一个图像的 URL，会在视频播放前显示
    - audio 不支持
  - preload 缓冲文件
    - none 不缓冲文件
    - auto 缓存媒体文件
    - metadata 仅缓冲文件的元数据
- 多个播放源提高兼容性
  - 容器格式
    - 定义了构成媒体文件的音频轨道和视频轨道的存储结构
    - 包含了媒体文件的元数据，以及使用什么编解码对其通道进行编码
  - 通过 source 元素可以实现为音频或视频提供多个播放源的功能
    - 通过 src 指向视频来源，通过 type 表示视频格式
- 显示视频文本
  - 提供音频/视频中话语的文字记录
  - 使用 WebVTT 文件格式和 track 元素
    - WebVTT 的后缀为.vtt
    - track 元素包含在 video 元素中
      - kind 属性指明 track 文件类型
        - subtitles 听力正常 提供对话内容的文字解释
        - captions 听力障碍 更全面的辅助信息
        - descriptions 视力障碍 描述场景、动作、人物
      - srclang 属性指明语言类型

```html
<video src="rabbit320.webm" controls>
  <p>
    你的浏览器不支持 HTML 视频。可点击<a href="rabbit320.mp4">此链接</a>观看。
  </p>
</video>
```

## HTML 表格

### 表格基础

- 表格是由行和列(表格数据)组成的结构化数据集
- 使用场景
  - 表格数据、网页布局(不建议)
- table 元素
  - 表格标签
- td 元素
  - 单元格，表格的最小内容容器
- tr 元素
  - 单元行
- th 元素
  - 表格标题
  - 通常位于第一个单元行中
- 合并单元格
  - colspan 属性 跨列
  - rowspan 属性 跨行
- 设置样式
  - 为整列设置样式
    - col 元素:
    - colgroup 元素
  - 在 table 元素开始，使用 colgroup 元素包裹 col 元素，在 col 元素内设置属性，通过 span 属性设置应用列数，如果需要隔行应用，使用空 col 元素

```HTML
<table>
  <colgroup>
    <col />
    <col style="background-color: yellow" />
  </colgroup>
  <tr>
    <th>数据 1</th>
    <th>数据 2</th>
  </tr>
  <tr>
    <td>加尔各答</td>
    <td>橙汁</td>
  </tr>
  <tr>
    <td>机器人</td>
    <td>爵士乐</td>
  </tr>
</table>
```

### 表格进阶特性和无障碍

- caption 元素
  - 表格标题
- thead 元素
  - 表格的表头
- tbody 元素
  - 表格的主要部分
- tfoot 元素
  - 表格表尾

## HTML 中的表单和按钮

- 用户交互
  - 实现双向交互体验，使用按钮和表单完成
- 按钮
  - button 元素
    - 根据类型不同可以有不同的行为
      - 在 form 元素中默认是提交表单，类型是 submit
      - 类型 reset 表示重置表单，不建议使用
      - 类型 button 表示普通按钮
- 表单
  - form 元素
    - 包裹表单的所有内容，包含在同一元素的表单空间，会在表单提交时一起发送
    - 属性
      - action：指定提交的表单数据将发送到哪个页面进行处理
      - method: 指定将表单数据传递到服务器时，使用的数据传输方法
- 其他控件
  -

```HTML
<!doctype html>
<html lang="zh-CN">
  <head>
    <meta charset="utf-8" />
    <title>第一个表单</title>
  </head>
  <body>
    <form action="./submit_page" method="get">
      <h2>订阅我们的新闻简报</h2>
      <p>
        <label for="name">姓名（必填）：</label>
        <input type="text" name="name" id="name" required />
      </p>
      <p>
        <label for="email">邮箱（必填）：</label>
        <input type="email" name="email" id="email" required />
      </p>
      <p>
        <button>订阅新闻简报！</button>
      </p>
    </form>
  </body>
</html>
```

### HTML 调试

- HTML 代码具有宽松的特性
- [生成错误报告](https://validator.w3.org/)
