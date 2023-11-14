alien_0 = {'color':'green','speed':'slow'}
# 键不存在，报错
# print(alien_0['points'])
# get(),如果没有key，返回提示语，如果没有提示语参数，返回None
point_value =  alien_0.get('points','No point value assigned.')

print(point_value)

