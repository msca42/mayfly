# 使用 CSS 选择器（第二部分）

## 使用结构性伪类选择器
- 能够根据元素在文档中的位置选择元素
- 根元素选择器
    - :root 
    - 匹配文档中的根元素
- 子元素选择器
    - :first-child 选择第一个子元素
        - 匹配由包含它们的元素定义的第一个子元素
    - :last-child 选择最后一个子元素
    - :only-child 选择元素的唯一元素
    - :only-of-type 选择元素指定类型的唯一子元素
- :nth-child选择器
    - 指定一个索引以匹配特定位置的元素
    - :nth-child(n) 选择父元素的第n个子元素
    - :nth-last-child(n)选择父元素的倒数第n个子元素
    - :nth-of-type(n) 选择父元素定义类型的第n个子元素
    - :nth-last-of-type(n) 选择父元素定义类型的第n个子元素

## 使用 UI 伪类选择器
- 根据元素的状态匹配元素
    - :enabled 启用状态的元素
    - :disabled 禁用状态的元素
    - :checked 被选中的input元素
    - :default 默认元素
    - :valid、:invalid  根据输入选择有效或无效的input元素
    - :in-range、:out-of-range 在指定范围之内的活之外受限的input元素
    - :required 根据是否允许required属性选择input元素

## 使用动态伪类选择器

## 其他伪类选择器

## 小结


白云