# 初探 HTML

- HTML 是一种标记语言，其标记以应用于文档内容的**元素**为其存在的形式

## 使用元素

- 元素
  - 组成:
    - 开始标签、元素的内容、结束标签
  - 作用:
    - 一种用来向浏览器说明文档内容的工具，其效果体现在内容之上
    - 不同元素由不同的确切含义
- 使用空元素
  - 没有内容的元素称为空元素
- 使用自闭合标签
  - 空元素可以用一个标签表示，这个标签称为自闭合标签
- 使用虚元素
  - 虚元素: 元素只能使用一个标签表示，在其中放置任何内容都不符合 HTML 规范
  - 两种表示方法:
    - 一个开始元素
    - 空元素的自闭合表示

## 使用元素属性

- 元素可以使用属性进行配置
  - 属性位于开始标签或单标签上
  - 属性具有名称和值两部分
  - 属性可以分为全局属性和专用属性
  - 一个元素可以应用多个属性，这些属性以一个或几个空格分隔，属性的顺序不做要求
- 布尔属性
  - 没有属性值，或者说属性值就是属性名本身
  - 也可以设置属性值为空字符串
- 自定义属性(扩展属性)
  - 使用 data-开头和其他属性区分

## 创建 HTML 文档

- 创建后缀为 html 的文本文件
- 外层结构
  - 外层结构由 DOCTYPE 和 html 元素确定
  - 表示处理的是 HTML 文档
- 元数据
  - 由 head 元素实现
    - 向浏览器提供文档的信息
    - 规定文档与外部资源的关系
    - 定义内嵌 CSS 样式
    - 放置和载入脚本程序
  - title 元素会将其内容显示在窗口的标题栏上
- 内容
  - 包含在 body 元素中
  - 告诉浏览器该想用户显示文档的哪个部分
- 元素关系
  - 包含相邻元素的元素，前者是后者的子元素，后者是前者的父元素
  - 非相邻的包含元素，被包含的元素称为后代元素
  - 具有相同父元素的多个元素互为兄弟元素
- 了解元素类型
  - HTML5 规范将元素分为三大类: 元数据元素、流元素、短语元素和受限元素
  - 元数据元素: 用来构建 HTML 文档的基本结构、以及就如何处理文档想浏览器提供信息和指示
  - 短语元素和流元素的用途是确定一个元素合法的父元素和子元素范围
    - 短语元素
      - 行内级元素，仅能包裹文本或同类元素，无法直接包含块级元素
    - 流元素
      - 构成文档主体的块级或内联元素，可包含文本、嵌入内容或其他流元素
      - 短语元素的超集，所有短语元素都是流元素
      - 所有的流元素不都是短语元素
    - 受限元素
      - 特指嵌套规则严格的元素

## 使用 HTML 实体

- 实体是浏览器用来替代特殊字符的一种代码，每个特殊字符都有一个实体名称和实体编号
- 常见 HTML 实体
  - <、\&lt;
  - \>、\&gt;
  - &、\&amp;

## HTML5 全局属性

- accesskey 属性
  - 设定一个或几个用来选择页面上元素的快捷键
  - Windows 系统按 Alt+属性值对应的键
- class 属性
  - 用来将元素归类
- contenteditable 属性
  - 让用户能够修改页面上的内容
- contextmenu 属性
  - 为元素设定快捷菜单
- dir 属性
  - 规定元素中文字的方向
  - 属性值:
    - ltr 从左到右的文字
    - rtl 从右到左的文字
- draggable 属性
  - 用来表示元素是否有可拖放
- dropzone 属性
- hidden 属性
  - 表示相关元素当前无需关注，浏览器处理方式是隐藏相关元素
- id 属性
  - 给元素分配一个唯一的标识符, 标识符通常用来将样式应用到元素上
- lang 属性
  - 说明元素内容使用的语言
- spellcheck 属性
  - 表明浏览器是否应对元素的内容进行拼写检查
- style 属性
  - 直接在元素上定义 CSS 样式
- tabindex 属性
  - 通过 Tab 键在各元素之间切换,用 tabindex 属性可以改变默认的转移顺序
- title 属性
  - 提供元素的额外信息

## 有用的 HTML 工具

## 小结

- 介绍 HTML 文档的结构和特征
- 了解如何使用属性配置浏览器处理元素的方式
- 介绍所有全局属性
