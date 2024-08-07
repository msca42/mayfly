# 初探 CSS
- CSS用来规定HTML文档的呈现形式(外观和格式编排)

## 定义和应用样式
- CSS样式:
    - CSS属性: CSS属性值
- 元素内嵌样式
    - 通过全局属性style把样式应用在元素上，
- 文档内嵌样式
    - 通过元素style把样式应用在元素上
- 外部样式表
    - 通过独立的css文件应用样式
    - 导入外部样式需要通过link元素
    - 从其他样式表导入样式通过@import语句

## 样式的层叠和继承
- 浏览器根据层叠和继承的规则确定显示一个元素时各种样式属性采用的值
- 样式的来源: 元素内嵌、文档内嵌、外部样式表、浏览器样式、用户样式
    - 浏览器样式: 用户代理样式，浏览器默认样式
    - 用户样式: 用户自定义的样式表，需要在用户的个人配置信息目录中生成文件
- 样式显示次序: 元素内嵌、文档内嵌、外部样式、用户样式、浏览器样式
- 层叠次序
    - 重要!important
    - 同级样式冲突
        - 根据a-b-c的具体程度，前者相同则比较后者
            - a: 样式的选择器中id值的数目
            - b: 选择器中其他属性和伪类的数目
            - c: 选择其中元素名和伪元素的数目
        - 如果具体程度相同，根据书写的先后顺序
- 继承机制
    - 如果浏览器没有查找到直接样式，就会求助继承机制
    - 继承属性: 与元素外观(文字颜色、字体等)相关的样式会被继承
    - 非继承属性: 与元素页面布局相关的
    - 强制继承: inherit

## CSS 中的颜色
- 方式一: 使用颜色关键字
- 方式二: 使用红、绿、蓝三色的十进制表示 0,0,0
- 方式三: 使用红、绿、蓝三色的十六进制表示 #000000
- 方式四: 使用函数表示三原色

## CSS 中的长度
- 绝对单位: 现实世界的度量单位，in、cm、mm、pt、pc
- 相对单位: 相对于其他类型的单位，em、ex、rem、px、%   
    - em: 相对于当前字体的大小
    - rem: 相对于html的字体的大小
    - ex: 相对于当前字体的x高度,也即字体基线到中线之间的距离
    - px: 像素通常被当成绝对单位对待
    - %: 可以把度量单位表示为其他属性值的百分比
        - 并非所有属性都可以使用百分比
        - 对于能用百分比的属性，百分比挂钩的其他属性各不相同
- 未获取广泛支持的CSS属性: gd、vw、vh、vm、ch

## 其他 CSS 单位
- CSS角度: deg度、grad百分度、rad弧度、turn圆周
- CSS时间: s秒、ms毫秒

## 测试 CSS 特性的支持情况
- 工具一: http://caniuse.com
- 工具二: www.modernizr.com

## 有用的 CSS 工具
- 浏览器样式报告
- 用SelectorGadget生成选择器
- 用LESS改进CSS
- 使用CSS框架

## 小结
