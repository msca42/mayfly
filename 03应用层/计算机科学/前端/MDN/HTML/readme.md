# 使用HTML构建Web
## HTML简介
### 开始学习HTML
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

### HTML元信息
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

### HTML的标题和段落
- p元素
    - 表示段落
- h元素
    - 表示标题
    - 可以分为h1~h6

### 强调与重要性
- em元素
    - 表示强调
- strong元素
    - 表示重要性
- b元素
    - 表示粗体
- i元素
    - 表示斜体
- u元素
    - 表示下划线

### 列表
- ul元素
    - 表示无序列表
- ol元素
    - 表示有序列表
- li元素
    - 表示列表项
- dl元素
    - 表示描述列表
- dt元素
    - 表示描述列表中的术语
- dd元素
    - 表示描述列表中术语的描述

### 文档与网站架构
- 文档的基本组成
    - 页眉
        - header元素
    - 导航栏
        - nav元素
    - 主内容
        - main元素
        - 文章
            - article元素
        - 分区
            - section元素
    - 侧边栏
        - aside元素
    - 页脚
        - footer元素

- 无语义元素
    - div元素
        - 块级元素
    - span元素
        - 内联元素
- br元素
    - 换行元素
- hr元素
    - 水平分割线

### 文本格式进阶
- 引用
    - 块引用
        - blockquote元素
            - cite属性指向引用资源
    - 行内引用
        - q元素
            - cite属性指向引用资源
- 引文
    - cite元素，通常包含所引用资源的标题
- 缩略语
    - abbr元素
    - 包裹一个专用名词，使用title属性对其解释
- 标记联系方式      
    - address元素，仅仅包含联系方式
- 上标和下标
    - 上标sup元素
    - 下标sub元素

### 创建超链接
- 通过a元素创建
    - href属性指向一个基本链接
    - title属性添加支持信息
- 超链接可以包含不同的内容形成不同链接
- URL
    - 统一资源定位符
    - 是一个定义了在网络上的位置的文本字符串
    - 绝对URL
        - 指向由其在Web上的绝对位置定义的位置，包括协议和域名
    - 相对URL
        - 指向与你链接的文件相关的位置
- 发送邮件
    - 使用mailto:

## 多媒体和嵌入
### 图片
- img元素
    - src属性指向嵌入页面的图像
    - alt属性表示图像文本描述
    - width属性 宽度
    - height属性 高度
    - title属性 为图片
- 媒体资源和许可
    - 许可类型
        - 版权所有
        - 自由许可
            - MIT、BSD、CC
        - 公共领域CC0
- figure元素
    - 为图片提供一个语义容器
    - 包含一个图片img和图片说明元素figcaption
- 背景图片
    - 使用CSS属性background-image
    - url函数引入图片
- 网页上的其他图片
    - Canvas、SVG、WebGL、音频和视频、WebRTC
### 视频和音频内容
- 使用原生的HTML解决基于插件的技术
    - video 视频元素
    - audio 音频元素
- 常见属性
    - src 指向资源
    - controls  让资源包含控制界面
    - width、height 宽高
    - autoplay 自动播放
    - loop  循环播放
    - muted 默认关闭声音
    - preload 缓冲文件
        - none 不缓冲文件
        - auto 缓存媒体文件
        - metadata 仅缓冲文件的元数据

- 多个播放源提高兼容性
    - 容器格式定义了构成媒体文件的音频轨道和视频轨道的存储结构
    - 通过source元素可以实现为音频或视频提供多个播放源的功能

- 显示视频文本
    - 提供音频/视频中话语的文字记录
    - 使用WebVTT文件格式和track元素
        - WebVTT的后缀为.vtt
        - track元素包含在video元素中
## HTML表格
### 表格基础
- 表格是由行和列(表格数据)组成的结构化数据集
- table元素
    - 表格标签
- td元素
    - 单元格，表格的最小内容容器
- tr元素
    - 单元行
- th元素
    - 表格标题
- 合并单元格
    - colspan属性 跨列
    - rowspan属性 跨行
- 设置样式 
    - 为整列设置样式
        - col元素
        - colgroup元素
    - 在table元素开始，使用colgroup元素包裹col元素，载col元素内设置属性，通过span属性设置应用列数，如果需要隔行应用，使用空col元素
### 表格进阶特性和无障碍
- caption元素
    - 表格标题
- thead元素
    - 表格的表头
- tbody元素
    - 表格的主要部分
- tfoot元素
    - 表格表尾
### HTML调试
- HTML代码具有宽松的特性
- [生成错误报告](https://validator.w3.org/)