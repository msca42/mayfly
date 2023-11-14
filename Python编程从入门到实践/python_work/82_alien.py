# 字典
# 一系列的键值对，任意对象都可以作为值
# 使用{}表示
alien_0 = {'color':'green','points':5}

# 访问字典中的值 
# 如果键不存在，报错
print(alien_0['color'])
new_points = alien_0['points']
print(f"You just earned {new_points} points")

# 添加键值对
alien_0['x_position'] = 0
alien_0['y_position'] = 25
print(alien_0)

# 删除键值对
del alien_0['points']
print(alien_0)