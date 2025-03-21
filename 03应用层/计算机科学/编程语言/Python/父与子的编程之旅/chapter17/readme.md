# 动画精灵和碰撞检测
## 动画精灵
- 在屏幕上到处移动的图像或一个图像上的局部区域，可以和其他图形对象进行交互
    - pygame模块中有专门处理移动图片的工具
    - 原理: 将一组像素点作为一个整体来移动或显示，它是一种图形对象
    - 基本属性
        - 图像: 动画精灵显示的图片
        - 矩形区：包含动画精灵的矩形区域
- Sprite类
    - 动画精灵的基类
- move()方法
## 嘣！碰撞检测
- 碰撞检测: 检查两个动画精灵何时接触或重叠
- Pygame模块提供一种方法可以实现动画精灵分组，此处用Group类创建球列表
- 检测碰撞情况步骤
    - 从动画精灵组中删除这个动画精灵
    - 检查这个动画精灵与其所在分组中其他动画精灵之间的碰撞情况
    - 把这个动画精灵添加到原来分组
- 矩形碰撞与像素完美碰撞
    - 矩形碰撞: 精灵动画不是完全碰撞，而是球的外围矩形
    - 像素完美碰撞: 碰撞球的边缘
## 统计时间
- 循环时间
    - 之前使用time.delay()函数控制动画运行速度
    - 循环时间= 运行时间+ 延迟时间
    - 每个动画步称为一帧，帧速率是每秒帧数fps
- 用pygame.time.Clock()控制帧速率
    - time.Clock()会控制每个循环的运行时间
    - clock.tick() 每秒内执行循环的次数
- 检查帧速率
    - clock.get_fps()
- 调整帧速率
    - 通过tick()和get_fps()函数来实现
    - 可通过speed进行速率补偿
## 总结
- 碰撞检测