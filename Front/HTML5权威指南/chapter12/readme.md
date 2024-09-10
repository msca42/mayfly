# 表单

## 制作基本表单
- form元素: 表单元素
- input元素: 收集用户输入数据
- button元素: 按钮

## 配置表单
- method属性:指定用来将表单发送到服务器的HTTP方法
    - get请求：用于安全交互，同一请求可以发起多次而不会产生额外作用，通常用于获取只读信息
    - post请求: 用户不安全交互，提交数据的行为导致状态的改变，通常用于会改变应用程序状态的各种操作
- enctype属性: 指定浏览器对发送给服务器的数据采用的编码方式

- 控制表单的自动完成功能
    - form元素 autocomplete属性，默认开启
- 指定表单信息发的目标显示位置
    - target属性
- 设置表单名称
    - name属性: 用来为表单设置一个独一无二的标识符,以便使用DOM时区分各个表单
    - name属性不会发送给服务器，只限于DOM

## 在表单中添加说明标签
- label元素: 为表单中每一个元素提供说明 
- 使用规则，将label元素包裹input元素，通过label元素的for属性和input元素的id属性相关联

## 自动聚焦到某个 input 元素
- autofocus属性可以自动聚焦

## 禁用单个 input 元素
- disabled属性可以禁用input元素

## 对表单元素编组
- 使用fieldset元素对表单进行编组
- 通过legend元素可以为编组提供相关说明
- 通过fieldset元素的disabled属性可以一次性禁用多个input元素

## 使用 button 元素
- type属性值: submit、reset、button

## 使用表单外的元素

## 小结
