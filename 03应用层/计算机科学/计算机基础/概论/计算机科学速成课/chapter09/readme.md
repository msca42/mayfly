# 高级CPU设计
- CPU提速方式   
    - 减少晶体管的切换时间
    - 增加缓存
        - 缓存命中：需要的数据在缓存中
    - 指令流水线
- 针对专门事务有特有的指令集
- 缓存和RAM之间不同步
    - 同步时间：缓存已经满载，CPU同时需要向缓存输入数据
    - 操作  
        - 检查脏位，如果脏位有数据，将数据写回RAM，并清空缓存